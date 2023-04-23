#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TXADTypes.h"
#import "TXADBannerViewDelegate.h"
#import "TXADUnityAdPos.h"
#import "TXADILineItem.h"
#import "TXADNetworkConfigs.h"
#import "TXADBannerAdSize.h"
#import "TXADLineItemFilter.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 The view that displays banner ads.
*/
@interface TXADBannerView : UIView

/*!
@brief Initializes and returns a banner view with the specified ad unitId and viewController.
@param adUnitId Banner AdUnit Id on SDK platform.
@param viewController View controller is used by the banner to present full screen content after the user interacts with the ad. The view controller is most commonly the view controller displaying the banner.
@result TXADBannerView
*/
- (id)initWithAdUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;

/*!
@property adUnitId
@abstract The banner's ad unit ID
*/
@property(nonatomic, readonly) NSString *adUnitId;

/*!
@brief Optional delegate object that receives state change notifications from this BannerView. Typically this is a UIViewController.
*/
@property(nonatomic, weak) id<TXADBannerViewDelegate> delegate;

/*!
@property lineItemFilter
@brief Optional delegate object that will filter specifed LineItem in AdUnit.
*/
@property(nonatomic, weak) id<TXADLineItemFilter> lineItemFilter;
// iOS End

// Unity Start
- (id)initWithBannerClientReference:(TXADTypeBannerClientRef _Nullable* _Nullable)bannerClient adUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
// 引用 Unity 的 BannerClient
@property(nonatomic, assign) TXADTypeBannerClientRef _Nullable* _Nullable bannerClient;
// 广告加载后，回调到 Unity 的接口
@property(nonatomic, assign) TXADBannerAdDidReceiveAdCallback adReceivedCallback;
@property(nonatomic, assign) TXADBannerAdDidFailToReceiveAdWithErrorCallback adFailedCallback;
@property(nonatomic, assign) TXADBannerAdWillPresentScreenCallback willPresentCallback;
@property(nonatomic, assign) TXADBannerAdDidDismissScreenCallback didDismissCallback;
@property(nonatomic, assign) TXADBannerAdWillLeaveApplicationCallback willLeaveCallback;
// Unity End

/*!
@method setAdSize
@abstract Set adSize of Banner. (Optional). Use the adSize on web config priority. You can set different sizes according to the phone size. (Phone, tablet)
@param adSize TXADBannerAdSize
*/
- (void)setAdSize:(TXADBannerAdSize)adSize;

/*!
@method setExpressAdSize
@abstract Set adSize of express ad.
@param adSize TXADBannerAdSize
*/
- (void)setExpressAdSize:(CGSize)adSize;

/*!
@method setMuted
@abstract Set whether video play muted, mute by default.
@param muted true-play video muted; false-play video sound
*/
- (void)setMuted:(BOOL)muted;

/*!
@method setNetworkConfigs
@abstract set network configs
@param configs TXADNetworkConfigs
*/
- (void)setNetworkConfigs:(TXADNetworkConfigs *)configs;

/*!
@method isReady
@abstract Returns YES if the bannerView is ready to be displayed. The delegate's  bannerViewDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: banner is ready, NO: no ad ready
*/
- (BOOL)isReady;

/*!
@method isReady:
@abstract Returns YES if the bannerView is ready to be displayed. The delegate's  bannerViewDidReceiveAd: will be called after this property switches from NO to YES.
@param scene scene used to divide analysis data
@result YES: banner is ready, NO: no ad ready
*/
- (BOOL)isReady:(NSString *)scene;

/*!
@method enterAdScene:
@abstract Called when user enter ad scene, for record user enter ad scene count.
*/
- (void)enterAdScene;

/*!
@method enterAdScene:
@abstract Called when user enter ad scene, for record user enter ad scene count.
@param scene ad scene Id
*/
- (void)enterAdScene:(NSString *)scene;

/*!
@method showAdView
@abstract showAdView in center of container
@param container the container to show TXADBannerView
*/
- (void)showAdView:(UIView *)container;

/*!
@method getReadyLineItem
@abstract Return loaded LineItem of max priority and eCPM.
@result TXADILineItem
*/
- (TXADILineItem *)getReadyLineItem;

/*!
@method destroy
@abstract destory the banner Ad
*/
- (void)destroy;

// iOS Start
/*!
@method loadAd
@abstract Makes a banner ad request.
*/
- (void)loadAd;
// iOS End

// Unity Start
- (void)setUnityPosition:(TXADUnityAdPosition)position;
- (void)setUnityPositionWithX:(int)x andY:(int)y;

- (void)loadAdUnity;
- (void)showUnity;
- (void)hideUnity;

- (void)removeUnity;

// Need Delete
- (void)showUnity:(TXADUnityAdPosition)position;
- (void)showUnityWithX:(int)x andY:(int)y;
// Need Delete
// Unity End

@end
NS_ASSUME_NONNULL_END
