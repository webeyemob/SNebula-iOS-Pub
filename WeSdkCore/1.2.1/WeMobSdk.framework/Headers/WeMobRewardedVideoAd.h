//
//  WeMobRewardedVideoAd.h

//

#import <Foundation/Foundation.h>
#import "WeMobTypes.h"
#import "WeMobInnerRewardedVideoAdDelegate.h"
#import "WeMobRewardedVideoAdCore.h"
#import "WeMobRewardedVideoAdDelegate.h"

@interface WeMobRewardedVideoAd : NSObject<WeMobInnerRewardedVideoAdDelegate>

@property(nonatomic, readonly, nonnull) NSString *adUnitId;

/// iOS Start
- (id)initWithAdUnitId:(NSString *)adUnitId;
@property(nonatomic, weak, nullable) id<WeMobRewardedVideoAdDelegate> delegate;
/// iOS End

/// Unity Start
- (id)initWithRewardedVideoClientReference:(WeMobTypeRewardedVideoClientRef *)rewardedVideoClient adUnitId:(NSString *)adUnitId;
@property(nonatomic, assign) WeMobTypeRewardedVideoClientRef *rewardedVideoClient;
/// The ad callback into Unity.
@property(nonatomic, assign) WeMobRewardVideoDidReceiveAdCallback didReceivedCallback;
@property(nonatomic, assign) WeMobRewardVideoDidOpenCallback didOpenCallback;
@property(nonatomic, assign) WeMobRewardVideoWillLeaveApplicationCallback willLeaveCallback;
@property(nonatomic, assign) WeMobRewardVideoDidCloseCallback didCloseCallback;
@property(nonatomic, assign) WeMobRewardVideoDidFailToReceiveAdWithErrorCallback didFailToReceiveAdCallback;
@property(nonatomic, assign) WeMobRewardVideoDidStartCallback didStartCallback;
@property(nonatomic, assign) WeMobRewardVideoDidCompleteCallback didCompleteCallback;
@property(nonatomic, assign) WeMobRewardVideoDidRewardCallback didRewardCallback;
@property(nonatomic, assign) WeMobRewardVideoDidFailedToRewardCallback didFailedToRewardCallback;
/// Unity End

- (void)setHE;
- (void)setCL:(int)cacheCount;
- (void)loadAd;
- (BOOL)isReady;
- (void)destroy;

/// iOS Start
- (void)showFromViewController:(UIViewController *)viewController;
/// iOS End

/// Unity Start
- (void)showUnity;
- (void)showUnity:(int [])networkIds;
/// Unity End

@end
