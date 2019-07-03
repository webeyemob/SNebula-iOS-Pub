//
//  WeMobLineItem.h
//  WeMobSdk
//
//  Created by 王航 on 2019/6/15.
//

#import <Foundation/Foundation.h>
#import "WeMobNetwork.h"
#import "WeMobILineItem.h"

@interface WeMobLineItem : WeMobILineItem

@property int requestTimeOut;
@property int cacheTimeOut;
@property int freezeTime;
@property NSString *adUnitId;
@property NSString *adUnitName;
@property NSString *mid;
@property NSString *name;
@property WeMobNetwork *network;
@property NSString *clazz;
@property NSString *params;
@property NSDictionary *serverExtras;
@property int bannerAdSize;
@property int priority;
@property NSString *ECPM;
@property float ecpm;
@property NSString *requestTrackUrl;
@property NSString *successTrackUrl;
@property NSString *impTrackUrl;
@property NSString *clickTrackUrl;
@property NSString *tag;

+(WeMobLineItem *)formJson: (NSDictionary *)json;
-(void)update:(WeMobLineItem *)lineItem;

@end
