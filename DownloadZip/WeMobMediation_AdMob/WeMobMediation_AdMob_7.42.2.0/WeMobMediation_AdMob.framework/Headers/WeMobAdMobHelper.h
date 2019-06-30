//
//  WeMobAdMobHelper.h
//  WeMobMediation_AdMob
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"
#import <GoogleMobileAds/GADRequestError.h>

@interface WeMobAdMobHelper : NSObject

+(GADRequest *)getRequest;

+ (void)init:(NSString *)appId;
+ (NSString *)getAppId:(NSDictionary *)serverExtras;
+ (NSString *)getAdUnitId:(NSDictionary *)serverExtras;

// 将 AdMob 的 Error 转为 WeMob 的 Error。
+(WeMobAdError *)getAdErrorWithGADRequestError:(GADRequestError *)error;
+(WeMobAdError *)getAdErrorWithNSError:(NSError *)error;

@end
