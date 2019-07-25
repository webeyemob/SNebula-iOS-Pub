//
//  WeMobCreativeInterstitialViewController.h
//

//  Licensed under the WeMob License Agreement
//

#import <UIKit/UIKit.h>
#import "WeMobCreativeGlobal.h"


@protocol WeMobCreativeInterstitialViewControllerDelegate;

typedef NS_ENUM(NSUInteger, WeMobCreativeInterstitialCloseButtonStyle) {
    WeMobCreativeInterstitialCloseButtonStyleAlwaysVisible,
    WeMobCreativeInterstitialCloseButtonStyleAlwaysHidden,
    WeMobCreativeInterstitialCloseButtonStyleAdControlled,
};


////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WeMobCreativeInterstitialViewController : UIViewController

@property (nonatomic, assign) WeMobCreativeInterstitialCloseButtonStyle closeButtonStyle;
@property (nonatomic, assign) WeMobCreativeInterstitialOrientationType orientationType;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) id<WeMobCreativeInterstitialViewControllerDelegate> delegate;

- (void)presentInterstitialFromViewController:(UIViewController *)controller complete:(void(^)(NSError *))complete;
- (void)dismissInterstitialAnimated:(BOOL)animated;
- (BOOL)shouldDisplayCloseButton;
- (void)willPresentInterstitial;
- (void)didPresentInterstitial;
- (void)willDismissInterstitial;
- (void)didDismissInterstitial;
- (void)layoutCloseButton;
- (void)doClickTrack;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol WeMobCreativeInterstitialViewControllerDelegate <NSObject>

@required

- (void)adsImpressionTrack;
- (void)adsClickedTrack;

@optional
//- (NSString *)adUnitId;
//- (void)interstitialDidLoadAd:(WeMobCreativeInterstitialViewController *)interstitial;
//- (void)interstitialDidFailToLoadAd:(WeMobCreativeInterstitialViewController *)interstitial;
- (void)interstitialWillAppear:(WeMobCreativeInterstitialViewController *)interstitial;
- (void)interstitialDidAppear:(WeMobCreativeInterstitialViewController *)interstitial;
- (void)interstitialWillDisappear:(WeMobCreativeInterstitialViewController *)interstitial;
- (void)interstitialDidDisappear:(WeMobCreativeInterstitialViewController *)interstitial;
//- (void)interstitialDidReceiveTapEvent:(WeMobCreativeInterstitialViewController *)interstitial;
- (void)interstitialWillLeaveApplication:(WeMobCreativeInterstitialViewController *)interstitial;

@end
