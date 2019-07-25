//
//  WeMobDspRewardedVastViewController.h

//
//  Created by tamefox on 2019/6/17.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol WeMobRewardedVastVCDelegate;

@interface WeMobDspRewardedVastViewController : UIViewController

@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, weak) id<WeMobRewardedVastVCDelegate> delegate;


@end

@protocol WeMobRewardedVastVCDelegate <NSObject>

-(void)rewardedVastWillAppear:(WeMobDspRewardedVastViewController *)interstitial;
- (void)rewardedVastDidAppear:(WeMobDspRewardedVastViewController *)interstitial;
- (void)rewardedVastWillDisappear:(WeMobDspRewardedVastViewController *)interstitial;
- (void)rewardedVastDidDisappear:(WeMobDspRewardedVastViewController *)interstitial;
//- (void)rewardedVastDidReceiveTapEvent:(WeMobDspRewardedVastViewController *)interstitial;
- (void)rewardedVastWillLeaveApplication:(WeMobDspRewardedVastViewController *)interstitial;

@optional
- (void)RewardedVideoEnded;

@end


NS_ASSUME_NONNULL_END
