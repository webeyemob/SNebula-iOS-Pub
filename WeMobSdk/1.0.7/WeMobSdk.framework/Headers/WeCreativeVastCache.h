//
//  WeCreativeVastCache.h
//  WeDSPDemo
//
//  Created by tangzheng on 2019/6/25.
//  Copyright © 2019 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WeCreativeVastCache : NSObject

+ (BOOL)equalToLastVast:(NSString *)vastData;
+ (void)updateCurrentVastInfo:vastContent andMediaPath: (NSString *)mediaPath;
@end

NS_ASSUME_NONNULL_END
