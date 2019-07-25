//
//  WeMobDspJsonRequestHelper.h

//
//  Created by liuguangren on 2019/6/11.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WeMobDspAdError.h"


typedef void (^SuccessBlock)(id _Nullable responseObject);
typedef void (^FailureBlock)(void);

NS_ASSUME_NONNULL_BEGIN

@interface WeMobDspJsonRequestHelper : NSObject

+ (void)getWithURL:(NSString *)url params:(NSDictionary * _Nullable)params success:(SuccessBlock _Nullable)success failure:(FailureBlock _Nullable)failure;

+ (void)postWithURL:(NSString *)url params:(NSDictionary * _Nullable)params success:(SuccessBlock _Nullable)success failure:(FailureBlock _Nullable)failure;

@end

NS_ASSUME_NONNULL_END
