//
//  WECreativeInterstitialViewController.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the webeye SDK License Agreement
//

#import <UIKit/UIKit.h>
#import "WeCreativeGlobal.h"


@protocol WECreativeInterstitialViewControllerDelegate;

typedef NS_ENUM(NSUInteger, WECreativeInterstitialCloseButtonStyle) {
    WECreativeInterstitialCloseButtonStyleAlwaysVisible,
    WECreativeInterstitialCloseButtonStyleAlwaysHidden,
    WECreativeInterstitialCloseButtonStyleAdControlled,
};


////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WECreativeInterstitialViewController : UIViewController

@property (nonatomic, assign) WECreativeInterstitialCloseButtonStyle closeButtonStyle;
@property (nonatomic, assign) WECreativeInterstitialOrientationType orientationType;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) id<WECreativeInterstitialViewControllerDelegate> delegate;

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

@protocol WECreativeInterstitialViewControllerDelegate <NSObject>

@required

- (void)adsImpressionTrack;
- (void)adsClickedTrack;

@optional
//- (NSString *)adUnitId;
//- (void)interstitialDidLoadAd:(WECreativeInterstitialViewController *)interstitial;
//- (void)interstitialDidFailToLoadAd:(WECreativeInterstitialViewController *)interstitial;
- (void)interstitialWillAppear:(WECreativeInterstitialViewController *)interstitial;
- (void)interstitialDidAppear:(WECreativeInterstitialViewController *)interstitial;
- (void)interstitialWillDisappear:(WECreativeInterstitialViewController *)interstitial;
- (void)interstitialDidDisappear:(WECreativeInterstitialViewController *)interstitial;
//- (void)interstitialDidReceiveTapEvent:(WECreativeInterstitialViewController *)interstitial;
- (void)interstitialWillLeaveApplication:(WECreativeInterstitialViewController *)interstitial;

@end
