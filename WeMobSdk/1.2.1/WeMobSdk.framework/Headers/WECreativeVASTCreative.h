//
//  WECreativeVASTCreative.h
//

//  Licensed under the WeSdk License Agreement

//

#import <Foundation/Foundation.h>
#import "WECreativeVASTModel.h"

@class WECreativeVASTLinearAd;

@interface WECreativeVASTCreative : WECreativeVASTModel

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *sequence;
@property (nonatomic, copy, readonly) NSString *adID;
@property (nonatomic, readonly) WECreativeVASTLinearAd *linearAd;
@property (nonatomic, readonly) NSArray *companionAds;

@end
