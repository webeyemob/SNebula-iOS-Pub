//
//  WERewardedVideo.h
//  WeDSPDemo
//
//  Created by tangzheng on 2019/6/17.
//  Copyright © 2019 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WeAdError.h"

NS_ASSUME_NONNULL_BEGIN

@protocol WERewardedVideoDelegate;

/**
 * `WERewardedVideo` allows you to load and play rewarded video ads. All ad events are
 * reported, with the ad, to the delegate allowing the application to respond to the events
 * for the corresponding ad.
 *
 * **Important**: You must call `[init]` and set delegate
 * to initialize the rewarded video system.
 */
@interface WERewardedVideo : NSObject


/// Initializes an rewardedVideo with an ad unit created on the webeye website. Create a new ad unit
/// for every unique placement of an ad in your application. Set this to the ID assigned for this
/// placement. Ad units are important for targeting and statistics.
///
- (instancetype _Nonnull )initWithAdUnitId:(NSString *_Nullable)adUnitId;

/// Optional delegate object that receives state change notifications from this WERewardedVideo.
@property(nonatomic, weak, nullable) id<WERewardedVideoDelegate> delegate;

@property(nonatomic) CGFloat bidFloor;

/// Makes an rewarded ad request. Additional targeting options can be supplied with a request
/// object. Only one interstitial request is allowed at a time.
///
/// This is best to do several seconds before the interstitial is needed to preload its content.
/// Then when transitioning between view controllers show the interstital with
/// presentFromViewController.
- (void)loadAd;

/**
 * Returns whether or not an ad is available for the ad instance.
 */
@property(nonatomic, readonly) BOOL isReady;


/// Presents the interstitial ad which takes over the entire screen until the user dismisses it.
/// This has no effect unless isReady returns YES and/or the delegate's rewardedVideoAdDidLoad:
/// has been received.
///
/// Set rootViewController to the current view controller at the time this method is called. If your
/// application does not use view controllers pass in nil and your views will be removed from the
/// window to show the interstitial and restored when done. After the interstitial has been removed,
/// the delegate's interstitialDidDismissScreen: will be called.
- (void)presentFromRootViewController:(nonnull UIViewController *)rootViewController;

@end

@protocol WERewardedVideoDelegate <NSObject>

@optional

/**
 * This method is called after an ad loads successfully.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdDidLoad:(WERewardedVideo *)ad;

/**
 * This method is called after an ad fails to load.
 *
 * @param ad The ad object of the ad associated with the event.
 * @param error An error indicating why the ad failed to load.
 */
- (void)rewarded:(WERewardedVideo *)ad didLoadedFailWithError: (WeAdError *)error;

/**
 * This method is called when a previously loaded rewarded video is no longer eligible for presentation.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdDidExpire:(WERewardedVideo *)ad;

/**
 * This method is called when an attempt to play a rewarded video fails.
 *
 * @param ad The ad object of the ad associated with the event.
 * @param error An error describing why the video couldn't play.
 */
- (void)rewardedVideoAdDidFailToPlay:(WERewardedVideo *)ad error:(NSError *)error;

/**
 * This method is called when a rewarded video ad is about to appear.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdWillAppear:(WERewardedVideo *)ad;

/**
 * This method is called when a rewarded video ad has appeared.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdDidAppear:(WERewardedVideo *)ad;

/**
 * This method is called when a rewarded video ad will be dismissed.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdWillDisappear:(WERewardedVideo *)ad;

/**
 * This method is called when a rewarded video ad has been dismissed.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdDidDisappear:(WERewardedVideo *)ad;


/**
 * This method is called when a rewarded video ad will cause the user to leave the application.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdWillLeaveApplication:(WERewardedVideo *)ad;

/**
 * This method is called when the user should be rewarded for watching a rewarded video ad.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdShouldReward:(WERewardedVideo *)ad;

@end

NS_ASSUME_NONNULL_END
