//
//  WECreativeVASTManager.h
//

//  Licensed under the WeSdk License Agreement

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
