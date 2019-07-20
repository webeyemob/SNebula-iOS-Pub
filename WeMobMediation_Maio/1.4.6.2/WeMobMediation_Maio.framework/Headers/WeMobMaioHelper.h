//
//  WeMobMaioHelper.h
//  WeMobMediation_Maio
//
//  Created by Mathew on 2019/6/27.
//  Copyright © 2019年 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Maio/Maio.h>
#import "WeMobAdError.h"

@interface WeMobMaioHelper : NSObject<MaioDelegate>

+(WeMobMaioHelper *)getInstance;

+(NSString *)getMediaId:(NSDictionary *)serverExtras;
+(NSString *)getZoneId:(NSDictionary *)serverExtras;

- (void)initWithMediaId:(NSString *)mediaId;

+ (WeMobAdError *)getAdError:(MaioFailReason)reason;
	
- (void)registerMaioDelegate: (id <MaioDelegate>)delegate;
- (void)unRegisterMaioDelegate: (id <MaioDelegate>)delegate;

@end
