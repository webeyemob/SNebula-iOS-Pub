//
//  WeMobCreativeVASTWrapper.h
//

//  Licensed under the WeMob License Agreement

//

#import <Foundation/Foundation.h>
#import "WeMobCreativeVASTModel.h"

@class WeMobCreativeVASTResponse;

@interface WeMobCreativeVASTWrapper : WeMobCreativeVASTModel

@property (nonatomic, readonly) NSArray *creatives;
@property (nonatomic, readonly) NSArray *errorURLs;
@property (nonatomic, readonly) NSArray *extensions;
@property (nonatomic, readonly) NSArray *impressionURLs;
@property (nonatomic, copy, readonly) NSURL *VASTAdTagURI;
@property (nonatomic, readonly) WeMobCreativeVASTResponse *wrappedVASTResponse;

@end
