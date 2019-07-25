//
//  WeMobDspInterstitialViewControllerDelegate.h
//  
//

#import <UIKit/UIKit.h>
#import "WeMobDspGlobal.h"


@protocol WeMobDspInterstitialViewControllerDelegate;


////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WeMobDspInterstitialViewController : UIViewController

@property (nonatomic, assign) WeMobDspInterstitialCloseButtonStyle closeButtonStyle;
@property (nonatomic, assign) WeMobDspInterstitialOrientationType orientationType;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) id<WeMobDspInterstitialViewControllerDelegate> delegate;

- (void)presentInterstitialFromViewController:(UIViewController *)controller complete:(void(^)(NSError *))complete;
- (void)dismissInterstitialAnimated:(BOOL)animated;
- (BOOL)shouldDisplayCloseButton;
- (void)willPresentInterstitial;
- (void)didPresentInterstitial;
- (void)willDismissInterstitial;
- (void)didDismissInterstitial;
- (void)layoutCloseButton;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol WeMobDspInterstitialViewControllerDelegate <NSObject>

//- (NSString *)adUnitId;
//- (void)interstitialDidLoadAd:(WeMobDspInterstitialViewController *)interstitial;
//- (void)interstitialDidFailToLoadAd:(WeMobDspInterstitialViewController *)interstitial;
- (void)interstitialWillAppear:(WeMobDspInterstitialViewController *)interstitial;
- (void)interstitialDidAppear:(WeMobDspInterstitialViewController *)interstitial;
- (void)interstitialWillDisappear:(WeMobDspInterstitialViewController *)interstitial;
- (void)interstitialDidDisappear:(WeMobDspInterstitialViewController *)interstitial;
//- (void)interstitialDidReceiveTapEvent:(WeMobDspInterstitialViewController *)interstitial;
- (void)interstitialWillLeaveApplication:(WeMobDspInterstitialViewController *)interstitial;

@end
