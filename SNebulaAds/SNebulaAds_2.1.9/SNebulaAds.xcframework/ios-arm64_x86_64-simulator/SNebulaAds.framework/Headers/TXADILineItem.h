//
//  TXADILinItem.h
//  Created by TaurusXAds on 2019/6/24.
//

#import <Foundation/Foundation.h>
#import "TXADBannerAdSize.h"
#import "TXADNetwork.h"
#import "TXADAdType.h"
#import "TXADSecondaryLineItem.h"
@class TXADIAdUnit;

@interface TXADILineItem : NSObject
 
- (NSString *)getMediationVersion;
- (NSString *)getNetworkVersion;

- (NSString *)getId;
- (NSString *)getName;

- (TXADAdType *)getAdType;

- (TXADNetwork *)getNetwork;

- (int)getPriority;

- (float)getEcpm;

- (int)getRequestTimeOut; // ms

- (NSMutableDictionary *)getServerExtras;
- (NSString *)getNetworkAdUnitId;

// Belonged AdUnit
- (TXADIAdUnit *)getAdUnit;
- (TXADSecondaryLineItem *)getSecondaryLineItem;

- (NSString *)getTId;

// ############################# 下面的方法仅用于 Mediation SDK 调用 #############################
// 是否允许上报此条 LineItem 的事件，包括 TaurusXAdsTracker 回调
// 目前仅用于 Network：推啊
- (void)enableEventTrack:(BOOL)enableEventTrack;

- (TXADBannerAdSize)getBannerAdSize;
- (int)getBannerRefreshInterval; // ms

@end
