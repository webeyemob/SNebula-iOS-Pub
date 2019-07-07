//
//  WECreative.h
//  WeDSPDemo
//
//  Created by 汤正 on 2019/6/19.
//  Copyright © 2019 WE. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WECreative : NSObject


@property (nonatomic, copy) NSString *appId;

+ (instancetype)instance;

+ (void) initWithAppId: (NSString *)appId;

@end

NS_ASSUME_NONNULL_END
