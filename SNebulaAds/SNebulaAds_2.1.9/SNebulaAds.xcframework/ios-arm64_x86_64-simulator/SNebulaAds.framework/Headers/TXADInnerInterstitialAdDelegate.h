//
//  TXADInterstitialAdDelegate.h
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"

@protocol TXADInnerInterstitialAdDelegate<NSObject>

- (void)interstitialDidReceiveAd:(NSString *)medId;
- (void)interstitial:(NSString *)medId didFailToReceiveAdWithError:(TXADAdError *)adError;
- (void)interstitialWillPresentScreen:(NSString *)medId;
- (void)interstitialWillLeaveApplication:(NSString *)medId;
- (void)interstitialDidDismissScreen:(NSString *)medId;
- (void)interstitialVideoStart:(NSString *)medId;
- (void)interstitialVideoComplete:(NSString *)medId;

@end
