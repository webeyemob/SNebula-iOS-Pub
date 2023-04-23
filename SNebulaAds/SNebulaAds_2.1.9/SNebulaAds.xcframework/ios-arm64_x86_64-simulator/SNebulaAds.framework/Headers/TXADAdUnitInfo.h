//
//  TXADAdUnitInfo.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2019/11/3.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADAdType.h"
#import "TXADAdContentInfo.h"
#import "TXADIAdUnit.h"

NS_ASSUME_NONNULL_BEGIN

@interface TXADAdUnitInfo : NSObject

@property (nonatomic, strong) TXADIAdUnit *adUnit;
@property (nonatomic, strong, nullable)TXADAdContentInfo *adContentInfo;

// 下面的参数通过 TXADIAdUnit 获得
@property (nonatomic, strong) NSString *adUnitId DEPRECATED_MSG_ATTRIBUTE("Please use property: [adUnit getId]");
@property (nonatomic, strong) NSString *adUnitName DEPRECATED_MSG_ATTRIBUTE("Please use property: [adUnit getName]");
@property (nonatomic) TXADAdTypeId adUnitType DEPRECATED_MSG_ATTRIBUTE("Please use property: [adUnit getAdType].type");

+ (TXADAdUnitInfo *)generateAdUnitInfo:(TXADIAdUnit *)adUnit adContentInfo:(TXADAdContentInfo *)adContentInfo;

+ (TXADAdUnitInfo *)fromAdUnit:(NSObject * _Nonnull)item;

- (TXADSecondaryLineItem * _Nullable)getSecondaryLineItem;

@end

NS_ASSUME_NONNULL_END
