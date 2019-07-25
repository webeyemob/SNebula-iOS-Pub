//
//  WeMobBannerAdCore.h

//

#import "WeMobTypes.h"
#import "WeMobInnerBannerAdDelegate.h"
#import "WeMobAdUnit.h"
#import "WeMobMediatorDelegate.h"
#import "WeMobBannerAdPosition.h"
#import <UIKit/UIKit.h>
#import "WeMobBaseAdCore.h"

@interface WeMobBannerAdCore<WeMobBannerAdapter> : WeMobBaseAdCore<WeMobInnerBannerAdDelegate>

- (id)initWithAdUnitId:(NSString *)adUnitId container:(UIView *)container rootViewController:(UIViewController *)viewController;

- (id)initWithAdUnitId:(NSString *)adUnitId unityRootViewController:(UIViewController *)viewController;

@property(nonatomic, weak, nullable) id<WeMobInnerBannerAdDelegate> delegate;

/// Unity Start
- (void)loadAdUnity;

- (void)showUnity:(WeMobBannerAdPosition)position; // WeMobAdPosition
- (void)showUnityWithX:(int)x andY:(int)y;

- (void)showUnity:(WeMobBannerAdPosition)position inNetworks:(int [])networkIds;
- (void)showUnityWithX:(int)x andY:(int)y inNetworks:(int [])networkIds;

- (void)setUnityPosition:(WeMobBannerAdPosition)position;
- (void)setUnityPositionWithX:(int)x andY:(int)y;

- (void)hideUnity;
- (void)removeUnity;
/// Unity End

@end
