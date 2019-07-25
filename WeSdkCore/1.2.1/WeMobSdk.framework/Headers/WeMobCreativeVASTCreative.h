//
//  WeMobCreativeVASTCreative.h
//

//  Licensed under the WeMob License Agreement

//

#import <Foundation/Foundation.h>
#import "WeMobCreativeVASTModel.h"

@class WeMobCreativeVASTLinearAd;

@interface WeMobCreativeVASTCreative : WeMobCreativeVASTModel

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *sequence;
@property (nonatomic, copy, readonly) NSString *adID;
@property (nonatomic, readonly) WeMobCreativeVASTLinearAd *linearAd;
@property (nonatomic, readonly) NSArray *companionAds;

@end
