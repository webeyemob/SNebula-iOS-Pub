//
//  WeMobInnerBannerAdDelegate.h
//  WeMobSdk
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"

@protocol WeMobInnerBannerAdDelegate<NSObject>

- (void)bannerDidReceiveAd:(NSString *)lineItemId;
- (void)banner:(NSString *)lineItemId didFailToReceiveAdWithError:(WeMobAdError *)adError;
- (void)bannerWillPresentScreen:(NSString *)lineItemId;
- (void)bannerDidDismissScreen:(NSString *)lineItemId;
- (void)bannerWillLeaveApplication:(NSString *)lineItemId;

@end
