//
//  WeMobTimer.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the webeye SDK License Agreement
//  http://www.mopub.com/legal/sdk-license-agreement/
//

#import <Foundation/Foundation.h>

//advertiser loaded expire time  30min
#define AdExpireInterval    30 * 60
#define BannerRefreshInterval  30
#define ReloadFailedTrackInterval   20 //5 * 60

/**
 * @c MPTimer is a thread safe @c NSTimer wrapper, with pause / resume functionality.
 */
@interface WeMobTimer : NSObject

/**
 * The default run loop mode is @c NSDefaultRunLoopMode. If a new mode is assigned, it will be effective
 * for the subsequent @c isScheduled or @c resume calls.
 */
@property (nonatomic, copy) NSString *runLoopMode;

/**
 * Return NO is the timer is paused, and return YES otherwise.
 */
@property (nonatomic, readonly) BOOL isCountdownActive;

+ (WeMobTimer *)timerWithTimeInterval:(NSTimeInterval)seconds
                            target:(id)target
                          selector:(SEL)aSelector
                           repeats:(BOOL)repeats;

- (BOOL)isValid;
- (void)invalidate;
- (BOOL)isScheduled;
- (void)scheduleNow;
- (void)pause;
- (void)resume;

@end

