//
//  WeMobCreativePlayerView.h
//

//  Licensed under the WeMob License Agreement
//  
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@class WeMobCreativePlayerView;

typedef NS_ENUM(NSUInteger, WeMobCreativePlayerDisplayMode) {
    WeMobCreativePlayerDisplayModeInline = 0,
    WeMobCreativePlayerDisplayModeFullscreen
};

@protocol WeMobCreativePlayerViewDelegate <NSObject>

- (void)playerViewDidTapReplayButton:(WeMobCreativePlayerView *)view;
- (void)playerViewWillShowReplayView:(WeMobCreativePlayerView *)view;
- (void)playerViewWillTapVideo:(WeMobCreativePlayerView *)view;

@end

@interface WeMobCreativePlayerView : UIControl

@property (nonatomic) AVPlayer *avPlayer;
@property (nonatomic) WeMobCreativePlayerDisplayMode displayMode;
@property (nonatomic, copy) NSString *videoGravity;

- (instancetype)initWithFrame:(CGRect)frame delegate:(id<WeMobCreativePlayerViewDelegate>)delegate;

- (void)createPlayerView;
- (void)playbackTimeDidProgress;
- (void)playbackDidFinish;
//- (void)setProgressBarVisible:(BOOL)visible;
- (void)handleVideoInitFailure;

@end
