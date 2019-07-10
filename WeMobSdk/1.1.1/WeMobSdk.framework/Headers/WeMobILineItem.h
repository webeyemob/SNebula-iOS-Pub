//
//  WeMobILinItem.h
//  WeMobSdk
//
//  Created by wanghang on 2019/6/24.
//

#import <Foundation/Foundation.h>
#import "WeMobNetwork.h"

@interface WeMobILineItem : NSObject

-(NSString *)getName;

-(WeMobNetwork *)getNetwork;

-(int)getPriority;

-(float)getEcpm;

-(int)getBannerAdSize;

-(NSDictionary *)getServerExtras;

@end
