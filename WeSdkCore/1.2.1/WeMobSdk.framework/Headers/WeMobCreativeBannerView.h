//
//  WeMobCreativeBannerView.h

//
//  Created by liuguangren on 2019/6/10.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WeMobCreativeBannerViewDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface WeMobCreativeBannerView : UIView


// The delegate `WeMobCreativeBannerViewDelegate` of the ad view. Typically this is a UIViewController.
@property (nonatomic, weak) id<WeMobCreativeBannerViewDelegate> delegate;
// Required to set this banner view to a proper size. (320*50 300*250)
@property (nonatomic, assign) CGSize  adSize;

@property (nonatomic, weak, nullable) UIViewController *rootViewController;

/// Returns YES if the banner is ready to be loaded. The delegate's
/// bannerAdDidLoad: will be called after this property switches from NO to YES.
@property(nonatomic, readonly) BOOL isReady;

/**
 * Initializes an WeMobCreativeBannerView with the given ad xml content and banner size.
 *
 * @param xml A string representing a xml.
 * @param adSize The desired ad size.
 * @return A newly initialized ad view corresponding to the given ad content and size.
 */
- (instancetype _Nonnull )initWithAdContent:(NSString *_Nullable)xml size:(CGSize)adSize;

/**
 * Requests a new ad from the Sdk ad server.
 *
 * If the ad view is already loading an ad, this call will be ignored.
 */
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
