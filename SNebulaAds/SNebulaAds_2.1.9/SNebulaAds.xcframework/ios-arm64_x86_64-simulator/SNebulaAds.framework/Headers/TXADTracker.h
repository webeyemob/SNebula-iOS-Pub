//
//  TXADTracker.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2019/12/1.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADTrackerDelegate.h"
#import "TXADTypes.h"

/*!
 Track loading ad process of every LineItem.
 */
@interface TXADTracker : NSObject

/*!
 @brief Get TXADTracker Instance.
 @return TXADTracker
 */
+ (TXADTracker *)getInstance;

/*!
 @brief Register delegate to listen ad loading process of LineItem.
 @warning Register delegate before loading ads.
 @param delegate TXADTrackerDelegate that receives ad loading process event
 */
- (void)registerDelegate:(id<TXADTrackerDelegate>)delegate;

/*!
 @brief UnRegister delegate when app exit of finish listening ad loading.
 @param delegate TXADTrackerDelegate registered before.
 */
- (void)unRegisterDelegate:(id<TXADTrackerDelegate>)delegate;

- (NSMutableArray *)getDelegateArray;

// Unity Start
// A reference to the Unity tracker client.
@property(nonatomic, assign) TXADTypeTrackerClientRef *trackerClient;
// The tracker callback into Unity.
// LineItem Track
@property(nonatomic, assign) TXADTrackAdRequestCallback adRequestCallback;
@property(nonatomic, assign) TXADTrackAdLoadedCallback adLoadedCallback;
@property(nonatomic, assign) TXADTrackAdFailedToLoadCallback adFailedToLoadCallback;
@property(nonatomic, assign) TXADTrackAdCallShowCallback adCallShowCallback;
@property(nonatomic, assign) TXADTrackAdShownCallback adShownCallback;
@property(nonatomic, assign) TXADTrackAdClickedCallback adClickedCallback;
@property(nonatomic, assign) TXADTrackAdSkippedCallback adSkippedCallback;
@property(nonatomic, assign) TXADTrackAdClosedCallback adClosedCallback;
@property(nonatomic, assign) TXADTrackVideoStartedCallback videoStartedCallback;
@property(nonatomic, assign) TXADTrackVideoCompletedCallback videoCompletedCallback;
@property(nonatomic, assign) TXADTrackRewardedCallback rewardedCallback;
@property(nonatomic, assign) TXADTrackRewardFailedCallback rewardFailedCallback;
// AdUnit Track
@property(nonatomic, assign) TXADTrackAdUnitRequestCallback adUnitRequestCallback;
@property(nonatomic, assign) TXADTrackAdUnitLoadedCallback adUnitLoadedCallback;
@property(nonatomic, assign) TXADTrackAdUnitFailedToLoadCallback adUnitFailedToLoadCallback;
@property(nonatomic, assign) TXADTrackAdUnitCallShowCallback adUnitCallShowCallback;
@property(nonatomic, assign) TXADTrackAdUnitShownCallback adUnitShownCallback;
@property(nonatomic, assign) TXADTrackAdUnitClickedCallback adUnitClickedCallback;
@property(nonatomic, assign) TXADTrackAdUnitSkippedCallback adUnitSkippedCallback;
@property(nonatomic, assign) TXADTrackAdUnitClosedCallback adUnitClosedCallback;
@property(nonatomic, assign) TXADTrackAdUnitVideoStartedCallback adUnitVideoStartedCallback;
@property(nonatomic, assign) TXADTrackAdUnitVideoCompletedCallback adUnitVideoCompletedCallback;
@property(nonatomic, assign) TXADTrackAdUnitRewardedCallback adUnitRewardedCallback;
@property(nonatomic, assign) TXADTrackAdUnitRewardFailedCallback adUnitRewardFailedCallback;
// Unity End

@end
