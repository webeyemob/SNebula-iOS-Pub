//
//  TXADSecondaryLineItem.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2021/5/18.
//  Copyright © 2021 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADNetwork.h"

NS_ASSUME_NONNULL_BEGIN

/**
+ * 二级 LineItem 信息。
+ * 为聚合类型 Network 的分层信息，比如 Mobrain、AppLovinMax、AdMob、MoPub 等。
+ */
@interface TXADSecondaryLineItem : NSObject

@property (nonatomic, strong, readonly)TXADNetwork *network;
@property (nonatomic, strong, readonly)NSString *adUnitId;
@property (nonatomic, readonly) float ecpm;

- (instancetype)initWithNetwork:(TXADNetwork *)network adUnitId:(NSString *)adUnitId ecpm:(float)ecpm;

@end

NS_ASSUME_NONNULL_END
