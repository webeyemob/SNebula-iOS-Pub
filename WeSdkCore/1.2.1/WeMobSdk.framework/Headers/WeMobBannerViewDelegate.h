//
//  WeMobBannerViewDelegate.h

//
//  iOS 广告回调。

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"
@class WeMobBannerView;

@protocol WeMobBannerViewDelegate<NSObject>

@optional
- (void)weMobBannerDidReceiveAd:(WeMobBannerView *)bannerView;

@optional
- (void)weMobBanner:(WeMobBannerView *)bannerView didFailToReceiveAdWithError:(WeMobAdError *)adError;

@optional
- (void)weMobBannerWillPresentScreen:(WeMobBannerView *)bannerView;

@optional
- (void)weMobBannerDidDismissScreen:(WeMobBannerView *)bannerView;

@optional
- (void)weMobBannerWillLeaveApplication:(WeMobBannerView *)bannerView;

@end
