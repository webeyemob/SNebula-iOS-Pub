//
//  WeMobNativeAdCore.h
//  WeMobSdk
//
//  Created by wanghang on 2019/6/20.
//

#import "UIKit/UIKit.h"
#import "WeMobInnerNativeAdDelegate.h"
#import "WeMobAdUnit.h"
#import "WeMobMediator.h"
#import "WeMobMediatorDelegate.h"
#import "WeMobNativeAdLayout.h"
#import "WeMobBaseAdCore.h"

@interface WeMobNativeAdCore<WeMobNativeAdapter> : WeMobBaseAdCore

@property(nonatomic, weak, nullable) id<WeMobInnerNativeAdDelegate> delegate;

- (void)setNativeAdLayout:(WeMobNativeAdLayout *)layout;

- (UIView *)getAdView;
- (UIView *)getAdView:(WeMobNativeAdLayout *)layout;

@end
