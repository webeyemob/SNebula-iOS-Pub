//
//  Mediation.h
//  WeMobSdk
//
//  Created by Mathew on 2019/6/15.
//

#import <Foundation/Foundation.h>
#import "WeMobMediationPriority.h"
#import "WeMobMediationLoadMode.h"

@interface WeMobMediation : NSObject

@property WeMobMediationLoadMode *loadMode;
@property int parallelCount;
@property WeMobMediationPriority *priority;

+(WeMobMediation *)fromJson:(NSDictionary *)object;

-(NSString *)getDesc;

@end
