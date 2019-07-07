//
//  WeMobWeCreativeHelper.h
//  WeMobMediation_WeCreative
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"
#import <WeCreativeAdError.h>

@interface WeMobWeCreativeHelper : NSObject


+ (void)init:(NSString *)appId;
+ (NSString *)getAppId:(NSDictionary *)serverExtras;

// 将 WeCreative 的 Error 转为 WeMob 的 Error。
+(WeMobAdError *)getAdErrorWithWeAdError:(WeCreativeAdError *)error;
+(WeMobAdError *)getAdErrorWithNSError:(NSError *)error;

@end
