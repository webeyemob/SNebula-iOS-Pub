//
//  WeMobBannerAdCore.h
//  WeMobSdk
//

#import "WeMobTypes.h"
#import "WeMobInnerBannerAdDelegate.h"
#import "WeMobAdUnit.h"
#import "WeMobMediatorDelegate.h"
#import "WeMobBannerAdPosition.h"
#import <UIKit/UIKit.h>
#import "WeMobBaseAdCore.h"

@interface WeMobBannerAdCore<WeMobBannerAdapter> : WeMobBaseAdCore<WeMobInnerBannerAdDelegate> {
    @private UIView *view;
    @private UIViewController *viewController;
    
    // 是否加载 Unity 广告，Unity 广告加载后需要自动展示
    @private BOOL mLoadAdUnity;
    // 加载后是否需要展示 Unity 广告，仅首次加载时展示
    @private BOOL mNeedShowUnityAfterLoaded;
    // Unity 广告的位置
    @private WeMobBannerAdPosition mPositionCodeUnity;
    @private int mPosXUnity;
    @private int mPosYUnity;
    // Unity 广告的 networkId
    @private int* mNetworkIdsUnity;
}

- (id)initWithAdUnitId:(NSString *)adUnitId view:(UIView *)view rootViewController:(UIViewController *)viewController;

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
