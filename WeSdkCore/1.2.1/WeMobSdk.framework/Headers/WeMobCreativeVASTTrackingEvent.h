//
//  WeMobCreativeVASTTrackingEvent.h
//

//  Licensed under the WeMob License Agreement

//

#import <Foundation/Foundation.h>
#import "WeMobCreativeVASTModel.h"

@class WeMobCreativeVASTDurationOffset;

extern NSString * const WeMobCreativeVASTTrackingEventTypeCreativeView;
extern NSString * const WeMobCreativeVASTTrackingEventTypeStart;
extern NSString * const WeMobCreativeVASTTrackingEventTypeFirstQuartile;
extern NSString * const WeMobCreativeVASTTrackingEventTypeMidpoint;
extern NSString * const WeMobCreativeVASTTrackingEventTypeThirdQuartile;
extern NSString * const WeMobCreativeVASTTrackingEventTypeComplete;
extern NSString * const WeMobCreativeVASTTrackingEventTypeMute;
extern NSString * const WeMobCreativeVASTTrackingEventTypeUnmute;
extern NSString * const WeMobCreativeVASTTrackingEventTypePause;
extern NSString * const WeMobCreativeVASTTrackingEventTypeRewind;
extern NSString * const WeMobCreativeVASTTrackingEventTypeResume;
extern NSString * const WeMobCreativeVASTTrackingEventTypeFullscreen;
extern NSString * const WeMobCreativeVASTTrackingEventTypeExitFullscreen;
extern NSString * const WeMobCreativeVASTTrackingEventTypeExpand;
extern NSString * const WeMobCreativeVASTTrackingEventTypeCollapse;
extern NSString * const WeMobCreativeVASTTrackingEventTypeAcceptInvitationLinear;
extern NSString * const WeMobCreativeVASTTrackingEventTypeCloseLinear;
extern NSString * const WeMobCreativeVASTTrackingEventTypeSkip;
extern NSString * const WeMobCreativeVASTTrackingEventTypeProgress;

@interface WeMobCreativeVASTTrackingEvent : WeMobCreativeVASTModel

@property (nonatomic, copy, readonly) NSString *eventType;
@property (nonatomic, copy, readonly) NSURL *URL;
@property (nonatomic, readonly) WeMobCreativeVASTDurationOffset *progressOffset;

@end
