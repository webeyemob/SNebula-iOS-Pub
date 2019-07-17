//
//  WECreativeVASTResponse.h
//

//  Licensed under the WeSdk License Agreement

//

#import <Foundation/Foundation.h>
#import "WECreativeVASTModel.h"

#import "WECreativeVASTAd.h"
#import "WECreativeVASTCompanionAd.h"
#import "WECreativeVASTCreative.h"
#import "WECreativeVASTDurationOffset.h"
#import "WECreativeVASTIndustryIcon.h"
#import "WECreativeVASTInline.h"
#import "WECreativeVASTLinearAd.h"
#import "WECreativeVASTMediaFile.h"
#import "WECreativeVASTResource.h"
#import "WECreativeVASTTrackingEvent.h"
#import "WECreativeVASTWrapper.h"

@interface WECreativeVASTResponse : WECreativeVASTModel

@property (nonatomic, readonly) NSArray *ads;
@property (nonatomic, readonly) NSArray *errorURLs;
@property (nonatomic, copy, readonly) NSString *version;

@end
