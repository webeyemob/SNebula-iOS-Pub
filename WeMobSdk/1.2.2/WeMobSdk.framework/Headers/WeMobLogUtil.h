//
//  WeMobLogUtil.h
//  WeMobSdk
//

#import <Foundation/Foundation.h>

@interface WeMobLogUtil : NSObject

+(void) logWithTag:(NSString *)tag message:(NSString *)message;
+(void) logNetworkIds:(int [])networkIds tag:(NSString *)TAG;

@end
