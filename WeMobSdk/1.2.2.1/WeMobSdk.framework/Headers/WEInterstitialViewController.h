//
//  WEInterstitialViewController.h
//

//  
//  
//

#import <UIKit/UIKit.h>
#import "WeGlobal.h"


@protocol WEInterstitialViewControllerDelegate;


////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WEInterstitialViewController : UIViewController

@property (nonatomic, assign) WEInterstitialCloseButtonStyle closeButtonStyle;
@property (nonatomic, assign) WEInterstitialOrientationType orientationType;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) id<WEInterstitialViewControllerDelegate> delegate;

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

@protocol WEInterstitialViewControllerDelegate <NSObject>

//- (NSString *)adUnitId;
//- (void)interstitialDidLoadAd:(WEInterstitialViewController *)interstitial;
//- (void)interstitialDidFailToLoadAd:(WEInterstitialViewController *)interstitial;
- (void)interstitialWillAppear:(WEInterstitialViewController *)interstitial;
- (void)interstitialDidAppear:(WEInterstitialViewController *)interstitial;
- (void)interstitialWillDisappear:(WEInterstitialViewController *)interstitial;
- (void)interstitialDidDisappear:(WEInterstitialViewController *)interstitial;
//- (void)interstitialDidReceiveTapEvent:(WEInterstitialViewController *)interstitial;
- (void)interstitialWillLeaveApplication:(WEInterstitialViewController *)interstitial;

@end
