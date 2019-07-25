//
//  WeMobDspBidRequestHelper.h

//
//  Created by liuguangren on 2019/6/10.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WeMobDspBidRequestHelper : NSObject

+ (NSString *)generateUrlWithWidth:(NSInteger)width height:(NSInteger)height bidFloor:(float)bidFloor;

+ (NSString *)generateUrlWithBidFloor:(float)bidFloor type:(NSString *)type;

@end

NS_ASSUME_NONNULL_END
