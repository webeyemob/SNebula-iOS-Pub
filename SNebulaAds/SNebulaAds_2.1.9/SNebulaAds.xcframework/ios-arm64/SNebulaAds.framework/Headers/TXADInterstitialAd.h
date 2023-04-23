#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TXADTypes.h"
#import "TXADInterstitialAdDelegate.h"
#import "TXADInnerInterstitialAdDelegate.h"
#import "TXADNetworkConfigs.h"
#import "TXADILineItem.h"
#import "TXADLineItemFilter.h"

NS_ASSUME_NONNULL_BEGIN

/*!
@class TXADInterstitialAd
@abstract TXAD Interstitial Ad class
*/
@interface TXADInterstitialAd : NSObject<TXADInnerInterstitialAdDelegate>

/*!
@property adUnitId
@abstract The interstitial's ad unit ID
*/
@property(nonatomic, readonly) NSString *adUnitId;

// iOS Start
/*!
@method initWithAdUnitId
@abstract initilize interstitial Ad
@param adUnitId interstitial Ad ID in SDK platform
@result TXADInterstitialAd instance
*/
- (TXADInterstitialAd *)initWithAdUnitId:(NSString *)adUnitId;

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this TXADInterstitialAd
*/
@property(nonatomic, weak) id<TXADInterstitialAdDelegate> delegate;

/*!
@property lineItemFilter
@brief Optional delegate object that will filter specifed LineItem in AdUnit.
*/
@property(nonatomic, weak) id<TXADLineItemFilter> lineItemFilter;
// iOS End

// Unity Start
- (id)initWithInterstitialClientReference:(TXADTypeInterstitialClientRef _Nullable* _Nullable)interstitialClient adUnitId:(NSString *)adUnitId;
/// A reference to the Unity interstitial client.
@property(nonatomic, assign) TXADTypeInterstitialClientRef _Nullable* _Nullable interstitialClient;
/// The ad callback into Unity.
@property(nonatomic, assign) TXADInterstitialDidReceiveAdCallback adReceivedCallback;
@property(nonatomic, assign) TXADInterstitialDidFailToReceiveAdWithErrorCallback adFailedCallback;
@property(nonatomic, assign) TXADInterstitialWillPresentScreenCallback willPresentCallback;
@property(nonatomic, assign) TXADInterstitialWillLeaveApplicationCallback willLeaveCallback;
@property(nonatomic, assign) TXADInterstitialVideoStartCallback videoStartCallback;
@property(nonatomic, assign) TXADInterstitialVideoCompleteCallback videoCompleteCallback;
@property(nonatomic, assign) TXADInterstitialDidDismissScreenCallback didDismissCallback;
// Unity End

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
@method loadAd
@abstract Makes an interstitial ad request.
*/
- (void)loadAd;

/*!
@method isReady
@abstract Returns YES if the interstitial is ready to be displayed. The delegate's  interstitialAdDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: ad is ready, NO: no ad ready
*/
- (BOOL)isReady;

/*!
@method isReady:
@abstract Returns YES if the interstitial is ready to be displayed. The delegate's  interstitialAdDidReceiveAd: will be called after this property switches from NO to YES.
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
@abstract Presents the interstitial ad which takes over the entire screen until the user dismisses it
@param viewController Set rootViewController to the current view controller at the time this method is called. If your application does not use view controllers pass in nil and your views will be removed from the window to show the interstitial and restored when done. After the interstitial has been removed, the delegate's interstitialDidDismissScreen: will be called.
*/
- (void)showFromViewController:(nullable UIViewController *)viewController;

/*!
@method showFromViewController
@abstract Presents the interstitial ad which takes over the entire screen until the user dismisses it
@param viewController Set rootViewController to the current view controller at the time this method is called. If your application does not use view controllers pass in nil and your views will be removed from the window to show the interstitial and restored when done. After the interstitial has been removed, the delegate's interstitialDidDismissScreen: will be called.
@param sceneId scene ID
*/
- (void)showFromViewController:(nullable UIViewController *)viewController sceneId:(nullable NSString *)sceneId;


// Unity Start
- (void)showUnity;

- (void)showUnity:(NSString *)sceneId;
// Unity End

@end

NS_ASSUME_NONNULL_END
