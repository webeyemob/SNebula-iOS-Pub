//
//  WeMobWeDspHelper.h
//  WeMobMediation_WeDsp
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"
#import <WeAdError.h>

@interface WeMobWeDspHelper : NSObject

+ (void)initWithServerExtras:(NSDictionary *)serverExtras;

// 将 WeDsp 的 Error 转为 WeMob 的 Error。
+(WeMobAdError *)getAdErrorWithWeAdError:(WeAdError *)error;
+(WeMobAdError *)getAdErrorWithNSError:(NSError *)error;

@end
