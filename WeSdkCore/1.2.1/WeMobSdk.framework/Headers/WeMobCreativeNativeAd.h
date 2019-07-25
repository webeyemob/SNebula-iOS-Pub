//
//  WeMobCreativeNativeAd.h

//
//  Created by tamefox on 2019/6/18.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WeMobCreativeNativeAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN


@interface WeMobCreativeNativeAd : NSObject

/// Initializes an native with an ad unit created on the AdMob website. Create a new ad unit
/// for every unique placement of an ad in your application. Set this to the ID assigned for this
/// placement. Ad units are important for targeting and statistics.
- (id)initWithAdContent:(NSDictionary *)adContent;

#pragma mark Pre-Request


/// Optional delegate object that receives state change notifications from this WeMobCreativeNativeAd.
@property(nonatomic, weak, nullable) id<WeMobCreativeNativeAdDelegate> delegate;

/// Makes an native ad request. Additional targeting options can be supplied with a request
/// object. Only one naive request is allowed at a time.
///
/// This is best to do several seconds before the native is needed to preload its content.
/// Then when transitioning between view controllers show the interstital with
/// presentFromViewController.
- (void)loadAd;

/// Returns YES if the native is ready to be displayed. The delegate's
/// nativeAdDidReceiveAd: will be called after this property switches from NO to YES.
@property(nonatomic, readonly) BOOL isReady;


@property (nonatomic, strong) NSString * title;
@property (nonatomic, strong) NSString * body;
@property (nonatomic, strong) NSString * callToAction;
@property (nonatomic, strong) NSString * iconUrl;
@property (nonatomic, strong) NSString * imageUrl;
@property (nonatomic, strong) NSString * advertiser;
@property (nonatomic)         NSInteger rating;

@property (nonatomic, strong) NSString *impTrackUrl;
@property (nonatomic, strong) NSString *clickUrl;

- (void) registerViewForInteraction:(UIView *)adview clickableViews: (NSArray<UIView *> *) viewList;


@end

NS_ASSUME_NONNULL_END
