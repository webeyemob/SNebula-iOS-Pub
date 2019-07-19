//
//  WeMobToutiaoHelper.h
//  WeMobMediation_Toutiao
//
//  Created by Mathew on 2019/7/3.
//  Copyright © 2019年 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"

typedef NS_ENUM(NSUInteger, WeMobToutiaoNativeMode) {
	NATIVE_MODE_NATIVE_BANNER = 0, // 原生 Banner
	NATIVE_MODE_EXPRESS_BANNER = 1, // 模版 Banner
	NATIVE_MODE_NATIVE_INTERSTITIAL = 2 // 原生 Interstitial
};

typedef NS_ENUM(NSUInteger, WeMobToutiaoInterstitialMode) {
	INTERSTITIAL_MODE_NORMAL = 0,
	INTERSTITIAL_MODE_FULLSCREENVIDEO = 1
};

typedef NS_ENUM(NSUInteger, WeMobToutiaoFeedListMode) {
	FEEDLIST_MODE_NATIVE = 0, // 自渲染
	FEEDLIST_MODE_EXPRESS = 1, // 模版
	FEEDLIST_MODE_DRAW = 2 // Draw
};

typedef NS_ENUM(NSUInteger, WeMobToutiaoOrienration) {
	ORIENTATION_VERTICAL = 1,
	ORIENTATION_HORIZONTAL = 2
};

@interface WeMobToutiaoHelper : NSObject

+(void)initWithAppId:(NSString *)appId;

+(NSString *)getAppId:(NSDictionary *)serverExtras;
+(NSString *)getCodeId:(NSDictionary *)serverExtras;
+(int)getNativeMode:(NSDictionary *)serverExtras;
+(int)getInterstitialMode:(NSDictionary *)serverExtras;
+(int)getFeedListMode:(NSDictionary *)serverExtras;
+(int)getOrientation:(NSDictionary *)serverExtras;

+(WeMobAdError *)getAdError:(NSError *_Nullable)error;

@end
