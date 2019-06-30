//
//  WeMobFacebookHelper.h
//  WeMobMediation_Facebook
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"

@interface WeMobFacebookHelper : NSObject

+(NSString *)getPlacementId:(NSDictionary *)serverExtras;

// 将 Facebook 的 Error 转为 AdMob 的 Error。
+(WeMobAdError *)getAdError:(NSError *)error;

@end
