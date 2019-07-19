//
//  WEBannerView.h
//  WeDSPDemo
//
//  Created by liuguangren on 2019/6/10.
//  Copyright © 2019 WeSdk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WEBannerViewDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface WEBannerView : UIView


// The delegate `WEBannerDelegate` of the ad view. Typically this is a UIViewController.
@property (nonatomic, weak) id<WEBannerViewDelegate> delegate;
// Required to set this banner view to a proper size. (320*50 300*250)
@property (nonatomic, assign) CGSize  adSize;
@property (nonatomic, assign) CGFloat bidFloor;
@property (nonatomic, weak, nullable) UIViewController *rootViewController;

/// Returns YES if the banner is ready to be loaded. The delegate's
/// bannerAdDidLoad: will be called after this property switches from NO to YES.
@property(nonatomic, readonly) BOOL isReady;

/**
 * Initializes an WEBannerView with the given ad unit ID and banner size.
 *
 * @param adUnitId A string representing a WeSdk ad unit ID.
 * @param adSize The desired ad size. A list of standard ad sizes is available in MPConstants.h.
 * @return A newly initialized ad view corresponding to the given ad unit ID and size.
 */
- (instancetype _Nonnull )initWithAdUnitId:(NSString *_Nullable)adUnitId size:(CGSize)adSize;

/**
 * Requests a new ad from the WePub ad server.
 *
 * If the ad view is already loading an ad, this call will be ignored.
 */
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
