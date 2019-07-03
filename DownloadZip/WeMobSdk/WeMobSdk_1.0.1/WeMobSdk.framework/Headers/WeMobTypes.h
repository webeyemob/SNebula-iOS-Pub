//
//  WeMobTypes.h
//  WeMobSdk
//
// 定义了与 Unity 交互的一些类型和广告回调接口。


/// Common
typedef const void *WeMobTypeRef;


/// BannerAd
// 对 Unity 中 BannerAd 和 BannerAdClient 的引用。
typedef const void *WeMobTypeBannerClientRef;
typedef const void *WeMobTypeBannerAdRef;
// iOS WeMobBannerAd 加载后回调 Unity 的接口。
typedef void (*WeMobBannerAdDidReceiveAdCallback)(WeMobTypeBannerClientRef *bannerClient);
typedef void (*WeMobBannerAdDidFailToReceiveAdWithErrorCallback)(WeMobTypeBannerClientRef *bannerClient, int error, char *message);
typedef void (*WeMobBannerAdWillPresentScreenCallback)(WeMobTypeBannerClientRef *bannerClient);
typedef void (*WeMobBannerAdDidDismissScreenCallback)(WeMobTypeBannerClientRef *bannerClient);
typedef void (*WeMobBannerAdWillLeaveApplicationCallback)(WeMobTypeBannerClientRef *bannerClient);


/// InterstitialAd
// 对 Unity 中 InterstitialAd 和 InterstitialClient 的引用。
typedef const void *WeMobTypeInterstitialClientRef;
typedef const void *WeMobTypeInterstitialAdRef;
// iOS WeMobInterstitialAd 加载后回调 Unity 的接口。
typedef void (*WeMobInterstitialDidReceiveAdCallback)(WeMobTypeInterstitialClientRef *interstitialClient);
typedef void (*WeMobInterstitialDidFailToReceiveAdWithErrorCallback)(WeMobTypeInterstitialClientRef *interstitialClient, int error, char *message);
typedef void (*WeMobInterstitialWillPresentScreenCallback)(WeMobTypeInterstitialClientRef *interstitialClient);
typedef void (*WeMobInterstitialDidDismissScreenCallback)(WeMobTypeInterstitialClientRef *interstitialClient);
typedef void (*WeMobInterstitialWillLeaveApplicationCallback)(WeMobTypeInterstitialClientRef *interstitialClient);


/// RewardedVideoAd
// 对 Unity 中 RewardedVideoAd 和 RewardedVideoClient 的引用。
typedef const void *WeMobTypeRewardedVideoClientRef;
typedef const void *WeMobTypeRewardedVideoAdRef;
// iOS WeMobRewardedVideoAd 加载后回调 Unity 的接口。
typedef void (*WeMobRewardVideoDidReceiveAdCallback)(WeMobTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*WeMobRewardVideoDidOpenCallback)(WeMobTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*WeMobRewardVideoWillLeaveApplicationCallback)(WeMobTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*WeMobRewardVideoDidCloseCallback)(WeMobTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*WeMobRewardVideoDidFailToReceiveAdWithErrorCallback)(WeMobTypeRewardedVideoClientRef *rewardedVideoClient, int error, char *message);
typedef void (*WeMobRewardVideoDidStartCallback)(WeMobTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*WeMobRewardVideoDidCompleteCallback)(WeMobTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*WeMobRewardVideoDidRewardCallback)(WeMobTypeRewardedVideoClientRef *rewardedVideoClient, char *rewardType, int rewardAmount);
typedef void (*WeMobRewardVideoDidFailedToRewardCallback)(WeMobTypeRewardedVideoClientRef *rewardedVideoClient);

