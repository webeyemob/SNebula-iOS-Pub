//
//  WeMobCreativeVASTIndustryIcon.h
//

//  Licensed under the WeMob License Agreement

//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WeMobCreativeVASTModel.h"

@class WeMobCreativeVASTDurationOffset;
@class WeMobCreativeVASTResource;

@interface WeMobCreativeVASTIndustryIcon : WeMobCreativeVASTModel

@property (nonatomic, copy, readonly) NSString *program;
@property (nonatomic, readonly) CGFloat height;
@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, copy, readonly) NSString *xPosition;
@property (nonatomic, copy, readonly) NSString *yPosition;

@property (nonatomic, copy, readonly) NSString *apiFramework;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, readonly) WeMobCreativeVASTDurationOffset *offset;

@property (nonatomic, copy, readonly) NSURL *clickThroughURL;
@property (nonatomic, readonly) NSArray *clickTrackingURLs;
@property (nonatomic, readonly) NSArray *viewTrackingURLs;

@property (nonatomic, readonly) WeMobCreativeVASTResource *HTMLResource;
@property (nonatomic, readonly) WeMobCreativeVASTResource *iframeResource;
@property (nonatomic, readonly) WeMobCreativeVASTResource *staticResource;

@end
