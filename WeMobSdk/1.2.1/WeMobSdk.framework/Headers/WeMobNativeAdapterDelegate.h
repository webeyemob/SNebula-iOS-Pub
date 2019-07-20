//
//  WeMobNativeAdapterDelegate.h
//  WeMobSdk
//
//  Created by Mathew on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"

@protocol WeMobNativeAdapterDelegate<NSObject>

- (void)nativeAdDidReceiveAd;
- (void)nativeAdDidFailToReceiveAdWithError:(WeMobAdError *)adError;
- (void)nativeAdWillPresentScreen;
- (void)nativeAdDidDismissScreen;
- (void)nativeAdWillLeaveApplication;

@end
