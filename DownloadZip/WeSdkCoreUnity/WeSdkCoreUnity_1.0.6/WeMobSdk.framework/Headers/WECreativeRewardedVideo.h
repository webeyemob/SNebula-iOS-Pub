//
//  WECreativeRewardedVideo.h
//  WeDSPDemo
//
//  Created by tangzheng on 2019/6/17.
//  Copyright © 2019 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WeCreativeAdError.h"

NS_ASSUME_NONNULL_BEGIN

@protocol WECreativeRewardedVideoDelegate;

/**
 * `WECreativeRewardedVideo` allows you to load and play rewarded video ads. All ad events are
 * reported, with the ad, to the delegate allowing the application to respond to the events
 * for the corresponding ad.
 *
 * **Important**: You must call `[init]` and set delegate
 * to initialize the rewarded video system.
 */
@interface WECreativeRewardedVideo : NSObject


/// Initializes an rewardedVideo with an ad content created on the webeye website. 
/// for every unique placement of an ad in your application. Set this to the ID assigned for this
/// placement. Ad units are important for targeting and statistics.
///
- (instancetype _Nonnull )initWithAdContent:(NSString *_Nullable)adContent;

/// Optional delegate object that receives state change notifications from this WECreativeRewardedVideo.
@property(nonatomic, weak, nullable) id<WECreativeRewardedVideoDelegate> delegate;

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

@protocol WECreativeRewardedVideoDelegate <NSObject>

@required

- (void)clickTrack:(WECreativeRewardedVideo *)view;

- (void)impressionTrack:(WECreativeRewardedVideo *)view;

@optional

/**
 * This method is called after an ad loads successfully.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdDidLoad:(WECreativeRewardedVideo *)ad;

/**
 * This method is called after an ad fails to load.
 *
 * @param ad The ad object of the ad associated with the event.
 * @param error An error indicating why the ad failed to load.
 */
- (void)rewarded:(WECreativeRewardedVideo *)ad didLoadedFailWithError: (WeCreativeAdError *)error;

/**
 * This method is called when a previously loaded rewarded video is no longer eligible for presentation.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdDidExpire:(WECreativeRewardedVideo *)ad;

/**
 * This method is called when an attempt to play a rewarded video fails.
 *
 * @param ad The ad object of the ad associated with the event.
 * @param error An error describing why the video couldn't play.
 */
- (void)rewardedVideoAdDidFailToPlay:(WECreativeRewardedVideo *)ad error:(NSError *)error;

/**
 * This method is called when a rewarded video ad is about to appear.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdWillAppear:(WECreativeRewardedVideo *)ad;

/**
 * This method is called when a rewarded video ad has appeared.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdDidAppear:(WECreativeRewardedVideo *)ad;

/**
 * This method is called when a rewarded video ad will be dismissed.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdWillDisappear:(WECreativeRewardedVideo *)ad;

/**
 * This method is called when a rewarded video ad has been dismissed.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdDidDisappear:(WECreativeRewardedVideo *)ad;


/**
 * This method is called when a rewarded video ad will cause the user to leave the application.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdWillLeaveApplication:(WECreativeRewardedVideo *)ad;

/**
 * This method is called when the user should be rewarded for watching a rewarded video ad.
 *
 * @param ad The ad object of the ad associated with the event.
 */
- (void)rewardedVideoAdShouldReward:(WECreativeRewardedVideo *)ad;

@end

NS_ASSUME_NONNULL_END
