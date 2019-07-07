//
//  WeMobCLMediator.h
//  WeMobSdk
//
//  Created by 王航 on 2019/7/6.
//  Copyright © 2019年 wesdk_wanghang. All rights reserved.
//

#import "WeMobDefaultMediator.h"

@interface WeMobCLMediator : WeMobDefaultMediator

-(id)initWithAdUnit:(WeMobAdUnit *)adUnit andCacheCount:(int)cacheCount;

@end
