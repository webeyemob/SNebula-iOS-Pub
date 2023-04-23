//
//  TXADInnerTracker.h
//  Created by TaurusXAds on 2019/7/14.
//

#import <Foundation/Foundation.h>
#import "TXADTrackerDelegate.h"
#import "TXADInnerTrackerItem.h"
#import "TXADAdUnit.h"
#import "TXADTypes.h"
#import "TXADAdError.h"
#import "TXADAdContentInfo.h"

#import "TXADInnerTrackAdUnitItem.h"
/*!
Track loading ad process of every LineItem.
*/
@interface TXADInnerTracker : NSObject

+ (TXADInnerTracker *)getInstance;

- (void)trackAdRequest:(TXADInnerTrackerItem *)trackItem;
- (void)trackAdLoaded:(TXADInnerTrackerItem *)trackItem;

- (void)trackAdCallShow:(TXADILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId adContentInfo:(TXADAdContentInfo *)adContentInfo __deprecated;
// 为了兼容 Mediation_GDT 旧版本的 Splash，需要保留此方法
- (void)trackAdCallShow:(TXADILineItem *)lineItem adContentInfo:(TXADAdContentInfo *)adContentInfo __deprecated;
- (void)trackAdCallShow:(TXADInnerTrackerItem *)trackItem;


- (void)trackAdShown:(TXADInnerTrackerItem *)trackItem;
- (void)trackAdClicked:(TXADInnerTrackerItem *)trackItem;
- (void)trackAdSkipped:(TXADInnerTrackerItem *)trackItem;
- (void)trackAdClosed:(TXADInnerTrackerItem *)trackItem;
- (void)trackAdFailedToLoad:(TXADInnerTrackerItem *)trackItem;
- (void)trackVideoStarted:(TXADInnerTrackerItem *)trackItem;
- (void)trackVideoCompleted:(TXADInnerTrackerItem *)trackItem;
- (void)trackRewarded:(TXADInnerTrackerItem *)trackItem;
- (void)trackRewardFailed:(TXADInnerTrackerItem *)trackItem;

- (void)trackAdUnitRequest:(TXADAdUnit *)adUnit;
- (void)trackAdUnitLoaded:(TXADInnerTrackAdUnitItem *)item;
- (void)trackAdUnitCallShow:(TXADAdUnit *)adUnit adContentInfo:(TXADAdContentInfo *)adContentInfo;
- (void)trackAdUnitShown:(TXADAdUnit *)adUnit;
- (void)trackAdUnitClicked:(TXADAdUnit *)adUnit adContentInfo:(TXADAdContentInfo *)adContentInfo;
- (void)trackAdUnitSkipped:(TXADAdUnit *)adUnit skipSpentTime:(long)skipSpentTime;
- (void)trackAdUnitClosed:(TXADAdUnit *)adUnit;
- (void)trackAdUnitFailedToLoad:(TXADAdUnit *)adUnit adError:(TXADAdError *)adError;
- (void)trackAdUnitVideoStarted:(TXADAdUnit *)adUnit;
- (void)trackAdUnitVideoCompleted:(TXADAdUnit *)adUnit;
- (void)trackAdUnitRewarded:(TXADAdUnit *)adUnit;
- (void)trackAdUnitRewardFailed:(TXADAdUnit *)adUnit;

@end
