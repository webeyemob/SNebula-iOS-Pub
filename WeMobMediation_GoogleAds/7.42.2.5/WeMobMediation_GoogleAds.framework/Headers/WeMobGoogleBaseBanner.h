//
//  WeMobGoogleBaseBanner.h
//  WeMobMediation_GoogleAds
//
//  Created by Mathew on 2019/7/3.
//  Copyright © 2019年 WeSdk. All rights reserved.
//

#import "WeMobCustomBanner.h"
#import <GoogleMobileAds/GoogleMobileAds.h>

@interface WeMobGoogleBaseBanner : WeMobCustomBanner<GADBannerViewDelegate>

-(GADAdSize)getAdSize:(int)bannerAdSize;

@end
