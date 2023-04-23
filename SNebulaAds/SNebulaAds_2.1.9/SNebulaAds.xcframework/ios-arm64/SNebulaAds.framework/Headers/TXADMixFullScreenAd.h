#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TXADTypes.h"
#import "TXADMixFullScreenAdDelegate.h"
#import "TXADNetworkConfigs.h"
#import "TXADNativeAdLayout.h"
#import "TXADInnerMixFullScreenAdDelegate.h"
#import "TXADILineItem.h"
#import "TXADLineItemFilter.h"

NS_ASSUME_NONNULL_BEGIN

/*!
@class TXADMixFullScreenAd
@abstract TXAD MixFullScreen Ad class
*/
@interface TXADMixFullScreenAd : NSObject<TXADInnerMixFullScreenAdDelegate>

/*!
@property adUnitId
@abstract The mixFullScreen's ad unit ID
*/
@property(nonatomic, readonly) NSString *adUnitId;

/// iOS Start
/*!
@method initWithAdUnitId
@abstract initilize mixFullScreen Ad
@param adUnitId mixFullScreen Ad ID in SDK platform
@result TXADMixFullScreenAd instance
*/
- (TXADMixFullScreenAd *)initWithAdUnitId:(NSString *)adUnitId;

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this TXADMixFullScreenAd
*/
@property(nonatomic, weak) id<TXADMixFullScreenAdDelegate> delegate;

/*!
@property lineItemFilter
@brief Optional delegate object that will filter specifed LineItem in AdUnit.
*/
@property(nonatomic, weak) id<TXADLineItemFilter> lineItemFilter;
/// iOS End

/*!
@method setBannerAdSize
@abstract Set adSize of Banner in MixFullScreenAd. (Optional). Use the adSize on web config priority. You can set different sizes according to the phone size. (Phone, tablet)
@param adSize TXADBannerAdSize
*/
- (void)setBannerAdSize:(TXADBannerAdSize)adSize;

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
@method setNativeAdLayout
@abstract set native ad layout to native
@param layout TXADNativeAdLayout
*/
- (void)setNativeAdLayout:(TXADNativeAdLayout *)layout;

/*!
@method setNetworkConfigs
@abstract set network configs
@param configs TXADNetworkConfigs
*/
- (void)setNetworkConfigs:(TXADNetworkConfigs *)configs;

/*!
@method loadAd
@abstract Makes an mixFullScreen ad request.
*/
- (void)loadAd;

/*!
@method isReady
@abstract Returns YES if the mixFullScreen is ready to be displayed. The delegate's  mixFullScreenAdDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: ad is ready, NO: no ad ready
*/
- (BOOL)isReady;

/*!
@method isReady:
@abstract Returns YES if the mixFullScreen is ready to be displayed. The delegate's  mixFullScreenAdDidReceiveAd: will be called after this property switches from NO to YES.
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
@method getReadyLineItem
@abstract Return loaded LineItem of max priority and eCPM.
@result TXADILineItem
*/
- (TXADILineItem *)getReadyLineItem;

/*!
@method destroy
@abstract destory the ad request.
*/
- (void)destroy;

/*!
@method showFromViewController
@abstract Presents the mixFullScreen ad which takes over the entire screen until the user dismisses it
@param viewController Set rootViewController to the current view controller at the time this method is called. If your application does not use view controllers pass in nil and your views will be removed from the window to show the mixFullScreen and restored when done. After the mixFullScreen has been removed, the delegate's mixFullScreenDidDismissScreen: will be called.
*/
- (void)showFromViewController:(nullable UIViewController *)viewController;

/*!
@method showFromViewController
@abstract Presents the mixFullScreen ad which takes over the entire screen until the user dismisses it
@param viewController Set rootViewController to the current view controller at the time this method is called. If your application does not use view controllers pass in nil and your views will be removed from the window to show the mixFullScreen and restored when done. After the mixFullScreen has been removed, the delegate's mixFullScreenDidDismissScreen: will be called.
@param layout TXADNativeAdLayout
*/
- (void)showFromViewController:(nullable UIViewController *)viewController nativeAdLayout:(TXADNativeAdLayout *)layout;

/*!
@method showFromViewController
@abstract Presents the mixFullScreen ad which takes over the entire screen until the user dismisses it
@param viewController Set rootViewController to the current view controller at the time this method is called. If your application does not use view controllers pass in nil and your views will be removed from the window to show the mixFullScreen and restored when done. After the mixFullScreen has been removed, the delegate's mixFullScreenDidDismissScreen: will be called.
@param sceneId scene ID
*/
- (void)showFromViewController:(nullable UIViewController *)viewController sceneId:(NSString * _Nullable)sceneId;

/*!
@method showFromViewController
@abstract Presents the mixFullScreen ad which takes over the entire screen until the user dismisses it
@param viewController Set rootViewController to the current view controller at the time this method is called. If your application does not use view controllers pass in nil and your views will be removed from the window to show the mixFullScreen and restored when done. After the mixFullScreen has been removed, the delegate's mixFullScreenDidDismissScreen: will be called.
@param layout TXADNativeAdLayout
@param sceneId scene ID
*/
- (void)showFromViewController:(nullable UIViewController *)viewController nativeAdLayout:(TXADNativeAdLayout *)layout sceneId:(NSString * _Nullable)sceneId;


// Unity Start
- (id)initWithMixFullScreenClientReference:(TXADTypeMixFullScreenClientRef _Nullable* _Nullable)mixFullScreenClient adUnitId:(NSString *)adUnitId;
/// A reference to the Unity MixFullScreen client.
@property(nonatomic, assign) TXADTypeMixFullScreenClientRef _Nullable* _Nullable mixFullScreenClient;
/// The ad callback into Unity.
@property(nonatomic, assign) TXADMixFullScreenAdDidReceiveAdCallback adReceivedCallback;
@property(nonatomic, assign) TXADMixFullScreenAdDidFailToReceiveAdWithErrorCallback adFailedCallback;
@property(nonatomic, assign) TXADMixFullScreenAdWillPresentScreenCallback willPresentCallback;
@property(nonatomic, assign) TXADMixFullScreenAdDidDismissScreenCallback didDismissCallback;
@property(nonatomic, assign) TXADMixFullScreenAdWillLeaveApplicationCallback willLeaveCallback;
@property(nonatomic, assign) TXADMixFullScreenAdVideoDidStartCallback didStartCallback;
@property(nonatomic, assign) TXADMixFullScreenAdVideoDidCompleteCallback didCompleteCallback;
@property(nonatomic, assign) TXADMixFullScreenAdDidRewardCallback didRewardCallback;
@property(nonatomic, assign) TXADMixFullScreenAdDidFailedToRewardCallback didFailedToRewardCallback;
// Unity End

// Unity Start
- (void)showUnity;

- (void)showUnity:(nullable NSString *)sceneId;
// Unity End

@end

NS_ASSUME_NONNULL_END
