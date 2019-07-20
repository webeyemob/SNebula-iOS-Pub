//
//  WeMobRewardedVideoAdapter.h
//  WeMobSdk
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "WeMobLineItem.h"
#import "WeMobILineItem.h"
#import "WeMobBaseAdAdapter.h"
#import "WeMobAdapterStatus.h"
#import "WeMobInnerRewardedVideoAdDelegate.h"
#import "WeMobAdError.h"
#import "WeMobRewardItem.h"
#import "WeMobRewardedVideoAdapterDelegate.h"

@interface WeMobRewardedVideoAdapter : WeMobBaseAdAdapter<WeMobRewardedVideoAdapterDelegate>

@property(nonatomic, weak, nullable) id<WeMobInnerRewardedVideoAdDelegate> delegate;
-(id<WeMobRewardedVideoAdapterDelegate>)getDelegate;

-(id)initWithLineItem:(WeMobILineItem *)lineItem;

-(void)loadAd;
-(BOOL)isReady;

-(void)innerShow:(UIViewController *)viewController;
-(void)show:(UIViewController *)viewController;

-(int)getNetworkId;

-(void)destroy;

@end
