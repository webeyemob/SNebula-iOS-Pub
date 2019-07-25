//
//  WeMobWeCreativeHelper.h
//  WeMobMediation_WeCreative
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"
#import <WeMobCreativeAdError.h>

@interface WeMobWeCreativeHelper : NSObject


+ (void)init:(NSString *)appId;
+ (NSString *)getAppId:(NSDictionary *)serverExtras;

// 将 WeMobCreative 的 Error 转为 SDK 的 Error。
+(WeMobAdError *)getAdErrorWithWeAdError:(WeMobCreativeAdError *)error;
+(WeMobAdError *)getAdErrorWithNSError:(NSError *)error;

@end
