//
//  WeMobCreativeVASTManager.h
//

//  Licensed under the WeMob License Agreement

//

#import <Foundation/Foundation.h>
#import "WeMobCreativeVASTResponse.h"

typedef enum {
    WeMobCreativeVASTErrorXMLParseFailure,
    WeMobCreativeVASTErrorExceededMaximumWrapperDepth,
    WeMobCreativeVASTErrorNoAdsFound
} WeMobCreativeVASTError;

@interface WeMobCreativeVASTManager : NSObject

+ (void)fetchVASTWithData:(NSData *)data completion:(void (^)(WeMobCreativeVASTResponse *, NSError *))completion;

@end
