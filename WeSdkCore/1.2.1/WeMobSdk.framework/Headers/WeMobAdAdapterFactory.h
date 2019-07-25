//
//  WeMobInterstitialAdFactory.h

//

#import <UIKit/UIKit.h>
#import "WeMobLineItem.h"
#import "WeMobBannerAdapter.h"
#import "WeMobInterstitialAdapter.h"
#import "WeMobRewardedVideoAdapter.h"
#import "WeMobNativeAdapter.h"

@interface WeMobAdAdapterFactory : NSObject

+ (WeMobBannerAdapter *)createBannerAdapter:(WeMobLineItem *)lineItem rootViewController:(UIViewController *)viewController;
+ (WeMobInterstitialAdapter *)createInterstitialAdapter:(WeMobLineItem *)lineItem;
+ (WeMobRewardedVideoAdapter *)createRewardedVideoAdapter:(WeMobLineItem *)lineItem;
+ (WeMobNativeAdapter *)createNativeAdapter:(WeMobLineItem *)lineItem;

@end
