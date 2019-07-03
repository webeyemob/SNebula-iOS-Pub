//
//  WeMobRewardedVideoAdCore.h
//  WeMobSdk
//

#import <Foundation/Foundation.h>
#import "WeMobTypes.h"
#import "WeMobInnerRewardedVideoAdDelegate.h"
#import "WeMobAdUnit.h"
#import "WeMobMediator.h"
#import "WeMobMediatorDelegate.h"
#import "WeMobBaseAdCore.h"
#import <UIKit/UIKit.h>

@interface WeMobRewardedVideoAdCore<WeMobRewardedVideoAdapter> : WeMobBaseAdCore

@property(nonatomic, weak, nullable) id<WeMobInnerRewardedVideoAdDelegate> delegate;

/// iOS Start
- (void)showFromViewController:(UIViewController *)viewController;
- (void)show:(int [])networkIds;
/// iOS End

/// Unity Start
- (void)showUnity;
- (void)showUnity:(int [])networkIds;
/// Unity End

@end
