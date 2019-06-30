//
//  WEUnifiedNative.h
//  WeDSPDemo
//
//  Created by 汤正 on 2019/6/19.
//  Copyright © 2019 WE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface WEUnifiedNative : NSObject

+ (instancetype)initNativeAds: (NSDictionary *)nativeData;

@property (nonatomic, strong) NSString * title;
@property (nonatomic, strong) NSString * body;
@property (nonatomic, strong) NSString * callToAction;
@property (nonatomic, strong) NSString * iconUrl;
@property (nonatomic, strong) NSString * imageUrl;
@property (nonatomic, strong) NSString * advertiser;
@property (nonatomic)         NSInteger rating;


@property (nonatomic)   BOOL hasImpressioned;

- (void) registerViewForInteraction:(UIView *)adview clickableViews: (NSArray<UIView *> *) viewList;

@end

NS_ASSUME_NONNULL_END
