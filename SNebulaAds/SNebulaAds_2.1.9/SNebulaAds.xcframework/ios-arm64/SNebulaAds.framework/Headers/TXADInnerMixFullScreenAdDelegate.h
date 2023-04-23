//
//  TXADInnerMixFullScreenAdDelegate.h
//  Created by TaurusXAds on 2019/10/20.
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"

@protocol TXADInnerMixFullScreenAdDelegate<NSObject>

- (void)mixFullScreenAdDidReceiveAd:(NSString *)medId;
- (void)mixFullScreenAd:(NSString *)medId didFailToReceiveAdWithError:(TXADAdError *)adError;
- (void)mixFullScreenAdWillPresentScreen:(NSString *)medId;
- (void)mixFullScreenAdWillLeaveApplication:(NSString *)medId;
- (void)mixFullScreenAdDidDismissScreen:(NSString *)medId;
- (void)mixFullScreenAdVideoStart:(NSString *)medId;
- (void)mixFullScreenAdVideoComplete:(NSString *)medId;
- (void)mixFullScreenAd:(NSString *)medId didReward:(TXADRewardItem *)item;
- (void)mixFullScreenAdDidFailedToReward:(NSString *)medId;

@end
