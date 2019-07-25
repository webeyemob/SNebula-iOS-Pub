//
//  WeMobTrackerDelegate.h

//
//  Created by Mathew on 2019/7/14.
//  Copyright © 2019年 WeMobSdk. All rights reserved.
//

#import "WeMobTrackerInfo.h"

@protocol WeMobTrackerDelegate<NSObject>

// 请求广告
@optional
- (void)weMobTrackAdRequest:(WeMobTrackerInfo *)trackInfo;

// 请求广告成功
@optional
- (void)weMobTrackAdLoaded:(WeMobTrackerInfo *)trackInfo;

// App 展示广告
@optional
- (void)weMobTrackAdCallShow:(WeMobTrackerInfo *)trackInfo;

// 广告得到展示
@optional
- (void)weMobTrackAdShown:(WeMobTrackerInfo *)trackInfo;

// 点击广告
@optional
- (void)weMobTrackAdClicked:(WeMobTrackerInfo *)trackInfo;

// 广告关闭
@optional
- (void)weMobTrackAdClosed:(WeMobTrackerInfo *)trackInfo;

// 请求广告失败
@optional
- (void)weMobTrackAdFailedToLoad:(WeMobTrackerInfo *)trackInfo;

// 激励视频开始播放
@optional
- (void)weMobTrackAdVideoStarted:(WeMobTrackerInfo *)trackInfo;

// 激励视频播放结束
@optional
- (void)weMobTrackAdVideoCompleted:(WeMobTrackerInfo *)trackInfo;

// 激励成功
@optional
- (void)weMobTrackAdRewarded:(WeMobTrackerInfo *)trackInfo;

// 激励失败
@optional
- (void)weMobTrackAdRewardFailed:(WeMobTrackerInfo *)trackInfo;

@end
