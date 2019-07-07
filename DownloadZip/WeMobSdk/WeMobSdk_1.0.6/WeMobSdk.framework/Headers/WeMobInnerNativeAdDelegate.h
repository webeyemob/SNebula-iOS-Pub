//
//  WeMobInnerNativeAdDelegate.h
//  WeMobSdk
//
//  Created by wanghang on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"

@protocol WeMobInnerNativeAdDelegate<NSObject>

- (void)nativeAdDidReceiveAd:(NSString *)lineItemId;
- (void)nativeAd:(NSString *)lineItemId didFailToReceiveAdWithError:(WeMobAdError *)adError;
- (void)nativeAdWillPresentScreen:(NSString *)lineItemId;
- (void)nativeAdDidDismissScreen:(NSString *)lineItemId;
- (void)nativeAdWillLeaveApplication:(NSString *)lineItemId;

@end
