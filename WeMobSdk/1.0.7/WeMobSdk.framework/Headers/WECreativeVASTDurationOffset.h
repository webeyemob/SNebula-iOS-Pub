//
//  WECreativeVASTDurationOffset.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the Webeye SDK License Agreement

//

#import <Foundation/Foundation.h>
#import "WECreativeVASTModel.h"

typedef NS_ENUM(NSUInteger, WECreativeVASTDurationOffsetType) {
    WECreativeVASTDurationOffsetTypeAbsolute,
    WECreativeVASTDurationOffsetTypePercentage,
};

@interface WECreativeVASTDurationOffset : WECreativeVASTModel

@property (nonatomic, readonly) WECreativeVASTDurationOffsetType type;
@property (nonatomic, copy, readonly) NSString *offset;

- (NSTimeInterval)timeIntervalForVideoWithDuration:(NSTimeInterval)duration;

@end
