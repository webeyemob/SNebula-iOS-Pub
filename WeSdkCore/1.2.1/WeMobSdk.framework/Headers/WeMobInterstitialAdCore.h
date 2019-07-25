//
//  WeMobInterstitialAdCore.h

//

#import "WeMobTypes.h"
#import "WeMobInnerInterstitialAdDelegate.h"
#import "WeMobAdUnit.h"
#import "WeMobMediator.h"
#import "WeMobMediatorDelegate.h"
#import "WeMobBaseAdCore.h"
#import <UIKit/UIKit.h>

@interface WeMobInterstitialAdCore<WeMobInterstitialAdapter> : WeMobBaseAdCore

@property(nonatomic, weak, nullable) id<WeMobInnerInterstitialAdDelegate> delegate;

/// iOS Start
- (void)showFromViewController:(UIViewController *)viewController;
- (void)show:(int [])networkIds;
/// iOS End

/// Unity Start
- (void)showUnity;
- (void)showUnity:(int [])networkIds;
/// Unity End

@end
