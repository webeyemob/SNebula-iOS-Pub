//
//  WeMobCreativeVASTResponse.h
//

//  Licensed under the WeMob License Agreement

//

#import <Foundation/Foundation.h>
#import "WeMobCreativeVASTModel.h"

#import "WeMobCreativeVASTAd.h"
#import "WeMobCreativeVASTCompanionAd.h"
#import "WeMobCreativeVASTCreative.h"
#import "WeMobCreativeVASTDurationOffset.h"
#import "WeMobCreativeVASTIndustryIcon.h"
#import "WeMobCreativeVASTInline.h"
#import "WeMobCreativeVASTLinearAd.h"
#import "WeMobCreativeVASTMediaFile.h"
#import "WeMobCreativeVASTResource.h"
#import "WeMobCreativeVASTTrackingEvent.h"
#import "WeMobCreativeVASTWrapper.h"

@interface WeMobCreativeVASTResponse : WeMobCreativeVASTModel

@property (nonatomic, readonly) NSArray *ads;
@property (nonatomic, readonly) NSArray *errorURLs;
@property (nonatomic, copy, readonly) NSString *version;

@end
