//
//  WeMobCreativeVASTAd.h
//

//  Licensed under the WeMob License Agreement

//

#import <Foundation/Foundation.h>
#import "WeMobCreativeVASTModel.h"

@class WeMobCreativeVASTInline;
@class WeMobCreativeVASTWrapper;

@interface WeMobCreativeVASTAd : WeMobCreativeVASTModel

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *sequence;
@property (nonatomic, readonly) WeMobCreativeVASTInline *inlineAd;
@property (nonatomic, readonly) WeMobCreativeVASTWrapper *wrapper;

@end
