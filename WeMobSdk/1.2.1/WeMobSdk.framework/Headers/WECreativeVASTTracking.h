//
//  WECreativeVASTTracking.h
//

//  Licensed under the WeSdk License Agreement
//

#import <Foundation/Foundation.h>
#import "WECreativeVideoConfig.h"

typedef NS_ENUM(NSUInteger, WECreativeVideoEventType) {
    WECreativeVideoEventTypeTimeUpdate = 0,
    WECreativeVideoEventTypeMuted,
    WECreativeVideoEventTypeUnmuted,
    WECreativeVideoEventTypePause,
    WECreativeVideoEventTypeResume,
    WECreativeVideoEventTypeFullScreen,
    WECreativeVideoEventTypeExitFullScreen,
    WECreativeVideoEventTypeExpand,
    WECreativeVideoEventTypeCollapse,
    WECreativeVideoEventTypeCompleted,
    WECreativeVideoEventTypeImpression,
    WECreativeVideoEventTypeClick,
    WECreativeVideoEventTypeError
};

@interface WECreativeVASTTracking : NSObject

@property (nonatomic, readonly) WECreativeVideoConfig *videoConfig;
@property (nonatomic) NSTimeInterval videoDuration;

- (instancetype)initWithWECreativeVideoConfig:(WECreativeVideoConfig *)videoConfig videoView:(UIView *)videoView;
- (void)handleVideoEvent:(WECreativeVideoEventType)videoEventType videoTimeOffset:(NSTimeInterval)timeOffset;
- (void)handleNewVideoView:(UIView *)videoView;

@end
