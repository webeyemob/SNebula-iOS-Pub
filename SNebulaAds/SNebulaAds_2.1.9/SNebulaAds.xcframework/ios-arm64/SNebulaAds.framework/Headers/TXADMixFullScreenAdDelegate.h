//
//  TXADMixFullScreenAdDelegate.h
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
@class TXADMixFullScreenAd;

/*!
Delegate methods for receiving TXADMixFullScreenAd state change messages such as ad request status
*/
@protocol TXADMixFullScreenAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
*/
@optional
- (void)txAdMixFullScreenAd:(TXADMixFullScreenAd *)mixFullScreenAd didReceiveAd:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
@param adError TXADAdError load failed error info
*/
@optional
- (void)txAdMixFullScreenAd:(TXADMixFullScreenAd *)mixFullScreenAd didFailToReceiveAdWithError:(TXADAdError *)adError;

/*!
@brief Tells the delegate that a mixFullScreen ad will be presented in full screen view.
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
*/
@optional
- (void)txAdMixFullScreenAd:(TXADMixFullScreenAd *)mixFullScreenAd willPresentScreen:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
*/
@optional
- (void)txAdMixFullScreenAd:(TXADMixFullScreenAd *)mixFullScreenAd willLeaveApplication:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that a mixFullScreen ad will be dismissed from full screen
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
*/
@optional
- (void)txAdMixFullScreenAd:(TXADMixFullScreenAd *)mixFullScreenAd didDismissScreen:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the the interstitial/rewarded video start play
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
*/
@optional
- (void)txAdMixFullScreenAd:(TXADMixFullScreenAd *)mixFullScreenAd videoStart:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the the interstitial/rewarded video has been play completed
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
*/
@optional
- (void)txAdMixFullScreenAd:(TXADMixFullScreenAd *)mixFullScreenAd videoComplete:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the the rewarded video ad did earn rewarded
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
*/
@optional
- (void)txAdMixFullScreenAd:(TXADMixFullScreenAd *)mixFullScreenAd didReward:(TXADILineItem *)lineItem item:(TXADRewardItem *)item;

/*!
@brief Tells the delegate that the the rewarded video ad did not earn rewarded
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
*/
@optional
- (void)txAdMixFullScreenAd:(TXADMixFullScreenAd *)mixFullScreenAd didFailedToReward:(TXADILineItem *)lineItem;





/**
@deprecated Please use txAdMixFullScreenAd:didReceiveAd
*/
@optional
- (void)txAdMixFullScreenAdDidReceiveAd:(TXADMixFullScreenAd *)mixFullScreenAd __deprecated;

/**
@deprecated Please use txAdMixFullScreenAd:willPresentScreen
*/
@optional
- (void)txAdMixFullScreenAdWillPresentScreen:(TXADMixFullScreenAd *)mixFullScreenAd __deprecated;

/**
@deprecated Please use txAdMixFullScreenAd:willLeaveApplication
*/
@optional
- (void)txAdMixFullScreenAdWillLeaveApplication:(TXADMixFullScreenAd *)mixFullScreenAd __deprecated;

/**
@deprecated Please use txAdMixFullScreenAd:didDismissScreen
*/
@optional
- (void)txAdMixFullScreenAdDidDismissScreen:(TXADMixFullScreenAd *)mixFullScreenAd __deprecated;

@end
