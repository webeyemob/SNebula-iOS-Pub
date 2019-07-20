//
//  WeMobDefaultMediator.h
//  WeMobSdk
//
//  Created by Mathew on 2019/6/16.
//

#import "WeMobMediator.h"
#import "WeMobAdUnit.h"
#import "WeMobLineItem.h"
#import "WeMobMediatorDelegate.h"
#import "WeMobInnerBannerAdDelegate.h"
#import "WeMobInnerInterstitialAdDelegate.h"
#import "WeMobInnerRewardedVideoAdDelegate.h"
#import "WeMobInnerNativeAdDelegate.h"
#import "WeMobAdError.h"

@interface WeMobDefaultMediator<T : WeMobBaseAdAdapter*> : WeMobMediator<WeMobInnerBannerAdDelegate, WeMobInnerInterstitialAdDelegate, WeMobInnerRewardedVideoAdDelegate, WeMobInnerNativeAdDelegate> {

    @protected NSMutableArray<WeMobLineItem *> *lineItemArray;
    @protected NSMutableDictionary<NSString *, T> *adapterDictionary;
    @protected WeMobAdUnit *newAdUnit;
    @protected int parallelCount;
    @protected NSMutableArray<NSString *> *checkedLineItemIdArray;
    @protected BOOL startAdapterLoad;
    @protected NSMutableArray<NSString *> *failedLineItemIdArray;
    @protected NSMutableArray<NSString *> *loadedLineItemIdArray;
    @protected NSMutableArray<NSString *> *timeOutLineItemIdArray;
    @protected WeMobAdUnit *adUnit;
    @private WeMobMediationPriority *priority;
    @private NSMutableArray<NSString *> *allLineItemIdArray;
    @private BOOL isLoading;
    @private BOOL hasNotifyLoadResult;
}

-(void) log:(NSString *)message;
-(id)initWithAdUnit:(WeMobAdUnit *)adUnit;

-(void)checkStatusImpl;

-(WeMobBaseAdAdapter *) getAdapter:(WeMobLineItem *) lineItem;
-(WeMobBaseAdAdapter *) getCachedAdapter:(WeMobLineItem *)lineItem;

-(void) removeOldAdapter:(WeMobLineItem *)lineItem;
-(NSMutableArray *)getRemovedLineItemIdArray;
-(int)getLoadingCount;
-(void)requestTimeOut:(WeMobLineItem *)lineItem;
- (void)updateAdUnitImpl:(WeMobAdUnit*) adUnit;

-(BOOL) isAllFailed;

-(void) notifyLoaded:(NSString *)lineItemId;
-(void) notifyFailed:(WeMobAdError *)adError;

-(void)onAdLoaded:(NSString *)lineItemId;
-(void) onAdFailedToLoad:(NSString *)lineItemId adError:(WeMobAdError *)adError;

-(void)notifyDelegateAdLoaded:(NSString *)lineItemId;
-(void)notifyDelegateAdFailedToLoad:(NSString *)lineItemId withAdError:(WeMobAdError *)adError;

@end
