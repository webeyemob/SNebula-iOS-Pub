//
//  Mediator.h

//

#import "WeMobAdUnit.h"
#import "WeMobBaseAdAdapter.h"
#import "WeMobMediatorDelegate.h"
#import "WeMobInnerBannerAdDelegate.h"
#import "WeMobInnerInterstitialAdDelegate.h"
#import "WeMobInnerRewardedVideoAdDelegate.h"
#import "WeMobInnerNativeAdDelegate.h"

@interface WeMobMediator<T : WeMobBaseAdAdapter*> : NSObject

@property(nonatomic, weak, nullable) id<WeMobMediatorDelegate> mediatorDelegate;

@property(nonatomic, weak, nullable) id<WeMobInnerBannerAdDelegate> bannerAdDelegate;
@property(nonatomic, weak, nullable) id<WeMobInnerInterstitialAdDelegate> interstitialAdDelegate;
@property(nonatomic, weak, nullable) id<WeMobInnerRewardedVideoAdDelegate> rewardedVideoAdDelegate;
@property(nonatomic, weak, nullable) id<WeMobInnerNativeAdDelegate> nativeAdDelegate;

-(void)updateAdunit:(WeMobAdUnit *)adUnit;
-(void)loadAd;
-(BOOL)isReady;
-(T)getReadyAdapter;
-(NSMutableArray *)getReadyAdapterArray;
-(NSMutableArray *)getAdapterArray;
-(T)getReadyAdapterInNetworkIds:(int[])networkIds;
-(BOOL)isLoading;
-(void)destroy;

@end
