//
//  WeMobDspBannerViewDelegate.h

//
//  Created by tamefox on 2019/6/13.
//  Copyright © 2019 WeMob. All rights reserved.
//

#ifndef WeMobDspBannerViewDelegate_h_h
#define WeMobDspBannerViewDelegate_h_h

#import "WeMobDspAdError.h"

@class WeMobDspBannerView;

/**
 * The delegate of an `WeMobDspBannerView` object must adopt the `WeMobDspBannerViewDelegate` protocol. It must
 * implement `viewControllerForPresentingModalView` to provide a root view controller from which
 * the ad view should present modal content.
 *
 * Optional methods of this protocol allow the delegate to be notified of banner success or
 * failure, as well as other lifecycle events.
 */

@protocol WeMobDspBannerViewDelegate  <NSObject>

@optional

/** @name Detecting When a Banner Ad is Loaded */

/**
 * Sent when an ad view successfully loads an ad.
 *
 * Your implementation of this method should insert the ad view into the view hierarchy, if you
 * have not already done so.
 *
 * @param view The ad view sending the message.
 */
- (void)bannerAdDidLoad:(WeMobDspBannerView *)view;

/**
 * Sent when an ad view fails to load an ad.
 *
 * To avoid displaying blank ads, you should hide the ad view in response to this message.
 *
 * @param view The ad view sending the message.
 * @param error The error
 */
- (void)adView:(WeMobDspBannerView *)view didLoadedFailWithError:(WeMobDspAdError *)error;

/** @name Detecting When a User Interacts With the Ad View */

/**
 * Sent when an ad view is about to present modal content.
 *
 * This method is called when the user taps on the ad view. Your implementation of this method
 * should pause any application activity that requires user interaction.
 *
 * @param view The ad view sending the message.
 * @see `didDismissModalViewForAd:`
 */
- (void)willPresentModalViewForAd:(WeMobDspBannerView *)view;

/**
 * Sent when an ad view has dismissed its modal content, returning control to your application.
 *
 * Your implementation of this method should resume any application activity that was paused
 * in response to `willPresentModalViewForAd:`.
 *
 * @param view The ad view sending the message.
 * @see `willPresentModalViewForAd:`
 */
- (void)didDismissModalViewForAd:(WeMobDspBannerView *)view;

/**
 * Sent when a user is about to leave your application as a result of tapping
 * on an ad.
 *
 * Your application will be moved to the background shortly after this method is called.
 *
 * @param view The ad view sending the message.
 */
- (void)willLeaveApplicationFromAd:(WeMobDspBannerView *)view;

@end


#endif /* WeMobDspBannerViewDelegate_h */
