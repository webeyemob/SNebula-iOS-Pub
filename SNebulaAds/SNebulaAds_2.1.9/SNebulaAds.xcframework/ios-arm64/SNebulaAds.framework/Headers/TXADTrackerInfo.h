//
//  TXADTrackerInfo.h
//  Created by TaurusXAds on 2019/7/14.
//

#import <Foundation/Foundation.h>
#import "TXADAdType.h"
#import "TXADNetwork.h"
#import "TXADILineItem.h"
#import "TXADAdContentInfo.h"
#import "TXADSecondaryLineItem.h"
/*!
Info of LineItem when tracking loading ad process.
*/
@interface TXADTrackerInfo : NSObject

@property TXADILineItem *lineItem;

@property NSString *medId;

@property NSInteger duration;

/*!
@brief Id identiy one LineItem request process, from load, fill to imp and click. This id wil recreate when LineItem load every time.
*/
@property NSString *lineItemRequestId;

@property TXADAdContentInfo *adContentInfo;

@property TXADSecondaryLineItem *secondaryLineItem;

@property NSString *sceneId;


#pragma mark - 下面的属性可以通过 [lineItem getAdUnit] 获得
/*!
 @brief Id of SDK platform AdUnit.
 */
@property NSString *adUnitId DEPRECATED_MSG_ATTRIBUTE("Please use property: [[lineItem getAdUnit] getId]");

/*!
 @brief Name of SDK platform AdUnit.
 */
@property NSString *adUnitName DEPRECATED_MSG_ATTRIBUTE("Please use property: [[lineItem getAdUnit] getName]");

#pragma mark - 下面的属性可以通过 LineItem 获取
/*!
 @brief AdType of LienItem. For example: Banner, Interstitial, Native and so on.
 */
@property TXADAdTypeId adType DEPRECATED_MSG_ATTRIBUTE("Please use property: [lineItem getAdType].type");

/*!
 @brief Id of Network the LineItem belonged.
 @see TXADNetworkId
 */
@property TXADNetworkId networkId DEPRECATED_MSG_ATTRIBUTE("Please use property: [lineItem getNetwork].mid");

/*!
 @brief eCPM of LineItem
 */
@property float eCPM DEPRECATED_MSG_ATTRIBUTE("Please use property: [lineItem getEcpm]");

/*!
 @brief AdUnitId of LineItem. For example: AdMob AdUnit ID, Facebook Placement ID and so on.
 */
@property NSString *networkAdUnitId DEPRECATED_MSG_ATTRIBUTE("Please use property: [lineItem getNetworkAdUnitId]");

- (TXADTrackerInfo *)initWithTrackerItem:(NSObject *)trackerItem;

@end
