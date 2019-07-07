//
//  WECreativeVASTTrackingEvent.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the Webeye SDK License Agreement

//

#import <Foundation/Foundation.h>
#import "WECreativeVASTModel.h"

@class WECreativeVASTDurationOffset;

extern NSString * const WECreativeVASTTrackingEventTypeCreativeView;
extern NSString * const WECreativeVASTTrackingEventTypeStart;
extern NSString * const WECreativeVASTTrackingEventTypeFirstQuartile;
extern NSString * const WECreativeVASTTrackingEventTypeMidpoint;
extern NSString * const WECreativeVASTTrackingEventTypeThirdQuartile;
extern NSString * const WECreativeVASTTrackingEventTypeComplete;
extern NSString * const WECreativeVASTTrackingEventTypeMute;
extern NSString * const WECreativeVASTTrackingEventTypeUnmute;
extern NSString * const WECreativeVASTTrackingEventTypePause;
extern NSString * const WECreativeVASTTrackingEventTypeRewind;
extern NSString * const WECreativeVASTTrackingEventTypeResume;
extern NSString * const WECreativeVASTTrackingEventTypeFullscreen;
extern NSString * const WECreativeVASTTrackingEventTypeExitFullscreen;
extern NSString * const WECreativeVASTTrackingEventTypeExpand;
extern NSString * const WECreativeVASTTrackingEventTypeCollapse;
extern NSString * const WECreativeVASTTrackingEventTypeAcceptInvitationLinear;
extern NSString * const WECreativeVASTTrackingEventTypeCloseLinear;
extern NSString * const WECreativeVASTTrackingEventTypeSkip;
extern NSString * const WECreativeVASTTrackingEventTypeProgress;

@interface WECreativeVASTTrackingEvent : WECreativeVASTModel

@property (nonatomic, copy, readonly) NSString *eventType;
@property (nonatomic, copy, readonly) NSURL *URL;
@property (nonatomic, readonly) WECreativeVASTDurationOffset *progressOffset;

@end
