//
//  WeMobRewardedVideoAdDelegate.h
//  WeMobSdk
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"
#import "WeMobRewardItem.h"

@protocol WeMobInnerRewardedVideoAdDelegate<NSObject>

- (void)rewardedVideoDidReceiveAd:(NSString *)lineItemId;
- (void)rewardedVideoDidOpen:(NSString *)lineItemId;
- (void)rewardedVideoWillLeaveApplication:(NSString *)lineItemId;
- (void)rewardedVideoDidClose:(NSString *)lineItemId;
- (void)rewardedVideo:(NSString *)lineItemId didFailToReceiveAdWithError:(WeMobAdError *)adError;
- (void)rewardedVideoDidStart:(NSString *)lineItemId;
- (void)rewardedVideoDidComplete:(NSString *)lineItemId;
- (void)rewardedVideo:(NSString *)lineItemId didReward:(WeMobRewardItem *)item;
- (void)rewardedVideoDidFailedToReward:(NSString *)lineItemId;

@end
