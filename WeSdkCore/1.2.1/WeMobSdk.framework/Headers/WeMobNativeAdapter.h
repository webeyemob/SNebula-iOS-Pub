//
//  WeMobNativeAdapter.h

//
//  Created by Mathew on 2019/6/20.
//

#import <UIKit/UIKit.h>
#import "WeMobLineItem.h"
#import "WeMobILineItem.h"
#import "WeMobBaseAdAdapter.h"
#import "WeMobAdapterStatus.h"
#import "WeMobInnerNativeAdDelegate.h"
#import "WeMobNativeAdDelegate.h"
#import "WeMobAdError.h"
#import "WeMobNativeAdapterDelegate.h"
#import "WeMobNativeAdLayout.h"

@interface WeMobNativeAdapter : WeMobBaseAdAdapter<WeMobNativeAdapterDelegate> {
    @private WeMobLineItem *lineItem;
    @private WeMobAdapterStatus *status;
    @private WeMobNativeAdLayout *nativeAdLayout;
    
    // 每次 Loaded 后，展示、点击、关闭仅上报一次
    @private BOOL hasTrackShown;
    @private BOOL hasTrackClick;
    @private BOOL hasTrackClose;
}

@property(nonatomic, weak, nullable) id<WeMobInnerNativeAdDelegate> delegate;

-(id)initWithLineItem:(WeMobILineItem *)lineItem;
-(id<WeMobNativeAdapterDelegate>)getDelegate;

-(void)loadAd;
-(BOOL)isReady;

-(int)getNetworkId;

-(void)destroy;

-(void)setNativeAdLayout:(WeMobNativeAdLayout *)layout;
-(UIView *)innerGetAdView;
-(UIView *)innerGetAdView:(WeMobNativeAdLayout *)layout;

-(UIView *)getAdView:(WeMobNativeAdLayout *)layout;

@end
