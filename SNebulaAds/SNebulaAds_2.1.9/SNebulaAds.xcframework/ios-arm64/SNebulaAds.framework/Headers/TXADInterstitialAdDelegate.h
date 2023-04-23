//
//  TXADInterstitialAdDelegate.h
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
@class TXADInterstitialAd;

/*!
Delegate methods for receiving TXADInterstitialAd state change messages such as ad request status
*/
@protocol TXADInterstitialAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see TXADInterstitialAd
@param interstitialAd TXADInterstitialAd object
*/
@optional
- (void)txAdInterstitial:(TXADInterstitialAd *)interstitialAd didReceiveAd:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see TXADInterstitialAd
@param interstitialAd TXADInterstitialAd object
@param adError TXADAdError load failed error info
*/
@optional
- (void)txAdInterstitial:(TXADInterstitialAd *)interstitialAd didFailToReceiveAdWithError:(TXADAdError *)adError;

/*!
@brief Tells the delegate that a interstitial ad will be presented in full screen view.
@see TXADInterstitialAd
@param interstitialAd TXADInterstitialAd object
*/
@optional
- (void)txAdInterstitial:(TXADInterstitialAd *)interstitialAd willPresentScreen:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see TXADInterstitialAd
@param interstitialAd TXADInterstitialAd object
*/
@optional
- (void)txAdInterstitial:(TXADInterstitialAd *)interstitialAd willLeaveApplication:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that a interstitial ad will be dismissed from full screen
@see TXADInterstitialAd
@param interstitialAd TXADInterstitialAd object
*/
@optional
- (void)txAdInterstitial:(TXADInterstitialAd *)interstitialAd didDismissScreen:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the the interstitial video start play
@see TXADInterstitialAd
@param interstitialAd TXADInterstitialAd object
*/
@optional
- (void)txAdInterstitial:(TXADInterstitialAd *)interstitialAd videoStart:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the the interstitial video has been play completed
@see TXADInterstitialAd
@param interstitialAd TXADInterstitialAd object
*/
@optional
- (void)txAdInterstitial:(TXADInterstitialAd *)interstitialAd videoComplete:(TXADILineItem *)lineItem;





/**
@deprecated Please use txAdInterstitial:didReceiveAd
*/
@optional
- (void)txAdInterstitialDidReceiveAd:(TXADInterstitialAd *)interstitialAd __deprecated;

/**
@deprecated Please use txAdInterstitial:willPresentScreen
*/
@optional
- (void)txAdInterstitialWillPresentScreen:(TXADInterstitialAd *)interstitialAd __deprecated;

/**
@deprecated Please use txAdInterstitial:willLeaveApplication
*/
@optional
- (void)txAdInterstitialWillLeaveApplication:(TXADInterstitialAd *)interstitialAd __deprecated;

/**
@deprecated Please use txAdInterstitial:didDismissScreen
*/
@optional
- (void)txAdInterstitialDidDismissScreen:(TXADInterstitialAd *)interstitialAd __deprecated;

@end
