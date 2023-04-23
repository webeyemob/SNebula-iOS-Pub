//
//  TXADSplashAd.h
//  TXADSdk
//
//  Created by TaurusXAds on 2019/8/15.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TXADILineItem.h"
#import "TXADSplashAdDelegate.h"
#import "TXADNetworkConfigs.h"
#import "TXADLineItemFilter.h"

NS_ASSUME_NONNULL_BEGIN
/*!
@class TXADSplashAd
@abstract TXAD splash Ad class
*/
@interface TXADSplashAd : NSObject

/*!
@property adUnitId
@abstract The splash's ad unit ID
*/
@property(nonatomic, strong, readonly) NSString *adUnitId;

/*!
@property expressAdSize
@abstract Set adSize of express ad
*/
@property(nonatomic) CGSize expressAdSize;

/*!
@property muted
@abstract Whether video play muted, mute by default.
*/
@property(nonatomic) BOOL muted;

/*!
@property bottomView
@abstract The bottomView show in splash ad for GDT and Sigmob
 */
@property(nonatomic, strong) UIView *bottomView;

/*!
@property Title
@abstract The Title show in splash ad for Sigmob
 */
@property(nonatomic, strong) NSString *splashTitle;

/*!
@property Desc
@abstract The Desc show in splash ad for Sigmob
 */
@property(nonatomic, strong) NSString *splashDesc;

/*!
@property networkConfigs
@abstract set network configs
*/
@property(nonatomic, strong) TXADNetworkConfigs *networkConfigs;

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this TXADSplashAd
*/
@property(nonatomic, weak, nullable) id<TXADSplashAdDelegate> delegate;

/*!
@property lineItemFilter
@brief Optional delegate object that will filter specifed LineItem in AdUnit.
*/
@property(nonatomic, weak) id<TXADLineItemFilter> lineItemFilter;

/*!
@method initWithAdUnitId
@abstract initilize splash Ad
@param adUnitId splash Ad ID get from SDK dashboard
@param uiWindow  window for show splash ad
@result TXADSplashAd instance
*/
-(id)initWithAdUnitId:(NSString *)adUnitId uiWindow:(UIWindow *)uiWindow;


-(void)setSceneId:(NSString *)sceneId;

/*!
@method loadAd
@abstract Makes an splash ad request.
*/
-(void)loadAd;

/*!
@method isReady
@abstract Returns YES if the splash is ready to be displayed. The delegate's  SplashAdDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: ad is ready, NO: no ad ready
*/
-(BOOL)isReady;

/*!
@method isReady:
@abstract Returns YES if the splash is ready to be displayed. The delegate's  SplashAdDidReceiveAd: will be called after this property switches from NO to YES.
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
- (nullable TXADILineItem *)getReadyLineItem;

/*!
@method destroy
@abstract destory the ad request.
*/
-(void)destroy;

@end

NS_ASSUME_NONNULL_END
