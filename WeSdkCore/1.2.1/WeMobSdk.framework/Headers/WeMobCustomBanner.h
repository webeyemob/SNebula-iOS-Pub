//
//  WeMobCustomBanner.h

//
//  Created by Mathew on 2019/6/18.
//

#import "WeMobBannerAdapter.h"
#import "WeMobTrackImpressionTimer.h"

@interface WeMobCustomBanner : WeMobBannerAdapter<WeMobTrackImpressionTimerDelegate>

-(id)initWithLineItem:(WeMobILineItem *)lineItem rootViewController:(UIViewController *)viewController;

-(id<WeMobBannerAdapterDelegate>)getDelegate;

-(void)loadAd;

-(BOOL)isReady;

-(UIView *)getAdView;

-(void)trackImpression:(UIView *)view;

-(void)destroy;

@end
