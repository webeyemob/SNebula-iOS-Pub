//
//  WECreativeVASTInline.h
//

//  Licensed under the WeSdk License Agreement

//

#import <Foundation/Foundation.h>
#import "WECreativeVASTModel.h"

@interface WECreativeVASTInline : WECreativeVASTModel

@property (nonatomic, readonly) NSArray *creatives;
@property (nonatomic, readonly) NSArray *errorURLs;
@property (nonatomic, readonly) NSDictionary *extensions;
@property (nonatomic, readonly) NSArray *impressionURLs;

@end
