//
//  WECreativeVASTStringUtilities.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the Webeye SDK License Agreement

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
