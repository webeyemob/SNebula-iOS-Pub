//
//  WeMobJsonUtil.h
//  WeMobSdk
//
//  Created by wanghang on 2019/6/15.
//

#import <Foundation/Foundation.h>

@interface WeMobJsonUtil : NSObject

+(NSData *)getValidJson: (NSData *)json;
+(NSDictionary *)getJson: (NSString *)json;

@end
