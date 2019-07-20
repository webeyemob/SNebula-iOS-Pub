//
//  WECreativeVASTIndustryIcon.h
//

//  Licensed under the WeSdk License Agreement

//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WECreativeVASTModel.h"

@class WECreativeVASTDurationOffset;
@class WECreativeVASTResource;

@interface WECreativeVASTIndustryIcon : WECreativeVASTModel

@property (nonatomic, copy, readonly) NSString *program;
@property (nonatomic, readonly) CGFloat height;
@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, copy, readonly) NSString *xPosition;
@property (nonatomic, copy, readonly) NSString *yPosition;

@property (nonatomic, copy, readonly) NSString *apiFramework;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, readonly) WECreativeVASTDurationOffset *offset;

@property (nonatomic, copy, readonly) NSURL *clickThroughURL;
@property (nonatomic, readonly) NSArray *clickTrackingURLs;
@property (nonatomic, readonly) NSArray *viewTrackingURLs;

@property (nonatomic, readonly) WECreativeVASTResource *HTMLResource;
@property (nonatomic, readonly) WECreativeVASTResource *iframeResource;
@property (nonatomic, readonly) WECreativeVASTResource *staticResource;

@end
