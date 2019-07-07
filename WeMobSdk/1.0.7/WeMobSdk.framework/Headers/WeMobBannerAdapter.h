//
//  WeMobBannerAdapter.h
//  WeMobSdk
//

#import <UIKit/UIKit.h>
#import "WeMobLineItem.h"
#import "WeMobILineItem.h"
#import "WeMobBaseAdAdapter.h"
#import "WeMobAdapterStatus.h"
#import "WeMobInnerBannerAdDelegate.h"
#import "WeMobBannerViewDelegate.h"
#import "WeMobAdError.h"
#import "WeMobBannerAdPosition.h"
#import "WeMobBannerAdapterDelegate.h"

@interface WeMobBannerAdapter : WeMobBaseAdAdapter<WeMobBannerAdapterDelegate> {
    @private WeMobLineItem *lineItem;
    @private UIViewController *viewController;
    @private WeMobAdapterStatus *status;
    
    @private WeMobBannerAdPosition adPositionUnity;
    @private int xPosUnity, yPosUnity;
    
    @private BOOL isUnityShown;
    @private BOOL hasAddAdView;
    
    // 每次 Loaded 后，展示、点击、关闭仅上报一次
    @private BOOL hasTrackShown;
    @private BOOL hasTrackClick;
    @private BOOL hasTrackClose;
}

@property(nonatomic, weak, nullable) id<WeMobInnerBannerAdDelegate> delegate;

-(id)initWithLineItem:(WeMobILineItem *)lineItem rootViewController:(UIViewController *)viewController;
-(id<WeMobBannerAdapterDelegate>)getDelegate;

-(void)loadAd;
-(BOOL)isReady;

-(int)getNetworkId;

-(void)destroy;

/// iOS Start
-(UIView *)getAdView;
/// iOS End

/// Unity Start
-(void)setUnityPosition:(WeMobBannerAdPosition)position;
-(void)setUnityPosWithX:(int)x andY:(int)y;

-(void)showUnity;
-(BOOL)isUnityShown;
-(void)hideUnity;
-(void)removeUnity;
/// Unity End

@end
