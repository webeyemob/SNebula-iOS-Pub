//
//  WeMobTrackerInfo.h
//  WeMobSdk
//
//  Created by 王航 on 2019/7/14.
//  Copyright © 2019年 WeMobSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WeMobILineItem.h"

@interface WeMobTrackerInfo : NSObject

@property float eCPM;
@property int networkId;
@property NSString *lineItemAdUnitId;
@property NSString *adUnitId;
@property int adType;

- (WeMobTrackerInfo *)initWithLineItem:(WeMobILineItem *)lineItem;

@end
