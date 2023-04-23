//
//  TXADNativeAdView.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2019/11/8.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#ifndef TXADNativeAdViewRender_h
#define TXADNativeAdViewRender_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TXADNativeAdLayout.h"

@protocol TXADNativeAdViewRender<NSObject>

@required
- (UIView *)txAdGetRootView;

@optional
- (UILabel *)txAdGetTitle;

@optional
- (UILabel *)txAdGetSubTitle;

@optional
- (UILabel *)txAdGetBody;

@optional
- (UILabel *)txAdGetAdvertiser;

@optional
- (UIView *)txAdGetCallToAction;

@optional
- (UIView *)txAdGetIconView;

@optional
- (UIView *)txAdGetMediaView;

@optional
- (UIView *)txAdGetAdChoicesView;

@optional
- (UILabel *)txAdGetRatingLabel;

@optional
- (UIView *)txAdGetRatingView;

@optional
- (ratingCallback)txAdGetRatingCallback;

@optional
- (UILabel *)txAdGetPrice;

@optional
- (UILabel *)txAdGetStore;

@optional
- (NSArray<UIView *> *)txAdGetCustomViews;

@end

#endif /* TXADNativeAdViewRender_h */
