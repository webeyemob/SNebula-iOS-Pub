//
//  TXADFeedList.h
//  TXADSdk
//
//  Created by TaurusXAds on 2019/9/18.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TXADFeedListDelegate.h"
#import "TXADNativeAdLayout.h"
#import "TXADFeed.h"
#import "TXADNetworkConfigs.h"
#import "TXADILineItem.h"
#import "TXADLineItemFilter.h"

NS_ASSUME_NONNULL_BEGIN
/*!
@class TXADFeedList
@abstract TXAD feedlist Ad class
*/
@interface TXADFeedList : NSObject

/*!
@property adUnitId
@abstract The feedlist's ad unit ID
*/
@property(nonatomic, readonly, nonnull) NSString *adUnitId;

/*!
@method initWithAdUnitId
@abstract initilize feedlist Ad
@param adUnitId feedlist Ad ID from SDK dashboard
@result TXADFeedList instance
*/
- (TXADFeedList *)initWithAdUnitId:(NSString *)adUnitId;

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this TXADFeedList
*/
@property(nonatomic, weak, nullable) id<TXADFeedListDelegate> delegate;

/*!
@property lineItemFilter
@brief Optional delegate object that will filter specifed LineItem in AdUnit.
*/
@property(nonatomic, weak) id<TXADLineItemFilter> lineItemFilter;

/*!
@method setCount
@abstract set feed count
@param count feed count
*/
- (void)setCount:(int)count;

/*!
@method setExpressAdSize
@abstract Set adSize of express ad.
@param adSize TXADBannerAdSize
*/
- (void)setExpressAdSize:(CGSize)adSize;

/*!
@method setMuted
@abstract Set whether video play muted, mute by default.
@param muted true-play video muted; false-play video sound
*/
- (void)setMuted:(BOOL)muted;

/*!
@method setNetworkConfigs
@abstract set network configs
@param configs TXADNetworkConfigs
*/
- (void)setNetworkConfigs:(TXADNetworkConfigs *)configs;

/*!
@method loadAd
@abstract Makes an feedlist ad request.
*/
- (void)loadAd;

/*!
@method isReady
@abstract Returns YES if the feedlist ad is ready to be displayed. The delegate's  SplashAdDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: ad is ready, NO: no ad ready
*/
- (BOOL)isReady;

/*!
@method isReady:
@abstract Returns YES if the feedlist ad is ready to be displayed. The delegate's  SplashAdDidReceiveAd: will be called after this property switches from NO to YES.
@param scene scene used to divide analysis data
@result YES: banner is ready, NO: no ad ready
*/
- (BOOL)isReady:(NSString *)scene;

/*!
@method enterAdScene:
@abstract Called when user enter ad scene, for record user enter ad scene count.
*/
- (void)enterAdScene;

/*!
@method enterAdScene:
@abstract Called when user enter ad scene, for record user enter ad scene count.
@param scene ad scene Id
*/
- (void)enterAdScene:(NSString *)scene;

/*!
@method getReadyLineItem
@abstract Return loaded LineItem of max priority and eCPM.
@result TXADILineItem
*/
- (TXADILineItem *)getReadyLineItem;

/*!
@method getFeedArray
@abstract get feed array in feedlist ad.
@result NSMutableArray<TXADFeed *> feed array
*/
- (NSMutableArray<TXADFeed *> *)getFeedArray;

/*!
@method destroy
@abstract destory the ad request.
*/
- (void)destroy;

@end

NS_ASSUME_NONNULL_END
