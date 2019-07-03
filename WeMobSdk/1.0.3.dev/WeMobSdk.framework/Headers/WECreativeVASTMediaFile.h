//
//  WECreativeVASTMediaFile.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the Webeye SDK License Agreement

//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WECreativeVASTModel.h"

@interface WECreativeVASTMediaFile : WECreativeVASTModel

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *delivery;
@property (nonatomic, copy, readonly) NSString *mimeType;
@property (nonatomic, readonly) double bitrate;
@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, readonly) CGFloat height;
@property (nonatomic, copy, readonly) NSURL *URL;

@end
