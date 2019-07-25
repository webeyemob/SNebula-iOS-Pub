//
//  WeMobCreativeVASTDurationOffset.h
//

//  Licensed under the WeMob License Agreement

//

#import <Foundation/Foundation.h>
#import "WeMobCreativeVASTModel.h"

typedef NS_ENUM(NSUInteger, WeMobCreativeVASTDurationOffsetType) {
    WeMobCreativeVASTDurationOffsetTypeAbsolute,
    WeMobCreativeVASTDurationOffsetTypePercentage,
};

@interface WeMobCreativeVASTDurationOffset : WeMobCreativeVASTModel

@property (nonatomic, readonly) WeMobCreativeVASTDurationOffsetType type;
@property (nonatomic, copy, readonly) NSString *offset;

- (NSTimeInterval)timeIntervalForVideoWithDuration:(NSTimeInterval)duration;

@end
