//
//  InterstitialAdAdapter.h
//  WeMobSdk
//

#import <UIKit/UIKit.h>
#import "WeMobLineItem.h"
#import "WeMobILineItem.h"
#import "WeMobBaseAdAdapter.h"
#import "WeMobAdapterStatus.h"
#import "WeMobInnerInterstitialAdDelegate.h"
#import "WeMobAdError.h"
#import "WeMobInterstitialAdDelegate.h"
#import "WeMobInterstitialAdapterDelegate.h"

@interface WeMobInterstitialAdapter : WeMobBaseAdAdapter<WeMobInterstitialAdapterDelegate> {
    @private WeMobLineItem *lineItem;
    @private WeMobAdapterStatus *status;
    @private BOOL isShown;
    
    // 每次 Loaded 后，展示、点击、关闭仅上报一次
    @private BOOL hasTrackShown;
    @private BOOL hasTrackClick;
    @private BOOL hasTrackClose;
}

@property(nonatomic, weak, nullable) id<WeMobInnerInterstitialAdDelegate> delegate;
-(id<WeMobInterstitialAdapterDelegate>)getDelegate;

-(id)initWithLineItem:(WeMobILineItem *)lineItem;

-(void)loadAd;
-(BOOL)isReady;

-(void)innerShow:(UIViewController *)viewController;
-(void)show:(UIViewController *)viewController;

-(int)getNetworkId;

-(void)destroy;

@end
