//
//  WeMobCLMediator.h
//  WeMobSdk
//
//  Created by Mathew on 2019/7/6.
//  Copyright © 2019年 WeSdk. All rights reserved.
//

#import "WeMobDefaultMediator.h"

@interface WeMobCLMediator : WeMobDefaultMediator

-(id)initWithAdUnit:(WeMobAdUnit *)adUnit andCacheCount:(int)cacheCount;

@end
