//
//  WeMobNativeAd.h
//  WeMobSdk
//
//  Created by wanghang on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WeMobNativeAdCore.h"
#import "WeMobInnerNativeAdDelegate.h"
#import "WeMobNativeAdDelegate.h"
#import "WeMobNativeAdLayout.h"

@interface WeMobNativeAd : NSObject<WeMobInnerNativeAdDelegate>

@property(nonatomic, strong) WeMobNativeAdCore *adCore;

- (WeMobNativeAd *)initWithAdUnitId:(NSString *)adUnitId;
@property(nonatomic, weak, nullable) id<WeMobNativeAdDelegate> delegate;

- (void)setNativeAdLayout:(WeMobNativeAdLayout *)layout;
- (void)setHE;
- (void)loadAd;
- (BOOL)isReady;
- (UIView *)getAdView;
- (UIView *)getAdView:(WeMobNativeAdLayout *)layout;
- (void)destroy;

@end
