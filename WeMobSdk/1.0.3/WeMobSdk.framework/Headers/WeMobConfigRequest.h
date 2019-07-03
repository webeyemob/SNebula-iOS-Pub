//
//  WeMobConfigRequest.h
//  WeMobSdk
//
//  Created by 王航 on 2019/6/13.
//

#import <Foundation/Foundation.h>
#import "WeMobGlobal.h"
#import "WeMobAdUnit.h"

// 监听 Global 的加载
typedef void (^globalCallBack)(WeMobGlobal *global);
// 监听 AdUnit 的加载
typedef void (^adUnitCallBack)(WeMobAdUnit *adUnit);

// 监听网络请求的加载
typedef void (^requestCallback)(NSData *encodedData);

@interface WeMobConfigRequest : NSObject

+ (WeMobConfigRequest *)getInstance;

- (void)requestGlobal: (globalCallBack) callback;
- (WeMobGlobal *) getGlobal;

- (void)requestAdunit:(NSString *)adUnitId callback:(adUnitCallBack) callback;

@end
