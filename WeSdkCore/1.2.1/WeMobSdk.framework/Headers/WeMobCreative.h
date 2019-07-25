//
//  WeMobCreative.h

//
//  Created by tamefox on 2019/6/19.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WeMobCreative : NSObject


@property (nonatomic, copy) NSString *appId;
@property (nonatomic) CLLocationCoordinate2D currentLocation;

+ (instancetype)instance;

+ (void) initWithAppId: (NSString *)appId;

@end

NS_ASSUME_NONNULL_END
