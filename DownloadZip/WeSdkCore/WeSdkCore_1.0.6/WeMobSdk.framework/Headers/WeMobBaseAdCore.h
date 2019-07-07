//
//  WeMobBaseAdCore.h
//  WeMobSdk
//
//  Created by wanghang on 2019/6/23.
//

#import <Foundation/Foundation.h>
#import "WeMobAdUnit.h"
#import "WeMobMediator.h"
#import "WeMobAdError.h"
#import "WeMobBaseAdAdapter.h"

@interface WeMobBaseAdCore<T : WeMobBaseAdAdapter*> : NSObject<WeMobMediatorDelegate> {
    @protected NSString *TAG;
    
    @protected NSString *adUnitId;
    @protected WeMobAdUnit *adUnit;
    @protected WeMobMediator *mediator;
}

- (id)initWithAdUnitId:(NSString *)adUnitId;

- (void)log:(NSString *)message;

- (void)setCL:(int)cacheCount;
- (void)loadAd;
- (void)setMediatorDelegate:(WeMobMediator *)mediator;
- (void)delegateAdError:(WeMobAdError *)adError;

- (BOOL)isReady;
- (void)destroy;

- (T)getReadyAdapter;
- (T)getReadyAdapterInNetworkIds:(int [])networkIds;

@end
