//
//  WeMobWeDspHelper.h
//  WeMobMediation_WeDsp
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"
#import <WeMobDspAdError.h>

@interface WeMobWeDspHelper : NSObject

+ (void)initWithServerExtras:(NSDictionary *)serverExtras;

// 将 WeDsp 的 Error 转为 SDK 的 Error。
+(WeMobAdError *)getAdErrorWithWeAdError:(WeMobDspAdError *)error;
+(WeMobAdError *)getAdErrorWithNSError:(NSError *)error;

@end
