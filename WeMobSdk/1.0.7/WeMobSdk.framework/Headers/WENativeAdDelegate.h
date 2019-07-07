//
//  WENativeAdDelegate.h
//  WeDSPDemo
//
//  Created by tangzheng on 2019/6/19.
//  Copyright © 2019 WeSdk. All rights reserved.
//



#ifndef WENativeAdDelegate_h
#define WENativeAdDelegate_h


#import "WeAdError.h"


@class WENativeAd;

/// Identifies native ad assets.
@protocol WENativeAdDelegate <NSObject>

@optional

/// Called when an interstitial ad request succeeded. Show it at the next transition point in your
/// application such as when transitioning between view controllers.
- (void)nativeAdDidLoad:(WENativeAd *)ad;

/// Called when an interstitial ad request completed without an interstitial to
/// show. This is common since interstitials are shown sparingly to users.
- (void)native:(WENativeAd *)ad didLoadedFailWithError:(WeAdError *)error;

#pragma mark Click-Time Lifecycle Notifications

/// Called just before presenting the user a full screen view, such as a browser, in response to
/// clicking on an ad. Use this opportunity to stop animations, time sensitive interactions, etc.
///
/// Normally the user looks at the ad, dismisses it, and control returns to your application with
/// the nativeAdDidDismissScreen: message. However, if the user hits the Home button or clicks on an
/// App Store link, your application will end. The next method called will be the
/// applicationWillResignActive: of your UIApplicationDelegate object.Immediately after that,
/// nativeAdWillLeaveApplication: is called.
- (void)nativeAdWillPresentScreen:(WENativeAd *)nativeAd;

/// Called just before dismissing a full screen view.
- (void)nativeAdWillDismissScreen:(WENativeAd *)nativeAd;

/// Called just after dismissing a full screen view. Use this opportunity to restart anything you
/// may have stopped as part of nativeAdWillPresentScreen:.
- (void)nativeAdDidDismissScreen:(WENativeAd *)nativeAd;

/// Called just before the application will go to the background or terminate due to an ad action
/// that will launch another application (such as the App Store). The normal UIApplicationDelegate
/// methods, like applicationDidEnterBackground:, will be called immediately before this.
- (void)nativeAdWillLeaveApplication:(WENativeAd *)nativeAd;

@end


#endif /* WENativeAdDelegate_h */
