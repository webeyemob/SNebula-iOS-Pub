//
//  TXADTypes.h

//
// 定义了与 Unity 交互的一些类型和广告回调接口。


#pragma mark - Common
typedef const void *TXADTypeRef;


#pragma mark - LineItem
typedef const void *TXADTypeLineItemRef;
typedef const void *TXADTypeSecondaryLineItemRef;
#pragma mark - AdUnit
typedef const void *TXADTypeAdUnitRef;
typedef const void *TXADTypeLineItemArrayRef;


#pragma mark - LoadMode
typedef const void *TXADTypeLoadModeRef;


#pragma mark - AutoLoadConfig
typedef const void *TXADTypeAutoLoadConfigRef;


#pragma mark - NativeAdLayout
typedef const void *TXADTypeNativeAdLayoutRef;


#pragma mark - NetworkConfigs
typedef const void *TXADTypeNetworkConfigsRef;
typedef const void *TXADTypeNetworkConfigRef;


#pragma mark - Segment
typedef const void *TXADTypeSegmentRef;


#pragma mark - BannerAd
// 对 Unity 中 BannerAd 和 BannerAdClient 的引用。
typedef const void *TXADTypeBannerClientRef;
typedef const void *TXADTypeBannerAdRef;
// iOS TXADBannerAd 加载后回调 Unity 的接口。
typedef void (*TXADBannerAdDidReceiveAdCallback)(TXADTypeBannerClientRef *bannerClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADBannerAdDidFailToReceiveAdWithErrorCallback)(TXADTypeBannerClientRef *bannerClient, int error, char *message);
typedef void (*TXADBannerAdWillPresentScreenCallback)(TXADTypeBannerClientRef *bannerClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADBannerAdDidDismissScreenCallback)(TXADTypeBannerClientRef *bannerClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADBannerAdWillLeaveApplicationCallback)(TXADTypeBannerClientRef *bannerClient, TXADTypeLineItemRef *lineItemRef);


#pragma mark - InterstitialAd
// 对 Unity 中 InterstitialAd 和 InterstitialClient 的引用。
typedef const void *TXADTypeInterstitialClientRef;
typedef const void *TXADTypeInterstitialAdRef;
// iOS TXADInterstitialAd 加载后回调 Unity 的接口。
typedef void (*TXADInterstitialDidReceiveAdCallback)(TXADTypeInterstitialClientRef *interstitialClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADInterstitialDidFailToReceiveAdWithErrorCallback)(TXADTypeInterstitialClientRef *interstitialClient, int error, char *message);
typedef void (*TXADInterstitialWillPresentScreenCallback)(TXADTypeInterstitialClientRef *interstitialClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADInterstitialWillLeaveApplicationCallback)(TXADTypeInterstitialClientRef *interstitialClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADInterstitialVideoStartCallback)(TXADTypeInterstitialClientRef *interstitialClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADInterstitialVideoCompleteCallback)(TXADTypeInterstitialClientRef *interstitialClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADInterstitialDidDismissScreenCallback)(TXADTypeInterstitialClientRef *interstitialClient, TXADTypeLineItemRef *lineItemRef);


#pragma mark - RewardedVideoAd
// 对 Unity 中 RewardedVideoAd 和 RewardedVideoClient 的引用。
typedef const void *TXADTypeRewardedVideoClientRef;
typedef const void *TXADTypeRewardedVideoAdRef;
// iOS TXADRewardedVideoAd 加载后回调 Unity 的接口。
typedef void (*TXADRewardVideoDidReceiveAdCallback)(TXADTypeRewardedVideoClientRef *rewardedVideoClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADRewardVideoDidOpenCallback)(TXADTypeRewardedVideoClientRef *rewardedVideoClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADRewardVideoWillLeaveApplicationCallback)(TXADTypeRewardedVideoClientRef *rewardedVideoClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADRewardVideoDidCloseCallback)(TXADTypeRewardedVideoClientRef *rewardedVideoClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADRewardVideoDidFailToReceiveAdWithErrorCallback)(TXADTypeRewardedVideoClientRef *rewardedVideoClient, int error, char *message);
typedef void (*TXADRewardVideoDidStartCallback)(TXADTypeRewardedVideoClientRef *rewardedVideoClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADRewardVideoDidCompleteCallback)(TXADTypeRewardedVideoClientRef *rewardedVideoClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADRewardVideoDidRewardCallback)(TXADTypeRewardedVideoClientRef *rewardedVideoClient, TXADTypeLineItemRef *lineItemRef, char *rewardType, int rewardAmount);
typedef void (*TXADRewardVideoDidFailedToRewardCallback)(TXADTypeRewardedVideoClientRef *rewardedVideoClient, TXADTypeLineItemRef *lineItemRef);
// RewardItem
typedef const void *TXADTypeRewardItemRef;


#pragma mark - MixViewAd
// 对 Unity 中 MixViewAd 和 MixViewClient 的引用。
typedef const void *TXADTypeMixViewClientRef;
typedef const void *TXADTypeMixViewAdRef;
// iOS TXADMixViewAd 加载后回调 Unity 的接口。
typedef void (*TXADMixViewAdDidReceiveAdCallback)(TXADTypeMixViewClientRef *mixViewClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADMixViewAdDidFailToReceiveAdWithErrorCallback)(TXADTypeMixViewClientRef *mixViewClient, int error, char *message);
typedef void (*TXADMixViewAdWillPresentScreenCallback)(TXADTypeMixViewClientRef *mixViewClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADMixViewAdDidDismissScreenCallback)(TXADTypeMixViewClientRef *mixViewClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADMixViewAdWillLeaveApplicationCallback)(TXADTypeMixViewClientRef *mixViewClient, TXADTypeLineItemRef *lineItemRef);


#pragma mark - MixFullScreenAd
// 对 Unity 中 MixFullScreenAd 和 MixFullScreenClient 的引用。
typedef const void *TXADTypeMixFullScreenClientRef;
typedef const void *TXADTypeMixFullScreenAdRef;
// iOS TXADMixFullScreenAd 加载后回调 Unity 的接口。
typedef void (*TXADMixFullScreenAdDidReceiveAdCallback)(TXADTypeMixFullScreenClientRef *mixFullScreenClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADMixFullScreenAdDidFailToReceiveAdWithErrorCallback)(TXADTypeMixFullScreenClientRef *mixFullScreenClient, int error, char *message);
typedef void (*TXADMixFullScreenAdWillPresentScreenCallback)(TXADTypeMixFullScreenClientRef *mixFullScreenClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADMixFullScreenAdDidDismissScreenCallback)(TXADTypeMixFullScreenClientRef *mixFullScreenClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADMixFullScreenAdWillLeaveApplicationCallback)(TXADTypeMixFullScreenClientRef *mixFullScreenClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADMixFullScreenAdVideoDidStartCallback)(TXADTypeMixFullScreenClientRef *mixFullScreenClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADMixFullScreenAdVideoDidCompleteCallback)(TXADTypeMixFullScreenClientRef *mixFullScreenClient, TXADTypeLineItemRef *lineItemRef);
typedef void (*TXADMixFullScreenAdDidRewardCallback)(TXADTypeMixFullScreenClientRef *mixFullScreenClient, TXADTypeLineItemRef *lineItemRef, char *rewardType, int rewardAmount);
typedef void (*TXADMixFullScreenAdDidFailedToRewardCallback)(TXADTypeMixFullScreenClientRef *mixFullScreenClient, TXADTypeLineItemRef *lineItemRef);


#pragma mark - LineItemFilter
typedef bool (*TXADLineItemFilterCallback)(TXADTypeLineItemRef *lineItemRef);
typedef bool (*TXADAdLineItemFilterCallback)(TXADTypeRef *adClient, TXADTypeLineItemRef *lineItemRef);


#pragma mark - TrackerInfo
typedef const void *TXADTypeTrackerInfoRef;
#pragma mark - AdUnitInfo
typedef const void *TXADTypeAdUnitInfoRef;
#pragma mark - AdContentInfo
typedef const void *TXADTypeAdContentInfoRef;


#pragma mark - TXADTracker
typedef const void *TXADTypeTrackerClientRef;
typedef const void *TXADTypeTrackerRef;
// LineItem Track
typedef void (*TXADTrackAdRequestCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeTrackerInfoRef *trackerInfoRef);
typedef void (*TXADTrackAdLoadedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeTrackerInfoRef *trackerInfoRef);
typedef void (*TXADTrackAdFailedToLoadCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeTrackerInfoRef *trackerInfoRef);
typedef void (*TXADTrackAdCallShowCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeTrackerInfoRef *trackerInfoRef);
typedef void (*TXADTrackAdShownCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeTrackerInfoRef *trackerInfoRef);
typedef void (*TXADTrackAdClickedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeTrackerInfoRef *trackerInfoRef);
typedef void (*TXADTrackAdSkippedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeTrackerInfoRef *trackerInfoRef);
typedef void (*TXADTrackAdClosedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeTrackerInfoRef *trackerInfoRef);
typedef void (*TXADTrackVideoStartedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeTrackerInfoRef *trackerInfoRef);
typedef void (*TXADTrackVideoCompletedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeTrackerInfoRef *trackerInfoRef);
typedef void (*TXADTrackRewardedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeTrackerInfoRef *trackerInfoRef);
typedef void (*TXADTrackRewardFailedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeTrackerInfoRef *trackerInfoRef);
// AdUnit Track
typedef void (*TXADTrackAdUnitRequestCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*TXADTrackAdUnitLoadedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*TXADTrackAdUnitFailedToLoadCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*TXADTrackAdUnitCallShowCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*TXADTrackAdUnitShownCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*TXADTrackAdUnitClickedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*TXADTrackAdUnitSkippedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*TXADTrackAdUnitClosedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*TXADTrackAdUnitVideoStartedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*TXADTrackAdUnitVideoCompletedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*TXADTrackAdUnitRewardedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*TXADTrackAdUnitRewardFailedCallback)(TXADTypeTrackerClientRef *trackerClientRef, TXADTypeAdUnitInfoRef *adUnitInfoRef);


#pragma mark - TXADATTrackingManager
typedef void (*TXADATTrackingAuthorizationCallback)(int status);
