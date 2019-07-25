//
//  WeMobCreativeVASTLinearAd.h
//

//  Licensed under the WeMob License Agreement

//

#import <Foundation/Foundation.h>
#import "WeMobCreativeVASTModel.h"

@class WeMobCreativeVASTDurationOffset;
@class WeMobCreativeVASTMediaFile;

@interface WeMobCreativeVASTLinearAd : WeMobCreativeVASTModel

@property (nonatomic, copy, readonly) NSURL *clickThroughURL;
@property (nonatomic, readonly) NSArray *clickTrackingURLs;
@property (nonatomic, readonly) NSArray *customClickURLs;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, readonly) NSArray *industryIcons;
@property (nonatomic, readonly) NSArray *mediaFiles;
@property (nonatomic, readonly) WeMobCreativeVASTDurationOffset *skipOffset;
@property (nonatomic, readonly) NSDictionary *trackingEvents;

@end

@interface WeMobCreativeVASTLinearAd (Media)
@property (nonatomic, readonly) WeMobCreativeVASTMediaFile *highestBitrateMediaFile;

@end
