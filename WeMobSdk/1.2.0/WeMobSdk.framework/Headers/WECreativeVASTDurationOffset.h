//
//  WECreativeVASTDurationOffset.h
//

//  Licensed under the WeSdk License Agreement

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
