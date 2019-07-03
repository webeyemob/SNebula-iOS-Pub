//
//  WeMobJsonUtil.h
//  WeMobSdk
//
//  Created by 王航 on 2019/6/15.
//

#import <Foundation/Foundation.h>

@interface WeMobJsonUtil : NSObject

+(NSData *)getValidJson: (NSData *)json;
+(NSDictionary *)getJson: (NSString *)json;

@end
