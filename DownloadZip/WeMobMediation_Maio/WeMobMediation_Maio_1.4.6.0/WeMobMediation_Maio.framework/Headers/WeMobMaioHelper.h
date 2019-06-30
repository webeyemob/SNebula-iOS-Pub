//
//  WeMobMaioHelper.h
//  WeMobMediation_Maio
//
//  Created by 王航 on 2019/6/27.
//  Copyright © 2019年 王航. All rights reserved.
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
