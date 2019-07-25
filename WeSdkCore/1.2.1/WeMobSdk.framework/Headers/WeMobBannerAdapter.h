//
//  WeMobBannerAdapter.h

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

@interface WeMobBannerAdapter : WeMobBaseAdAdapter

@property(nonatomic, weak, nullable) id<WeMobInnerBannerAdDelegate> delegate;

-(id)initWithLineItem:(WeMobILineItem *)lineItem rootViewController:(UIViewController *)viewController;
-(id<WeMobBannerAdapterDelegate>)getDelegate;

-(void)loadAd;
-(BOOL)isReady;

-(int)getNetworkId;

-(void)destroy;

/// iOS Start
-(void)setContainer:(UIView *)container;
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
