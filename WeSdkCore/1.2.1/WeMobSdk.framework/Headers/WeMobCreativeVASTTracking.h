//
//  WeMobCreativeVASTTracking.h
//

//  Licensed under the WeMob License Agreement
//

#import <Foundation/Foundation.h>
#import "WeMobCreativeVideoConfig.h"

typedef NS_ENUM(NSUInteger, WeMobCreativeVideoEventType) {
    WeMobCreativeVideoEventTypeTimeUpdate = 0,
    WeMobCreativeVideoEventTypeMuted,
    WeMobCreativeVideoEventTypeUnmuted,
    WeMobCreativeVideoEventTypePause,
    WeMobCreativeVideoEventTypeResume,
    WeMobCreativeVideoEventTypeFullScreen,
    WeMobCreativeVideoEventTypeExitFullScreen,
    WeMobCreativeVideoEventTypeExpand,
    WeMobCreativeVideoEventTypeCollapse,
    WeMobCreativeVideoEventTypeCompleted,
    WeMobCreativeVideoEventTypeImpression,
    WeMobCreativeVideoEventTypeClick,
    WeMobCreativeVideoEventTypeError
};

@interface WeMobCreativeVASTTracking : NSObject

@property (nonatomic, readonly) WeMobCreativeVideoConfig *videoConfig;
@property (nonatomic) NSTimeInterval videoDuration;

- (instancetype)initWithVideoConfig:(WeMobCreativeVideoConfig *)videoConfig videoView:(UIView *)videoView;
- (void)handleVideoEvent:(WeMobCreativeVideoEventType)videoEventType videoTimeOffset:(NSTimeInterval)timeOffset;
- (void)handleNewVideoView:(UIView *)videoView;

@end
