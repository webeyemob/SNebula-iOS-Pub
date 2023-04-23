//
//  TXADEventData.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2021/1/26.
//  Copyright © 2021 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TXADEventData : NSObject

- (void)setEvent:(NSMutableDictionary *)event;
- (void)setEventId:(int)eventId;

- (NSMutableDictionary *)getEvent;
- (int)getEventId;

@end

NS_ASSUME_NONNULL_END
