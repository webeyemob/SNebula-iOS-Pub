//
//  TXADFeedListAdDelegate.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2019/10/9.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
@class TXADFeedList;
@class TXADFeed;

/*!
Delegate methods for receiving TXADFeedList state change messages such as ad request status
*/
@protocol TXADFeedListDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see TXADInterstitialAd
@param feedList TXADFeedList object
*/
@optional
- (void)txAdFeedList:(TXADFeedList *)feedList didReceiveAd:(TXADILineItem *)lineItem;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see TXADInterstitialAd
@param feedList TXADFeedList object
@param adError TXADAdError load failed error info
*/
@optional
- (void)txAdFeedList:(TXADFeedList *)feedList didFailToReceiveAdWithError:(TXADAdError *)adError;

/*!
@brief Tells the delegate that a interstitial ad will be presented in screen view
@see TXADInterstitialAd
@param feedList TXADFeedList object
@param feed TXADFeed  object
*/
@optional
- (void)txAdFeedList:(TXADFeedList *)feedList willPresentScreen:(TXADILineItem *)lineItem feed:(TXADFeed *)feed;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see TXADInterstitialAd
@param feedList TXADFeedList object
@param feed TXADFeed  object
*/
@optional
- (void)txAdFeedList:(TXADFeedList *)feedList willLeaveApplication:(TXADILineItem *)lineItem feed:(TXADFeed *)feed;

/*!
@brief Tells the delegate that a feedlist ad will be dismissed from screen
@see TXADInterstitialAd
@param feedList TXADFeedList object
@param feed TXADFeed  object
*/
@optional
- (void)txAdFeedList:(TXADFeedList *)feedList didDismissScreen:(TXADILineItem *)lineItem feed:(TXADFeed *)feed;





/**
@deprecated Please use txAdFeedList:didReceiveAd
*/
@optional
- (void)txAdFeedListDidReceiveAd:(TXADFeedList *)feedList __deprecated;

/**
@deprecated Please use txAdFeedList:willPresentScreen
*/
@optional
- (void)txAdFeedListWillPresentScreen:(TXADFeedList *)feedList feed:(TXADFeed *)feed __deprecated;

/**
@deprecated Please use txAdFeedList:willLeaveApplication
*/
@optional
- (void)txAdFeedListWillLeaveApplication:(TXADFeedList *)feedList feed:(TXADFeed *)feed __deprecated;

/**
@deprecated Please use txAdFeedList:didDismissScreen
*/
@optional
- (void)txAdFeedListDidDismissScreen:(TXADFeedList *)feedList feed:(TXADFeed *)feed __deprecated;

@end
