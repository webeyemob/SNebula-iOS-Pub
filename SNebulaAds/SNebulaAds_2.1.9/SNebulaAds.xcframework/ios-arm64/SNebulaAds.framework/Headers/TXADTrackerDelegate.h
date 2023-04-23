//
//  TXADTrackerDelegate.h
//  Created by TaurusXAds on 2019/7/14.
//

#import "TXADTrackerInfo.h"
#import "TXADAdUnitInfo.h"

/*!
Delegate that receives ad loading process of LineItem.
*/
@protocol TXADTrackerDelegate<NSObject>

/*!
@brief Notified when start loading ad LineItem.
@see TXADTrackerInfo
@param trackInfo Info of requested LineItem.
*/
@optional
- (void)txAdTrackAdRequest:(TXADTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad LineItem loaded success.
 @see TXADTrackerInfo
 @param trackInfo Info of loaded LineItem.
 */
@optional
- (void)txAdTrackAdLoaded:(TXADTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad LineItem failed to load.
 @see TXADTrackerInfo
 @param trackInfo Info of LineItem failed to load.
 */
@optional
- (void)txAdTrackAdFailedToLoad:(TXADTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad LineItem is displayed on the page. Displayed means ad was on UI.
 @see TXADTrackerInfo
 @param trackInfo Info of displayed LineItem.
 */
@optional
- (void)txAdTrackAdCallShow:(TXADTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad LineItem was shown. Shown means Network Sdk delegate ad shown.
 @see TXADTrackerInfo
 @param trackInfo Info of shown LineItem.
 */
@optional
- (void)txAdTrackAdShown:(TXADTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad LineItem was clicked.
 @see TXADTrackerInfo
 @param trackInfo Info of clicked LineItem.
 */
@optional
- (void)txAdTrackAdClicked:(TXADTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad LineItem was skipped.
 @see TXADTrackerInfo
 @param trackInfo Info of skipped LineItem.
 */
@optional
- (void)txAdTrackAdSkipped:(TXADTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad LineItem was closed.
 @see TXADTrackerInfo
 @param trackInfo Info of closed LineItem.
 */
@optional
- (void)txAdTrackAdClosed:(TXADTrackerInfo *)trackInfo;

/*!
 @brief Notified when RewardedVideo ad LineItem start playing.
 @warning Only delegate for RewardedVideo ad.
 @see TXADTrackerInfo
 @param trackInfo Info of LineItem start playing.
 */
@optional
- (void)txAdTrackAdVideoStarted:(TXADTrackerInfo *)trackInfo;

/*!
 @brief Notified when RewardedVideo ad LineItem finish playing.
 @warning Only delegate for RewardedVideo ad.
 @see TXADTrackerInfo
 @param trackInfo Info of LineItem completed playing.
 */
@optional
- (void)txAdTrackAdVideoCompleted:(TXADTrackerInfo *)trackInfo;

/*!
 @brief Notified when RewardedVideo ad LineItem rewarded success.
 @warning Only delegate for RewardedVideo ad.
 @see TXADTrackerInfo
 @param trackInfo Info of rewarded LineItem.
 */
@optional
- (void)txAdTrackAdRewarded:(TXADTrackerInfo *)trackInfo;

/*!
 @brief Notified when RewardedVideo ad LineItem failed to rewarded.
 @warning Only delegate for RewardedVideo ad.
 @see TXADTrackerInfo
 @param trackInfo Info of LineItem failed to reward.
 */
@optional
- (void)txAdTrackAdRewardFailed:(TXADTrackerInfo *)trackInfo;




/*!
 @brief Notified when start loading AdUnit.
 @see TXADAdUnitInfo
 @param adUnitInfo Info of requested AdUnit.
 */
@optional
- (void)txAdTrackAdUnitRequest:(TXADAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when AdUnit loaded success.
 @see TXADAdUnitInfo
 @param adUnitInfo Info of loaded AdUnit.
 */
@optional
- (void)txAdTrackAdUnitLoaded:(TXADAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when AdUnit failed to load.
 @see TXADAdUnitInfo
 @param adUnitInfo Info of AdUnit failed to load.
 */
@optional
- (void)txAdTrackAdUnitFailedToLoad:(TXADAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when AdUnit is displayed on the page. Displayed means ad was on UI.
 @see TXADAdUnitInfo
 @param adUnitInfo Info of displayed AdUnit.
 */
@optional
- (void)txAdTrackAdUnitCallShow:(TXADAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when AdUnit was shown. Shown means Network Sdk delegate ad shown.
 @see TXADAdUnitInfo
 @param adUnitInfo Info of shown AdUnit.
 */
@optional
- (void)txAdTrackAdUnitShown:(TXADAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when AdUnit was clicked.
 @see TXADAdUnitInfo
 @param adUnitInfo Info of clicked AdUnit.
 */
@optional
- (void)txAdTrackAdUnitClicked:(TXADAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when AdUnit was skipped.
 @see TXADAdUnitInfo
 @param adUnitInfo Info of skipped AdUnit.
 */
@optional
- (void)txAdTrackAdUnitSkipped:(TXADAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when AdUnit was closed.
 @see TXADAdUnitInfo
 @param adUnitInfo Info of closed AdUnit.
 */
@optional
- (void)txAdTrackAdUnitClosed:(TXADAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when RewardedVideo AdUnit start playing.
 @warning Only delegate for RewardedVideo ad.
 @see TXADAdUnitInfo
 @param adUnitInfo Info of AdUnit start playing.
 */
@optional
- (void)txAdTrackAdUnitVideoStarted:(TXADAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when RewardedVideo AdUnit finish playing.
 @warning Only delegate for RewardedVideo ad.
 @see TXADAdUnitInfo
 @param adUnitInfo Info of AdUnit completed playing.
 */
@optional
- (void)txAdTrackAdUnitVideoCompleted:(TXADAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when RewardedVideo AdUnit rewarded success.
 @warning Only delegate for RewardedVideo ad.
 @see TXADAdUnitInfo
 @param adUnitInfo Info of rewarded AdUnit.
 */
@optional
- (void)txAdTrackAdUnitRewarded:(TXADAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when RewardedVideo AdUnit failed to rewarded.
 @warning Only delegate for RewardedVideo ad.
 @see TXADAdUnitInfo
 @param adUnitInfo Info of AdUnit failed to reward.
 */
@optional
- (void)txAdTrackAdUnitRewardFailed:(TXADAdUnitInfo *)adUnitInfo;

@end
