//
//  WeMobCustomInterstitial.h
//  WeMobSdk
//
//  Created by 王航 on 2019/6/19.
//

#import "WeMobInterstitialAdapter.h"
#import <UIKit/UIKit.h>

@interface WeMobCustomInterstitial : WeMobInterstitialAdapter

-(id)initWithLineItem:(WeMobILineItem *)lineItem;

-(id<WeMobInterstitialAdapterDelegate>)getDelegate;

-(void)loadAd;

-(BOOL)isReady;

-(void)show:(UIViewController *)viewController;

-(void)destroy;

@end
