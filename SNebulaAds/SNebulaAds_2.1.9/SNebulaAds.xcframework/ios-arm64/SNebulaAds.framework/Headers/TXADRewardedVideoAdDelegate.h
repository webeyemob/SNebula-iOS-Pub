//
//  TXADRewardedVideoAdDelegate.h

//
//  iOS 广告回调。

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
#import "TXADRewardItem.h"
@class TXADRewardedVideoAd;

/*!
Delegate methods for receiving TXADRewardedVideoAd state change messages such as ad request status
*/
@protocol TXADRewardedVideoAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideo:(TXADRewardedVideoAd *)rewardedVideoAd didReceiveAd:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
@param adError TXADAdError load failed error info
*/
@optional
- (void)txAdRewardedVideo:(TXADRewardedVideoAd *)rewardedVideoAd didFailToReceiveAdWithError:(TXADAdError *)adError;

/*!
@brief Tells the delegate that the rewarded video ad did  open.
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideo:(TXADRewardedVideoAd *)rewardedVideoAd didOpen:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideo:(TXADRewardedVideoAd *)rewardedVideoAd willLeaveApplication:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the rewarded video ad close
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideo:(TXADRewardedVideoAd *)rewardedVideoAd didClose:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the the rewarded video start play
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideo:(TXADRewardedVideoAd *)rewardedVideoAd didStart:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the the rewarded video has been play completed
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideo:(TXADRewardedVideoAd *)rewardedVideoAd didComplete:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the the rewarded video ad did earn rewarded
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideo:(TXADRewardedVideoAd *)rewardedVideoAd didReward:(TXADILineItem *)lineItem item:(TXADRewardItem *)item;

/*!
@brief Tells the delegate that the the rewarded video ad did not earn rewarded
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideo:(TXADRewardedVideoAd *)rewardedVideoAd didFailedToReward:(TXADILineItem *)lineItem;





/**
@deprecated Please use txAdRewardedVideo:didReceiveAd
*/
@optional
- (void)txAdRewardedVideoDidReceiveAd:(TXADRewardedVideoAd *)rewardedVideoAd __deprecated;

/**
@deprecated Please use txAdRewardedVideo:didOpen
*/
@optional
- (void)txAdRewardedVideoDidOpen:(TXADRewardedVideoAd *)rewardedVideoAd __deprecated;

/**
@deprecated Please use txAdRewardedVideo:willLeaveApplication
*/
@optional
- (void)txAdRewardedVideoWillLeaveApplication:(TXADRewardedVideoAd *)rewardedVideoAd __deprecated;

/**
@deprecated Please use txAdRewardedVideo:didClose
*/
@optional
- (void)txAdRewardedVideoDidClose:(TXADRewardedVideoAd *)rewardedVideoAd __deprecated;

/**
@deprecated Please use txAdRewardedVideo:didStart
*/
@optional
- (void)txAdRewardedVideoDidStart:(TXADRewardedVideoAd *)rewardedVideoAd __deprecated;

/**
@deprecated Please use txAdRewardedVideo:didComplete
*/
@optional
- (void)txAdRewardedVideoDidComplete:(TXADRewardedVideoAd *)rewardedVideoAd __deprecated;

/**
@deprecated Please use txAdRewardedVideo:didReward:item
*/
@optional
- (void)txAdRewardedVideo:(TXADRewardedVideoAd *)rewardedVideoAd didReward:(TXADRewardItem *)item __deprecated;

/**
@deprecated Please use txAdRewardedVideo:didFailedToReward
*/
@optional
- (void)txAdRewardedVideoDidFailedToReward:(TXADRewardedVideoAd *)rewardedVideoAd __deprecated;

@end
