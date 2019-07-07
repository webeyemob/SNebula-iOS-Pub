//
//  WeMobAdUnit.h
//  WeMobSdk
//
//  Created by wanghang on 2019/6/13.
//

#import <Foundation/Foundation.h>
#import "WeMobAdType.h"
#import "WeMobMediation.h"
#import "WeMobMediationPriority.h"
#import "WeMobMediationLoadMode.h"
#import "WeMobLineItem.h"

@interface WeMobAdUnit : NSObject

@property NSString *name;
@property NSString *mid;
@property WeMobAdType *adType;
@property WeMobMediation *mediation;
@property int requestTimeOut;
@property int cacheTimeOut;
@property int freezeTime;
@property NSMutableArray *lineItemList;

// 是否复用 LineItem 的 Adapter，默认复用
@property BOOL reuseAdapter;

+(WeMobAdUnit *)fromJsonWithString: (NSString *)jsonString;
+(WeMobAdUnit *)fromJson: (NSDictionary *)jsonObject;

-(NSString *)getAdTypeName;

-(int)getParallelCount;

-(WeMobMediationPriority*)getPriority;

-(WeMobMediationLoadMode*)getLoadMode;
 
-(int)getRequestTimeOut;

-(NSMutableArray *)getLineItemList;

-(WeMobLineItem *)getLineItem:(NSString *)lineItemId;

-(BOOL)isValid;

-(NSString *)getDesc;

@end
