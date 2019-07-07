//
//  WECreativeVASTResource.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the Webeye SDK License Agreement

//

#import <Foundation/Foundation.h>
#import "WECreativeVASTModel.h"

@interface WECreativeVASTResource : WECreativeVASTModel

@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) NSString *staticCreativeType;

@end
