//
//  WeAdError.h
//  WeDSPDemo
//
//  Created by liuguangren on 2019/6/11.
//  Copyright © 2019 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, ERROR_CODE) {
    ERROR_CODE_INTERNAL_ERROR = 0, // 内部错误
    ERROR_CODE_INVALID_REQUEST = 1, // 无效请求，请求过于频繁等，广告位无效等
    ERROR_CODE_NETWORK_ERROR = 2, // 网络错误
    ERROR_CODE_NO_FILL = 3, // 无广告填充
    ERROR_CODE_TIMEOUT = 4, // 超时
};

@interface WeAdError : NSObject

@property (readonly, copy) NSString   *message;
@property (readonly)       NSInteger  errorCode;

- (void)internalError:(NSString *)message;
- (void)invalidRequest:(NSString *)message;
- (void)networkError:(NSString *)message;
- (void)noFill:(NSString *)message;
- (void)timeOut:(NSString *)message;

@end

