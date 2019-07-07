//
//  WeMobCustomNative.h
//  WeMobSdk
//
//  Created by wanghang on 2019/6/20.
//

#import "WeMobNativeAdapter.h"
#import "WeMobTrackImpressionTimer.h"

@interface WeMobCustomNative : WeMobNativeAdapter<WeMobTrackImpressionTimerDelegate>

-(id)initWithLineItem:(WeMobILineItem *)lineItem;

-(id<WeMobNativeAdapterDelegate>)getDelegate;

-(void)loadAd;

-(BOOL)isReady;

-(UIView *)getAdView:(WeMobNativeAdLayout *)layout;

-(void)trackImpression:(UIView *)view;

-(void)destroy;

@end
