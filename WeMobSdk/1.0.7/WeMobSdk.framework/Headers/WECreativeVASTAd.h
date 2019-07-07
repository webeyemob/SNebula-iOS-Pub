//
//  WECreativeVASTAd.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the Webeye SDK License Agreement

//

#import <Foundation/Foundation.h>
#import "WECreativeVASTModel.h"

@class WECreativeVASTInline;
@class WECreativeVASTWrapper;

@interface WECreativeVASTAd : WECreativeVASTModel

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *sequence;
@property (nonatomic, readonly) WECreativeVASTInline *inlineAd;
@property (nonatomic, readonly) WECreativeVASTWrapper *wrapper;

@end
