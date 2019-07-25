//
//  WeMobTracker.h

//
//  Created by Mathew on 2019/7/14.
//  Copyright © 2019年 WeMobSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WeMobTrackerDelegate.h"
#import "WeMobILineItem.h"
#import "WeMobTypes.h"

@interface WeMobTracker : NSObject

+ (WeMobTracker *)getInstance;

/// iOS Start
- (void)registerDelegate: (id <WeMobTrackerDelegate>)delegate;
- (void)unRegisterDelegate: (id <WeMobTrackerDelegate>)delegate;
/// iOS End

/// Unity Start
/// A reference to the Unity tracker client.
@property(nonatomic, assign) WeMobTypeTrackerClientRef *trackerClient;
/// The tracker callback into Unity.
@property(nonatomic, assign) WeMobTrackAdRequestCallback adRequestCallback;
@property(nonatomic, assign) WeMobTrackAdLoadedCallback adLoadedCallback;
@property(nonatomic, assign) WeMobTrackAdCallShowCallback adCallShowCallback;
@property(nonatomic, assign) WeMobTrackAdShownCallback adShownCallback;
@property(nonatomic, assign) WeMobTrackAdClickedCallback adClickedCallback;
@property(nonatomic, assign) WeMobTrackAdClosedCallback adClosedCallback;
@property(nonatomic, assign) WeMobTrackAdFailedToLoadCallback adFailedToLoadCallback;
@property(nonatomic, assign) WeMobTrackVideoStartedCallback videoStartedCallback;
@property(nonatomic, assign) WeMobTrackVideoCompletedCallback videoCompletedCallback;
@property(nonatomic, assign) WeMobTrackRewardedCallback rewardedCallback;
@property(nonatomic, assign) WeMobTrackRewardFailedCallback rewardFailedCallback;
/// Unity End

/// Common Start
- (void)trackAdRequest:(WeMobILineItem *)lineItem;
- (void)trackAdLoaded:(WeMobILineItem *)lineItem;
- (void)trackAdCallShow:(WeMobILineItem *)lineItem;
- (void)trackAdShown:(WeMobILineItem *)lineItem;
- (void)trackAdClicked:(WeMobILineItem *)lineItem;
- (void)trackAdClosed:(WeMobILineItem *)lineItem;
- (void)trackAdFailedToLoad:(WeMobILineItem *)lineItem;
- (void)trackVideoStarted:(WeMobILineItem *)lineItem;
- (void)trackVideoCompleted:(WeMobILineItem *)lineItem;
- (void)trackRewarded:(WeMobILineItem *)lineItem;
- (void)trackRewardFailed:(WeMobILineItem *)lineItem;
/// Common End

@end
