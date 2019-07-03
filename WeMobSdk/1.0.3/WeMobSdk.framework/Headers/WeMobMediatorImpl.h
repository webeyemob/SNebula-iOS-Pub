//
//  WeMobDefaultMediator.h
//  WeMobSdk
//

#import "WeMobMediator.h"
#import "WeMobAdUnit.h"
#import "WeMobLineItem.h"
#import "WeMobMediatorDelegate.h"
#import "WeMobInnerBannerAdDelegate.h"
#import "WeMobInnerInterstitialAdDelegate.h"
#import "WeMobInnerRewardedVideoAdDelegate.h"
#import "WeMobInnerNativeAdDelegate.h"

@interface WeMobMediatorImpl<T : WeMobBaseAdAdapter*> : WeMobMediator<WeMobInnerBannerAdDelegate, WeMobInnerInterstitialAdDelegate, WeMobInnerRewardedVideoAdDelegate, WeMobInnerNativeAdDelegate> {
    @private NSTimer *timer;
    @private WeMobAdUnit *adUnit;
    @private int cacheCount;
    @private int parallelCount;
    @private NSMutableArray<WeMobLineItem *> *lineItemArray;
    @private NSMutableDictionary<NSString *, T> *adapterDictionary;
}

-(id)initWithAdUnit:(WeMobAdUnit *)adUnit;

@end
