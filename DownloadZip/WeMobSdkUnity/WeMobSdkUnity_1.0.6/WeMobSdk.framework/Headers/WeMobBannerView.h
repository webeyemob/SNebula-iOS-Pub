//
//  WeMobBannerAd.h
//  WeMobSdk
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WeMobTypes.h"
#import "WeMobBannerAdCore.h"
#import "WeMobBannerViewDelegate.h"
#import "WeMobInnerBannerAdDelegate.h"
#import "WeMobBannerAdPosition.h"
#import "WeMobILineItem.h"

@interface WeMobBannerView : UIView<WeMobInnerBannerAdDelegate>

@property(nonatomic, strong) WeMobBannerAdCore *adCore;

/// iOS Start
- (id)initWithAdUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
@property(nonatomic, weak, nullable) id<WeMobBannerViewDelegate> delegate;
/// iOS End

/// Unity Start
- (id)initWithBannerClientReference:(WeMobTypeBannerClientRef *)bannerClient adUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
// 引用 Unity 的 BannerClient。
@property(nonatomic, assign) WeMobTypeBannerClientRef *bannerClient;
// 广告加载后，回调到 Unity 的接口。
@property(nonatomic, assign) WeMobBannerAdDidReceiveAdCallback adReceivedCallback;
@property(nonatomic, assign) WeMobBannerAdDidFailToReceiveAdWithErrorCallback adFailedCallback;
@property(nonatomic, assign) WeMobBannerAdWillPresentScreenCallback willPresentCallback;
@property(nonatomic, assign) WeMobBannerAdDidDismissScreenCallback didDismissCallback;
@property(nonatomic, assign) WeMobBannerAdWillLeaveApplicationCallback willLeaveCallback;
/// Unity End

/// Common Start
- (BOOL)isReady;
- (void)destroy;
- (WeMobILineItem *)getReadyLineItem;
/// Common End

/// iOS Start
- (void)loadAd;
/// iOS End

/// Unity Start
- (void)loadAdUnity;

- (void)showUnity:(WeMobBannerAdPosition)position;
- (void)showUnityWithX:(int)x andY:(int)y;

- (void)showUnity:(WeMobBannerAdPosition)position inNetworks:(int [])networkIds;
- (void)showUnityWithX:(int)x andY:(int)y inNetworks:(int [])networkIds;

- (void)setUnityPosition:(WeMobBannerAdPosition)position;
- (void)setUnityPositionWithX:(int)x andY:(int)y;

- (void)hideUnity;

- (void)removeUnity;
/// Unity End

@end
