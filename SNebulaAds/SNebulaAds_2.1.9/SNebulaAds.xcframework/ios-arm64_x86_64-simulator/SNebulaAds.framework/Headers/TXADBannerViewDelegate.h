//
//  TXADBannerViewDelegate.h
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
@class TXADBannerView;

/*!
Delegate methods for receiving TXADBannerView state change messages such as ad request status
*/
@protocol TXADBannerViewDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see TXADBannerView
@param bannerView TXADBannerView object
*/
@optional
- (void)txAdBanner:(TXADBannerView *)bannerView didReceiveAd:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see TXADBannerView
@param bannerView TXADBannerView object
@param adError TXADAdError load failed error info
*/
@optional
- (void)txAdBanner:(TXADBannerView *)bannerView didFailToReceiveAdWithError:(TXADAdError *)adError;

/*!
@brief Tells the delegate that a banner ad will be presented in screen view
@see TXADBannerView
@param bannerView TXADBannerView object
*/
@optional
- (void)txAdBanner:(TXADBannerView *)bannerView willPresentScreen:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that the user click will open another app, such as banner ad be clicked
@see TXADBannerView
@param bannerView TXADBannerView object
*/
@optional
- (void)txAdBanner:(TXADBannerView *)bannerView willLeaveApplication:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that a banner ad will be dismissed
@see TXADBannerView
@param bannerView TXADBannerView object
*/
@optional
- (void)txAdBanner:(TXADBannerView *)bannerView didDismissScreen:(TXADILineItem *)lineItem;





/**
@deprecated Please use txAdBanner:didReceiveAd
*/
@optional
- (void)txAdBannerDidReceiveAd:(TXADBannerView *)bannerView __deprecated;

/**
@deprecated Please use txAdBanner:willPresentScreen
*/
@optional
- (void)txAdBannerWillPresentScreen:(TXADBannerView *)bannerView __deprecated;

/**
@deprecated Please use txAdBanner:willLeaveApplication
*/
@optional
- (void)txAdBannerWillLeaveApplication:(TXADBannerView *)bannerView __deprecated;

/**
@deprecated Please use txAdBanner:didDismissScreen
*/
@optional
- (void)txAdBannerDidDismissScreen:(TXADBannerView *)bannerView __deprecated;

@end
