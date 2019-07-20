//
//  WECreativeBannerView.h
//  WeDSPDemo
//
//  Created by liuguangren on 2019/6/10.
//  Copyright © 2019 WeSdk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WECreativeBannerViewDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface WECreativeBannerView : UIView


// The delegate `WEBannerDelegate` of the ad view. Typically this is a UIViewController.
@property (nonatomic, weak) id<WECreativeBannerViewDelegate> delegate;
// Required to set this banner view to a proper size. (320*50 300*250)
@property (nonatomic, assign) CGSize  adSize;

@property (nonatomic, weak, nullable) UIViewController *rootViewController;

/// Returns YES if the banner is ready to be loaded. The delegate's
/// bannerAdDidLoad: will be called after this property switches from NO to YES.
@property(nonatomic, readonly) BOOL isReady;

/**
 * Initializes an WECreativeBannerView with the given ad xml content and banner size.
 *
 * @param xml A string representing a xml.
 * @param adSize The desired ad size. A list of standard ad sizes is available in WEConstants.h.
 * @return A newly initialized ad view corresponding to the given ad content and size.
 */
- (instancetype _Nonnull )initWithAdContent:(NSString *_Nullable)xml size:(CGSize)adSize;

/**
 * Requests a new ad from the WeSdk ad server.
 *
 * If the ad view is already loading an ad, this call will be ignored.
 */
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
