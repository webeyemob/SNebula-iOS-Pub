//
//  TXADMixViewAd.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2019/10/31.
//  Copyright © 2019 TXAD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADNetworkConfigs.h"
#import "TXADMixViewAdDelegate.h"
#import "TXADNativeAdLayout.h"
#import "TXADTypes.h"
#import "TXADUnityAdPos.h"
#import "TXADILineItem.h"
#import "TXADLineItemFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface TXADMixViewAd : NSObject

/*!
@property adUnitId
@abstract The mixview's ad unit ID
*/
@property(nonatomic, readonly, nonnull) NSString *adUnitId;

/*!
@method initWithAdUnitId
@abstract initilize mixview Ad
@param adUnitId mixview Ad ID in SDK platform
@result TXADMixViewAd instance
*/
- (TXADMixViewAd *)initWithAdUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this TXADMixViewAd
*/
@property(nonatomic, weak, nullable) id<TXADMixViewAdDelegate> delegate;

/*!
@property lineItemFilter
@brief Optional delegate object that will filter specifed LineItem in AdUnit.
*/
@property(nonatomic, weak) id<TXADLineItemFilter> lineItemFilter;

/*!
@method setBannerAdSize
@abstract Set adSize of Banner in MixView. (Optional). Use the adSize on web config priority. You can set different sizes according to the phone size. (Phone, tablet)
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
@param layout TXADMixViewAdLayout
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
@abstract Makes an native ad request.
*/
- (void)loadAd;

/*!
@method isReady
@abstract Returns YES if the native ad is ready to be displayed. The delegate's  mixViewAdDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: ad is ready, NO: no ad ready
*/
- (BOOL)isReady;

/*!
@method isReady:
@abstract Returns YES if the native ad is ready to be displayed. The delegate's  mixViewAdDidReceiveAd: will be called after this property switches from NO to YES.
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
@method getAdView
@abstract get native ad View for display, TXADNativeAdLayout has be set native before
*/
- (UIView *)getAdView;

/*!
@method getAdView
@param sceneId scene ID
@abstract get native ad View for display, TXADNativeAdLayout has be set native before
*/
- (UIView *)getAdViewWithSceneId:(nullable NSString *)sceneId;

/*!
@method getAdView
@abstract get native ad View for display
@param layout TXADMixViewAdLayout
*/
- (UIView *)getAdView:(TXADNativeAdLayout *)layout;

/*!
@method getAdView
@abstract get native ad View for display
@param sceneId scene ID
@param layout TXADMixViewAdLayout
*/
- (UIView *)getAdView:(TXADNativeAdLayout *)layout sceneId:(nullable NSString *)sceneId;

/*!
@method showAdView, TXADNativeAdLayout has be set native before
@abstract showAdView in center of container
@param container the container to show AdView
*/
- (void)showAdView:(UIView *)container;

/*!
@method showAdView, TXADNativeAdLayout has be set native before
@abstract showAdView in center of container
@param container the container to show AdView
@param sceneId scene ID
*/
- (void)showAdView:(UIView *)container sceneId:(nullable NSString *)sceneId;

/*!
@method showAdView
@abstract showAdView in center of container
@param container the container to show AdView
 @param layout TXADMixViewAdLayout for render NativeAd
*/
- (void)showAdView:(UIView *)container nativeAdLayout:(TXADNativeAdLayout *)layout;

/*!
@method showAdView
@abstract showAdView in center of container
@param container the container to show AdView
@param layout TXADMixViewAdLayout for render NativeAd
@param sceneId scene ID
*/
- (void)showAdView:(UIView *)container nativeAdLayout:(TXADNativeAdLayout *)layout sceneId:(nullable NSString *)sceneId;

/*!
@method destroy
@abstract destory the ad request.
*/
- (void)destroy;

// Unity Start
- (id)initWithMixViewClientReference:(TXADTypeMixViewClientRef _Nullable* _Nullable)mixViewClient adUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
// 引用 Unity 的 MixViewClient
@property(nonatomic, assign) TXADTypeMixViewClientRef _Nullable* _Nullable mixViewClient;
// 广告加载后，回调到 Unity 的接口
@property(nonatomic, assign) TXADMixViewAdDidReceiveAdCallback adReceivedCallback;
@property(nonatomic, assign) TXADMixViewAdDidFailToReceiveAdWithErrorCallback adFailedCallback;
@property(nonatomic, assign) TXADMixViewAdWillPresentScreenCallback willPresentCallback;
@property(nonatomic, assign) TXADMixViewAdDidDismissScreenCallback didDismissCallback;
@property(nonatomic, assign) TXADMixViewAdWillLeaveApplicationCallback willLeaveCallback;

- (void)setUnityPosition:(TXADUnityAdPosition)position;
- (void)setUnityPositionWithX:(int)x andY:(int)y;
- (void)setUnityPositionRelative:(TXADUnityAdPosition)position withX:(int)x andY:(int)y;

- (void)loadAdUnity;

- (void)showUnity;
- (void)showUnity:(nullable NSString *)sceneId;

- (void)hideUnity;

- (void)removeUnity;
// Unity End

@end

NS_ASSUME_NONNULL_END
