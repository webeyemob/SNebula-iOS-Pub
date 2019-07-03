//
//  WERewardedVastViewController.h
//  WeDSPDemo
//
//  Created by 汤正 on 2019/6/17.
//  Copyright © 2019 WE. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol WERewardedVastVCDelegate;

@interface WERewardedVastViewController : UIViewController

@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, weak) id<WERewardedVastVCDelegate> delegate;


@end

@protocol WERewardedVastVCDelegate <NSObject>

-(void)rewardedVastWillAppear:(WERewardedVastViewController *)interstitial;
- (void)rewardedVastDidAppear:(WERewardedVastViewController *)interstitial;
- (void)rewardedVastWillDisappear:(WERewardedVastViewController *)interstitial;
- (void)rewardedVastDidDisappear:(WERewardedVastViewController *)interstitial;
//- (void)rewardedVastDidReceiveTapEvent:(WERewardedVastViewController *)interstitial;
- (void)rewardedVastWillLeaveApplication:(WERewardedVastViewController *)interstitial;

@optional
- (void)RewardedVideoEnded;

@end


NS_ASSUME_NONNULL_END
