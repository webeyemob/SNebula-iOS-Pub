//
//  WECreativePlayerViewController.h
//

//  Licensed under the WeSdk License Agreement
//  
//

#import <Foundation/Foundation.h>
#import "WECreativePlayerView.h"
#import "WECreativeVideoConfig.h"
#import "WECreativeRewardedVideo.h"

@class AVPlayerItem;
@class VPlayer;
@class WECreativePlayerViewController;
@class WECreativeVASTTracking;

typedef NS_ENUM(NSUInteger, WECreativePlayerViewControllerFrom) {
    WECreativePlayerViewControllerFromRewarded = 0,
    WECreativePlayerViewControllerFromInterstital
};


@protocol WECreativePlayerViewControllerDelegate <NSObject>

@required
- (void)adsImpressionTrack;
- (void)adsClickedTrack;


@optional
- (void)VideoViewWillAppear:(WECreativePlayerViewController *)rewardedVC;
- (void)VideoViewDidAppear:(WECreativePlayerViewController *)rewardedVC;
- (void)VideoViewWillDisappear:(WECreativePlayerViewController *)rewardedVC;
- (void)VideoViewDidDisappear:(WECreativePlayerViewController *)rewardedVC;
//- (void)interstitialDidReceiveTapEvent:(WECreativeInterstitialViewController *)interstitial;
- (void)VideoViewWillLeaveApplication:(WECreativePlayerViewController *)rewardedVC;
- (void)VideoViewhasPlayEnd:(WECreativePlayerViewController *)rewardedVC;

- (void)playerPlaybackDidStart:(WECreativePlayerViewController *)player;
- (void)playerDidProgressToTime:(NSTimeInterval)playbackTime;
- (void)playerViewController:(WECreativePlayerViewController *)playerViewController didTapReplayButton:(WECreativePlayerView *)view;
- (void)playerViewController:(WECreativePlayerViewController *)playerViewController willShowReplayView:(WECreativePlayerView *)view;
- (void)playerViewController:(WECreativePlayerViewController *)playerViewController didStall:(AVPlayer *)player;
- (void)playerViewController:(WECreativePlayerViewController *)playerViewController didRecoverFromStall:(AVPlayer *)player;

- (UIViewController *)viewControllerForPresentingModalView;

@end

@interface WECreativePlayerViewController : UIViewController

@property (nonatomic) WECreativePlayerViewControllerFrom from;

@property (nonatomic, readonly) NSURL *mediaURL;

@property (nonatomic, readonly) WECreativePlayerView *playerView;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic, readonly) AVPlayer *avPlayer;
@property (nonatomic) WECreativeVASTTracking *vastTracking;
@property (nonatomic, readonly) CGFloat videoAspectRatio;

#pragma mark - Configurations/States
@property (nonatomic) WECreativePlayerDisplayMode displayMode;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL startedLoading;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL isReadyToPlay;
@property (nonatomic) BOOL disposed;

#pragma mark - Call to action click tracking url
@property (nonatomic) NSURL *defaultActionURL;

@property (nonatomic, weak) id<WECreativePlayerViewControllerDelegate> delegate;

#pragma mark - Initializer
- (instancetype)initWithVideoConfig:(WECreativeVideoConfig *)videoConfig from: (WECreativePlayerViewControllerFrom)from;
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
