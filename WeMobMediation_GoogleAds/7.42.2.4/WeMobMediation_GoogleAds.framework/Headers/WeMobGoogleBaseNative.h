//
//  WeMobGoogleBaseNative.h
//  WeMobMediation_GoogleAds
//
//  Created by Mathew on 2019/7/3.
//  Copyright © 2019年 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>
#import "WeMobCustomNative.h"

@interface WeMobGoogleBaseNative : WeMobCustomNative<GADUnifiedNativeAdLoaderDelegate, GADUnifiedNativeAdDelegate> {
	@protected GADAdLoader *adLoader;
}

@end
