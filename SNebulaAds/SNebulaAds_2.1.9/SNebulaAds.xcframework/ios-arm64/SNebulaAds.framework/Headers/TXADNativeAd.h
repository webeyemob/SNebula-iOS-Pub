//
//  TXADNativeAd.h
//  Created by TaurusXAds on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TXADNativeAdDelegate.h"
#import "TXADNativeAdLayout.h"
#import "TXADNetworkConfigs.h"
#import "TXADILineItem.h"
#import "TXADLineItemFilter.h"

NS_ASSUME_NONNULL_BEGIN

/*!
@class TXADNativeAd
@abstract TXAD native Ad class
*/
@interface TXADNativeAd : NSObject

/*!
@property adUnitId
@abstract The native's ad unit ID
*/
@property(nonatomic, readonly, nonnull) NSString *adUnitId;

/*!
@method initWithAdUnitId
@abstract initilize native Ad
@param adUnitId native Ad ID in SDK platform
@result TXADNativeAd instance
*/
- (TXADNativeAd *)initWithAdUnitId:(NSString *)adUnitId DEPRECATED_MSG_ATTRIBUTE("Please use TXADFeedList API, TXADNativeAd will be removed in feature");

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this TXADNativeAd
*/
@property(nonatomic, weak, nullable) id<TXADNativeAdDelegate> delegate;

/*!
@property lineItemFilter
@brief Optional delegate object that will filter specifed LineItem in AdUnit.
*/
@property(nonatomic, weak) id<TXADLineItemFilter> lineItemFilter;

/*!
@method setNativeAdLayout
@abstract set native ad layout to native
@param layout TXADNativeAdLayout
*/
- (void)setNativeAdLayout:(TXADNativeAdLayout *)layout;

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
@abstract Makes an native ad request.
*/
- (void)loadAd;

/*!
@method isReady
@abstract Returns YES if the native ad is ready to be displayed. The delegate's  NativeAdDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: ad is ready, NO: no ad ready
*/
- (BOOL)isReady;

/*!
@method isReady:
@abstract Returns YES if the native ad is ready to be displayed. The delegate's  NativeAdDidReceiveAd: will be called after this property switches from NO to YES.
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
@abstract get native ad View for display, layout has be set native before
*/
- (UIView *)getAdView;

/*!
@method getAdView
@abstract get native ad View for display
@param layout TXADNativeAdLayout
*/
- (UIView *)getAdView:(TXADNativeAdLayout *)layout;

/*!
@method getAdViewSceneId
@abstract get native ad View for display, layout has be set native before
@param sceneId scene ID
*/
- (UIView *)getAdViewSceneId:(NSString *)sceneId;

/*!
@method getAdView
@abstract get native ad View for display
@param layout TXADNativeAdLayout
@param sceneId scene ID
*/
- (UIView *)getAdView:(TXADNativeAdLayout *)layout sceneId:(nullable NSString *)sceneId;

/*!
@method showAdView, TXADNativeAdLayout has be set native before
@abstract showAdView in center of container
@param container the container to show AdView
*/
- (void)showAdView:(UIView *)container;

/*!
@method showAdView
@abstract showAdView in center of container
@param container the container to show AdView
@param layout TXADMixViewAdLayout for render NativeAd
*/
- (void)showAdView:(UIView *)container nativeAdLayout:(TXADNativeAdLayout *)layout;

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
@param sceneId scene ID
*/
- (void)showAdView:(UIView *)container nativeAdLayout:(TXADNativeAdLayout *)layout sceneId:(nullable NSString *)sceneId;


/*!
@method destroy
@abstract destory the ad request.
*/
- (void)destroy;

@end

NS_ASSUME_NONNULL_END
