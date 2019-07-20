//
//  WeMobInterstitialAdDelegate.h
//  WeMobSdk
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"

@protocol WeMobInnerInterstitialAdDelegate<NSObject>

- (void)interstitialDidReceiveAd:(NSString *)lineItemId;
- (void)interstitial:(NSString *)lineItemId didFailToReceiveAdWithError:(WeMobAdError *)adError;
- (void)interstitialWillPresentScreen:(NSString *)lineItemId;
- (void)interstitialDidDismissScreen:(NSString *)lineItemId;
- (void)interstitialWillLeaveApplication:(NSString *)lineItemId;

@end
