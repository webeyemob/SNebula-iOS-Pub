//
//  WeMobAdMobNative.h
//  WeMobMediation_AdMob
//
//  Created by 王航 on 2019/6/21.
//

#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>
#import "WeMobCustomNative.h"

@interface WeMobAdMobNative : WeMobCustomNative<GADUnifiedNativeAdLoaderDelegate, GADUnifiedNativeAdDelegate>

@end
