//
//  WeHelper.h
//  WeDSPDemo
//
//  Created by liuguangren on 2019/6/11.
//  Copyright © 2019 WE. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WeHelper : NSObject

@property(nonatomic, strong) NSString *uaStr;
@property(nonatomic, strong) NSString *ipStr;
@property(nonatomic, strong) NSString *ifaStr;
@property(nonatomic, strong) NSString *appName;
@property(nonatomic, strong) NSString *bidStr;
@property(nonatomic, strong) NSString *tagId;

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
