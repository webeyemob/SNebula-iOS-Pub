//
//  WeMobCreativeVastCache.h

//
//  Created by tamefox on 2019/6/25.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WeMobCreativeVastCache : NSObject

+ (BOOL)equalToLastVast:(NSString *)vastData;
+ (void)updateCurrentVastInfo:vastContent andMediaPath: (NSString *)mediaPath;
@end

NS_ASSUME_NONNULL_END
