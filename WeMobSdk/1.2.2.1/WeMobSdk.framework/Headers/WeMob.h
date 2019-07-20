//
//  WeMob.h
//  WeMobSdk
//
//  WeMob Sdk 初始化的接口。

#import <Foundation/Foundation.h>

@interface WeMob : NSObject

// 使用 AppKey 初始化 Sdk
+ (void) initWithAppId: (NSString *)appId;
+ (NSString *)getAppId;

+ (void)setTestMode:(BOOL)testMode;
+ (void)setLogEnable:(BOOL)enable;

// 设置用户是否同意了 Gdpr
+ (void) setGdprConsent: (BOOL) consent;
+ (BOOL) isGdprConsent;

@end
