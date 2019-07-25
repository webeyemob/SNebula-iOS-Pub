//
//  WeMobBannerAdapterDelegate.h

//
//  Created by Mathew on 2019/6/18.
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"

@protocol WeMobBannerAdapterDelegate<NSObject>

- (void)bannerDidReceiveAd;
- (void)bannerDidFailToReceiveAdWithError:(WeMobAdError *)adError;
- (void)bannerWillPresentScreen;
- (void)bannerDidDismissScreen;
- (void)bannerWillLeaveApplication;

@end
