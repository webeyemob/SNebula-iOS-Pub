//
//  WeMobDspUnifiedNative.h

//
//  Created by tamefox on 2019/6/19.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WeMobDspConstant.h"


NS_ASSUME_NONNULL_BEGIN

@interface WeMobDspUnifiedNative : NSObject

+ (instancetype)initNativeAds: (NSDictionary *)nativeData;

@property (nonatomic, strong) NSString * title;
@property (nonatomic, strong) NSString * body;
@property (nonatomic, strong) NSString * callToAction;
@property (nonatomic, strong) NSString * iconUrl;
@property (nonatomic, strong) NSString * imageUrl;
@property (nonatomic, strong) NSString * advertiser;
@property (nonatomic)         NSInteger rating;

@property (copy) WeMobDspCommonVoidBlock _Nullable didImpressionBlock;
@property (copy) WeMobDspCommonVoidBlock _Nullable didClickBlock;


@property (nonatomic)   BOOL hasImpressioned;

- (void) registerViewForInteraction:(UIView *)adview clickableViews: (NSArray<UIView *> *) viewList;

@end

NS_ASSUME_NONNULL_END
