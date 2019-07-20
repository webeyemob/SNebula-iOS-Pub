//
//  WECreativeVASTWrapper.h
//

//  Licensed under the WeSdk License Agreement

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
