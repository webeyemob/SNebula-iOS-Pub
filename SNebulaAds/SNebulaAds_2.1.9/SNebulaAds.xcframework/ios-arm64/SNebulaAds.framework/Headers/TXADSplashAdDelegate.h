//
//  TXADSplashAdDelegate.h
//  TXADSdk
//
//  Created by TaurusXAds on 2019/8/15.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
@class TXADSplashAd;

/*!
Delegate methods for receiving TXADSplashAd state change messages such as ad request status
*/
@protocol TXADSplashAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see TXADSplashAd
@param splashAd TXADSplashAd object
@param lineItem loaded LineItem
*/
@optional
- (void)txAdSplash:(TXADSplashAd *)splashAd didReceiveAd:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see TXADSplashAd
@param splashAd TXADSplashAd object
@param adError TXADAdError load failed error info
*/
@optional
- (void)txAdSplash:(TXADSplashAd *)splashAd didFailToReceiveAdWithError:(TXADAdError *)adError;

/*!
@brief Tells the delegate that a splash ad will be presented in screen view
@see TXADSplashAd
@param splashAd TXADSplashAd object
@param lineItem shown LineItem
*/
@optional
- (void)txAdSplash:(TXADSplashAd *)splashAd willPresentScreen:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see TXADSplashAd
@param splashAd TXADSplashAd object
@param lineItem clicked LineItem
*/
@optional
- (void)txAdSplash:(TXADSplashAd *)splashAd willLeaveApplication:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the user click skip button on ad
@see TXADSplashAd
@param splashAd TXADSplashAd object
@param lineItem skipped LineItem
*/
@optional
- (void)txAdSplash:(TXADSplashAd *)splashAd didClickSkip:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that a splash ad will be dismissed
@see TXADSplashAd
@param splashAd TXADSplashAd object
@param lineItem closed LineItem
*/
@optional
- (void)txAdSplash:(TXADSplashAd *)splashAd didDismissScreen:(TXADILineItem *)lineItem;





/**
@deprecated Please use txAdSplash:didReceiveAd:
*/
@optional
- (void)txAdSplashDidReceiveAd:(TXADSplashAd *)splashAd __deprecated;

/**
@deprecated Please use txAdSplash:willPresentScreen:
*/
@optional
- (void)txAdSplashWillPresentScreen:(TXADSplashAd *)splashAd __deprecated;

/**
@deprecated Please use txAdSplash:willLeaveApplication:
*/
@optional
- (void)txAdSplashWillLeaveApplication:(TXADSplashAd *)splashAd __deprecated;

/**
@deprecated Please use txAdSplash:didDismissScreen:
*/
@optional
- (void)txAdSplashDidDismissScreen:(TXADSplashAd *)splashAd __deprecated;

@end
