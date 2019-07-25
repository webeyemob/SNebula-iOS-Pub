//
//  WeMobRewardedVideoAdapterDelegate.h

//
//  Created by Mathew on 2019/6/18.
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"
#import "WeMobRewardItem.h"

@protocol WeMobRewardedVideoAdapterDelegate<NSObject>

- (void)rewardedVideoDidReceiveAd;
- (void)rewardedVideoDidOpen;
- (void)rewardedVideoWillLeaveApplication;
- (void)rewardedVideoDidClose;
- (void)rewardedVideoDidFailToReceiveAdWithError:(WeMobAdError *)adError;
- (void)rewardedVideoDidStart;
- (void)rewardedVideoDidComplete;
- (void)rewardedVideoDidReward:(WeMobRewardItem *)item;
- (void)rewardedVideoDidFailedToReward;

@end
