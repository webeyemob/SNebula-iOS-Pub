//
//  WECreative.h
//  WeDSPDemo
//
//  Created by tangzheng on 2019/6/19.
//  Copyright © 2019 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WECreative : NSObject


@property (nonatomic, copy) NSString *appId;
@property (nonatomic) CLLocationCoordinate2D currentLocation;

+ (instancetype)instance;

+ (void) initWithAppId: (NSString *)appId;

@end

NS_ASSUME_NONNULL_END
