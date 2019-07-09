//
//  WECreativePlayerView.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the Webeye SDK License Agreement
//  http://www.mopub.com/legal/sdk-license-agreement/
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@class WECreativePlayerView;

typedef NS_ENUM(NSUInteger, WECreativePlayerDisplayMode) {
    WECreativePlayerDisplayModeInline = 0,
    WECreativePlayerDisplayModeFullscreen
};

@protocol WECreativePlayerViewDelegate <NSObject>

- (void)playerViewDidTapReplayButton:(WECreativePlayerView *)view;
- (void)playerViewWillShowReplayView:(WECreativePlayerView *)view;
- (void)playerViewWillTapVideo:(WECreativePlayerView *)view;

@end

@interface WECreativePlayerView : UIControl

@property (nonatomic) AVPlayer *avPlayer;
@property (nonatomic) WECreativePlayerDisplayMode displayMode;
@property (nonatomic, copy) NSString *videoGravity;

- (instancetype)initWithFrame:(CGRect)frame delegate:(id<WECreativePlayerViewDelegate>)delegate;

- (void)createPlayerView;
- (void)playbackTimeDidProgress;
- (void)playbackDidFinish;
//- (void)setProgressBarVisible:(BOOL)visible;
- (void)handleVideoInitFailure;

@end
