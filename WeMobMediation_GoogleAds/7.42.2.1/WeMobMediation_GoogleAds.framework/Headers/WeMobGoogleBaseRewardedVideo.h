//
//  WeMobGoogleBaseRewardedVideo.h
//  WeMobMediation_GoogleAds
//
//  Created by 王航 on 2019/7/3.
//  Copyright © 2019年 王航. All rights reserved.
//

#import "WeMobCustomRewardedVideo.h"
#import <GoogleMobileAds/GoogleMobileAds.h>

@interface WeMobGoogleBaseRewardedVideo : WeMobCustomRewardedVideo<GADRewardBasedVideoAdDelegate> {
	@protected WeMobILineItem *lineItem;
}

+(BOOL)canLoad;
+(void)setCannotLoad;
+(GADRewardBasedVideoAd *)getRewardVideoAd;

@end
