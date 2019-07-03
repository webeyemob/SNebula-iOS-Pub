//
//  WeMobCustomRewardedVideo.h
//  WeMobSdk
//
//  Created by 王航 on 2019/6/19.
//

#import "WeMobRewardedVideoAdapter.h"
#import <UIKit/UIKit.h>

@interface WeMobCustomRewardedVideo : WeMobRewardedVideoAdapter

-(id)initWithLineItem:(WeMobILineItem *)lineItem;

-(id<WeMobRewardedVideoAdapterDelegate>)getDelegate;

-(void)loadAd;

-(BOOL)isReady;

-(void)show:(UIViewController *)viewController;

-(void)destroy;

@end
