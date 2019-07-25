//
//  WeMobCreativeVASTInline.h
//

//  Licensed under the WeMob License Agreement

//

#import <Foundation/Foundation.h>
#import "WeMobCreativeVASTModel.h"

@interface WeMobCreativeVASTInline : WeMobCreativeVASTModel

@property (nonatomic, readonly) NSArray *creatives;
@property (nonatomic, readonly) NSArray *errorURLs;
@property (nonatomic, readonly) NSDictionary *extensions;
@property (nonatomic, readonly) NSArray *impressionURLs;

@end
