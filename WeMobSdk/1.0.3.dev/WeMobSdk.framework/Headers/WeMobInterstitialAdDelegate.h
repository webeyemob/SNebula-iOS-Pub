//
//  WeMobInterstitialAdDelegate.h
//  WeMobSdk
//
//  iOS 广告回调。

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"
@class WeMobInterstitialAd;

@protocol WeMobInterstitialAdDelegate<NSObject>

@optional
- (void)weMobInterstitialDidReceiveAd:(WeMobInterstitialAd *)interstitialAd;

@optional
- (void)weMobInterstitial:(WeMobInterstitialAd *)interstitialAd didFailToReceiveAdWithError:(WeMobAdError *)adError;

@optional
- (void)weMobInterstitialWillPresentScreen:(WeMobInterstitialAd *)interstitialAd;

@optional
- (void)weMobInterstitialDidDismissScreen:(WeMobInterstitialAd *)interstitialAd;

@optional
- (void)weMobInterstitialWillLeaveApplication:(WeMobInterstitialAd *)interstitialAd;

@end
