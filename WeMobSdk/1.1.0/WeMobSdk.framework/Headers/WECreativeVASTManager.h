//
//  WECreativeVASTManager.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the Webeye SDK License Agreement

//

#import <Foundation/Foundation.h>
#import "WECreativeVASTResponse.h"

typedef enum {
    WECreativeVASTErrorXMLParseFailure,
    WECreativeVASTErrorExceededMaximumWrapperDepth,
    WECreativeVASTErrorNoAdsFound
} WECreativeVASTError;

@interface WECreativeVASTManager : NSObject

+ (void)fetchVASTWithData:(NSData *)data completion:(void (^)(WECreativeVASTResponse *, NSError *))completion;

@end
