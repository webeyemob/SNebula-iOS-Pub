//
//  TXADRewardedVideoAdDelegate.h
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
#import "TXADRewardItem.h"

@protocol TXADInnerRewardedVideoAdDelegate<NSObject>

- (void)rewardedVideoDidReceiveAd:(NSString *)medId;
- (void)rewardedVideo:(NSString *)medId didFailToReceiveAdWithError:(TXADAdError *)adError;
- (void)rewardedVideoDidOpen:(NSString *)medId;
- (void)rewardedVideoWillLeaveApplication:(NSString *)medId;
- (void)rewardedVideoDidClose:(NSString *)medId;
- (void)rewardedVideoDidStart:(NSString *)medId;
- (void)rewardedVideoDidComplete:(NSString *)medId;
- (void)rewardedVideo:(NSString *)medId didReward:(TXADRewardItem *)item;
- (void)rewardedVideoDidFailedToReward:(NSString *)medId;

@end
