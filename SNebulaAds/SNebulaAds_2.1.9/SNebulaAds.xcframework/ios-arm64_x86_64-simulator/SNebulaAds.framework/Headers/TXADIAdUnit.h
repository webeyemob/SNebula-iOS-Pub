//
//  TXADIAdUnit.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2020/2/1.
//  Copyright © 2020 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADAdType.h"
#import "TXADLoadMode.h"
#import "TXADBannerAdSize.h"
#import "TXADRewardItem.h"
#import "TXADSegment.h"
#import "TXADILineItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface TXADIAdUnit : NSObject

- (NSString *)getName;

- (NSString *)getId;

- (TXADAdType *)getAdType;

- (TXADLoadMode *)getLoadMode;

- (TXADBannerAdSize)getBannerAdSize;
- (int)getBannerRefreshInterval; // ms

- (TXADRewardItem *)getRewardItem;

- (TXADSegment *)getSegment;

- (NSMutableArray<TXADILineItem *> *)getLineItemArray;

@end

NS_ASSUME_NONNULL_END
