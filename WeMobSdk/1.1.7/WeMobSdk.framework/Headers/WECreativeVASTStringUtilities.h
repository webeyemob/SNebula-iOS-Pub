//
//  WECreativeVASTStringUtilities.h
//

//  Licensed under the WeSdk License Agreement

//

#import <Foundation/Foundation.h>

@interface WECreativeVASTStringUtilities : NSObject

+ (double)doubleFromString:(NSString *)string;
+ (BOOL)stringRepresentsNonNegativePercentage:(NSString *)string;
+ (BOOL)stringRepresentsNonNegativeDuration:(NSString *)string;
+ (NSInteger)percentageFromString:(NSString *)string;
+ (NSTimeInterval)timeIntervalFromString:(NSString *)string;
+ (NSString *)stringFromTimeInterval:(NSTimeInterval)timeInterval;

@end
