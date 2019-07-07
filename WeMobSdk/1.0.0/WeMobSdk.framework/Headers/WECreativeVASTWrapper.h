//
//  WECreativeVASTWrapper.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the Webeye SDK License Agreement

//

#import <Foundation/Foundation.h>
#import "WECreativeVASTModel.h"

@class WECreativeVASTResponse;

@interface WECreativeVASTWrapper : WECreativeVASTModel

@property (nonatomic, readonly) NSArray *creatives;
@property (nonatomic, readonly) NSArray *errorURLs;
@property (nonatomic, readonly) NSArray *extensions;
@property (nonatomic, readonly) NSArray *impressionURLs;
@property (nonatomic, copy, readonly) NSURL *VASTAdTagURI;
@property (nonatomic, readonly) WECreativeVASTResponse *wrappedVASTResponse;

@end
