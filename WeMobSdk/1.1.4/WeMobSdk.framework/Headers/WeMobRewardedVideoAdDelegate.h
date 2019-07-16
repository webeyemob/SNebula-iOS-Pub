//
//  WeMobRewardedVideoAdDelegate.h
//  WeMobSdk
//
//  iOS 广告回调。

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"
#import "WeMobRewardItem.h"
@class WeMobRewardedVideoAd;

@protocol WeMobRewardedVideoAdDelegate<NSObject>

@optional
- (void)weMobRewardedVideoDidReceiveAd:(WeMobRewardedVideoAd *)rewardedVideoAd;

@optional
- (void)weMobRewardedVideoDidOpen:(WeMobRewardedVideoAd *)rewardedVideoAd;

@optional
- (void)weMobRewardedVideoWillLeaveApplication:(WeMobRewardedVideoAd *)rewardedVideoAd;

@optional
- (void)weMobRewardedVideoDidClose:(WeMobRewardedVideoAd *)rewardedVideoAd;

@optional
- (void)weMobRewardedVideo:(WeMobRewardedVideoAd *)rewardedVideoAd didFailToReceiveAdWithError:(WeMobAdError *)adError;

@optional
- (void)weMobRewardedVideoDidStart:(WeMobRewardedVideoAd *)rewardedVideoAd;

@optional
- (void)weMobRewardedVideoDidComplete:(WeMobRewardedVideoAd *)rewardedVideoAd;

@optional
- (void)weMobRewardedVideo:(WeMobRewardedVideoAd *)rewardedVideoAd didReward:(WeMobRewardItem *)item;

@optional
- (void)weMobRewardedVideoDidFailedToReward:(WeMobRewardedVideoAd *)rewardedVideoAd;

@end
