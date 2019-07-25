//
//  WeMobCreativePlayerViewController.h
//

//  Licensed under the WeMob License Agreement
//  
//

#import <Foundation/Foundation.h>
#import "WeMobCreativePlayerView.h"
#import "WeMobCreativeVideoConfig.h"
#import "WeMobCreativeRewardedVideo.h"

@class AVPlayerItem;
@class VPlayer;
@class WeMobCreativePlayerViewController;
@class WeMobCreativeVASTTracking;

typedef NS_ENUM(NSUInteger, WeMobCreativePlayerViewControllerFrom) {
    WeMobCreativePlayerViewControllerFromRewarded = 0,
    WeMobCreativePlayerViewControllerFromInterstital
};


@protocol WeMobCreativePlayerViewControllerDelegate <NSObject>

@required
- (void)adsImpressionTrack;
- (void)adsClickedTrack;


@optional
- (void)VideoViewWillAppear:(WeMobCreativePlayerViewController *)rewardedVC;
- (void)VideoViewDidAppear:(WeMobCreativePlayerViewController *)rewardedVC;
- (void)VideoViewWillDisappear:(WeMobCreativePlayerViewController *)rewardedVC;
- (void)VideoViewDidDisappear:(WeMobCreativePlayerViewController *)rewardedVC;
//- (void)interstitialDidReceiveTapEvent:(WeMobCreativeInterstitialViewController *)interstitial;
- (void)VideoViewWillLeaveApplication:(WeMobCreativePlayerViewController *)rewardedVC;
- (void)VideoViewhasPlayEnd:(WeMobCreativePlayerViewController *)rewardedVC;

- (void)playerPlaybackDidStart:(WeMobCreativePlayerViewController *)player;
- (void)playerDidProgressToTime:(NSTimeInterval)playbackTime;
- (void)playerViewController:(WeMobCreativePlayerViewController *)playerViewController didTapReplayButton:(WeMobCreativePlayerView *)view;
- (void)playerViewController:(WeMobCreativePlayerViewController *)playerViewController willShowReplayView:(WeMobCreativePlayerView *)view;
- (void)playerViewController:(WeMobCreativePlayerViewController *)playerViewController didStall:(AVPlayer *)player;
- (void)playerViewController:(WeMobCreativePlayerViewController *)playerViewController didRecoverFromStall:(AVPlayer *)player;

- (UIViewController *)viewControllerForPresentingModalView;

@end

@interface WeMobCreativePlayerViewController : UIViewController

@property (nonatomic) WeMobCreativePlayerViewControllerFrom from;

@property (nonatomic, readonly) NSURL *mediaURL;

@property (nonatomic, readonly) WeMobCreativePlayerView *playerView;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic, readonly) AVPlayer *avPlayer;
@property (nonatomic) WeMobCreativeVASTTracking *vastTracking;
@property (nonatomic, readonly) CGFloat videoAspectRatio;

#pragma mark - Configurations/States
@property (nonatomic) WeMobCreativePlayerDisplayMode displayMode;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL startedLoading;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL isReadyToPlay;
@property (nonatomic) BOOL disposed;

#pragma mark - Call to action click tracking url
@property (nonatomic) NSURL *defaultActionURL;

@property (nonatomic, weak) id<WeMobCreativePlayerViewControllerDelegate> delegate;

#pragma mark - Initializer
- (instancetype)initWithVideoConfig:(WeMobCreativeVideoConfig *)videoConfig from: (WeMobCreativePlayerViewControllerFrom)from;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (void)loadAndPlayVideo;
- (void)seekToTime:(NSTimeInterval)time;
- (void)pause;
- (void)resume;
- (void)dispose;

- (BOOL)shouldStartNewPlayer;
- (BOOL)shouldResumePlayer;
- (BOOL)shouldPausePlayer;

- (void)willEnterFullscreen;
- (void)willExitFullscreen;



- (void)presentRewardFromViewController:(UIViewController *)controller complete:(void(^)(NSError *))complete;

@end
