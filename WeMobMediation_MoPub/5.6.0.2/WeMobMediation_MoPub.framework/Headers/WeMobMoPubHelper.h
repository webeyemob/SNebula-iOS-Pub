//
//  WeMobMoPubHelper.h
//  WeMobMediation_MoPub
//
//  Created by Mathew on 2019/6/25.
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"

typedef void (^sdkInitCallback)(void);

@interface WeMobMoPubHelper : NSObject

+ (NSString *)getAdUnitId:(NSDictionary *)serverExtras;
+ (WeMobAdError *)getAdError:(NSError *)error;

+ (WeMobMoPubHelper *)getInstance;
- (void)initWithAdUnitId:(NSString *)adUnitId;

- (void)registerSdkInitCallBack: (sdkInitCallback)callback;
- (void)unRegisterSdkInitCallBack: (sdkInitCallback)callback;

@end
