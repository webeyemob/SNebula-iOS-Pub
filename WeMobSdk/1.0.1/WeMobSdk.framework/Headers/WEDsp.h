//
//  WEDsp.h
//  WeDSPDemo
//
//  Created by 汤正 on 2019/6/19.
//  Copyright © 2019 WE. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WEDsp : NSObject

@property (nonatomic) BOOL             testMode;
@property (nonatomic, strong) NSString *tokenID;
@property (nonatomic, strong) NSString *pubName;
@property (nonatomic, strong) NSString *appId;

+ (instancetype)WEDspManager;

+ (void)initWithAppId:(NSString *)appId;


@end

NS_ASSUME_NONNULL_END
