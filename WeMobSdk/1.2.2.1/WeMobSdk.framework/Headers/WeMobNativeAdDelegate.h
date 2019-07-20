//
//  WeMobNativeAdDelegate.h
//  WeMobSdk
//
//  Created by Mathew on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"
@class WeMobNativeAd;

@protocol WeMobNativeAdDelegate<NSObject>

@optional
- (void)weMobNativeAdDidReceiveAd:(WeMobNativeAd *)nativeAd;

@optional
- (void)weMobNativeAd:(WeMobNativeAd *)nativeAd didFailToReceiveAdWithError:(WeMobAdError *)adError;

@optional
- (void)weMobNativeAdWillPresentScreen:(WeMobNativeAd *)nativeAd;

@optional
- (void)weMobNativeAdDidDismissScreen:(WeMobNativeAd *)nativeAd;

@optional
- (void)weMobNativeAdWillLeaveApplication:(WeMobNativeAd *)nativeAd;

@end
