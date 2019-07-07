//
//  WeMobDefaultMediator.h
//  WeMobSdk
//
//  Created by wanghang on 2019/6/16.
//

#import "WeMobMediator.h"
#import "WeMobAdUnit.h"
#import "WeMobLineItem.h"
#import "WeMobMediatorDelegate.h"
#import "WeMobInnerBannerAdDelegate.h"
#import "WeMobInnerInterstitialAdDelegate.h"
#import "WeMobInnerRewardedVideoAdDelegate.h"
#import "WeMobInnerNativeAdDelegate.h"

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

-(id)initWithAdUnit:(WeMobAdUnit *)adUnit;
-(void) log:(NSString *)message;

@end
