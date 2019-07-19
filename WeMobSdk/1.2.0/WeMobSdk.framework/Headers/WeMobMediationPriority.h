//
//  WeMobMediationPriority.h
//  WeMobSdk
//
//  Created by Mathew on 2019/6/15.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, WeMobMediationPriorityId) {
    TIME = 1,
    ECPM = 2
};

@interface WeMobMediationPriority : NSObject

@property int priority;
+(WeMobMediationPriority *)fromPriority:(int)priority;

-(NSString *)getPriorityName;
-(BOOL)isTime;

@end
