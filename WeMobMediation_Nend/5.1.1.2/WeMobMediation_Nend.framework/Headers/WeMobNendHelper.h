//
//  WeMobNendHelper.h
//  WeMobMediation_Nend
//
//  Created by wanghang on 2019/6/27.
//  Copyright © 2019年 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <NendAd/NendAd.h>
#import "WeMobAdError.h"

typedef NS_ENUM(NSUInteger, WeMobNendNativeMode) {
	NATIVE_MODE_NORMAL = 0,
	NATIVE_MODE_VIDEO = 1
};

typedef NS_ENUM(NSUInteger, WeMobNendInterstitialMode) {
	INTERSTITIAL_MODE_NORMAL = 0,
	INTERSTITIAL_MODE_VIDEO = 1,
	INTERSTITIAL_MODE_FULLSCREEN = 2
};

@interface WeMobNendHelper : NSObject<NADInterstitialDelegate>

+(WeMobNendHelper *)getInstance;

+(NSString *)getApiKey:(NSDictionary *)serverExtras;
+(NSString *)getSpotId:(NSDictionary *)serverExtras;
+(int)getNativeMode:(NSDictionary *)serverExtras;
+(int)getInterstitialMode:(NSDictionary *)serverExtras;

+(WeMobAdError *)getADViewError:(NADView *)adView;
+(WeMobAdError *)getAdError:(NSError *)error;

- (void)registerInterstitialDelegate: (id <NADInterstitialDelegate>)delegate;
- (void)unRegisterInterstitialDelegate: (id <NADInterstitialDelegate>)delegate;

@end
