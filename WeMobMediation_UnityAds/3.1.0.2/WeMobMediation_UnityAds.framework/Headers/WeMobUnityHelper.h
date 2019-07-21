//
//  WeMobUnityHelper2.h
//  WeMobMediation_UnityAds
//
//  Created by Mathew on 2019/6/24.
//

#import <Foundation/Foundation.h>
#import "UnityAds/UnityAds.h"
#import "WeMobAdError.h"

@interface WeMobUnityHelper : NSObject<UnityMonetizationDelegate, UnityAdsBannerDelegate>

+(WeMobUnityHelper *)getInstance;

+(NSString *)getGameId:(NSDictionary *)serverExtras;
+(NSString *)getPlacementId:(NSDictionary *)serverExtras;

+(NSString *)getContentState:(UnityMonetizationPlacementContentState)state;

- (void)initWithGameId:(NSString *)gameId;
+ (void)updateGdprConsent;

- (void)registerUnityMonetizationDelegate: (id <UnityMonetizationDelegate>)delegate;
- (void)unRegisterUnityMonetizationDelegate: (id <UnityMonetizationDelegate>)delegate;

// Banner
- (void)registerUnityAdsBannerDelegate: (id <UnityAdsBannerDelegate>)delegate;
- (void)unRegisterUnityAdsBannerDelegate: (id <UnityAdsBannerDelegate>)delegate;

@end
