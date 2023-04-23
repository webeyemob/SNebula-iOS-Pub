//
//  TXADNativeAdDelegate.h
//  Created by TaurusXAds on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
@class TXADNativeAd;

/*!
Delegate methods for receiving TXADNativeAd state change messages such as ad request status
*/
@protocol TXADNativeAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see TXADNativeAd
@param nativeAd TXADNativeAd object
*/
@optional
- (void)txAdNativeAdDidReceiveAd:(TXADNativeAd *)nativeAd;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see TXADNativeAd
@param nativeAd TXADNativeAd object
@param adError TXADAdError load failed error info
*/
@optional
- (void)txAdNativeAd:(TXADNativeAd *)nativeAd didFailToReceiveAdWithError:(TXADAdError *)adError;

/*!
@brief Tells the delegate that a native ad will be presented in screen view
@see TXADNativeAd
@param nativeAd TXADNativeAd object
*/
@optional
- (void)txAdNativeAdWillPresentScreen:(TXADNativeAd *)nativeAd;

/*!
@brief Tells the delegate that a native ad will be dismissed
@see TXADNativeAd
@param nativeAd TXADNativeAd object
*/
@optional
- (void)txAdNativeAdDidDismissScreen:(TXADNativeAd *)nativeAd;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see TXADNativeAd
@param nativeAd TXADNativeAd object
*/
@optional
- (void)txAdNativeAdWillLeaveApplication:(TXADNativeAd *)nativeAd;

@end
