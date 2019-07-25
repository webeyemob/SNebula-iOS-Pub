//
//  WeMobCreativeVASTStringUtilities.h
//

//  Licensed under the WeMob License Agreement

//

#import <Foundation/Foundation.h>

@interface WeMobCreativeVASTStringUtilities : NSObject

+ (double)doubleFromString:(NSString *)string;
+ (BOOL)stringRepresentsNonNegativePercentage:(NSString *)string;
+ (BOOL)stringRepresentsNonNegativeDuration:(NSString *)string;
+ (NSInteger)percentageFromString:(NSString *)string;
+ (NSTimeInterval)timeIntervalFromString:(NSString *)string;
+ (NSString *)stringFromTimeInterval:(NSTimeInterval)timeInterval;

@end
