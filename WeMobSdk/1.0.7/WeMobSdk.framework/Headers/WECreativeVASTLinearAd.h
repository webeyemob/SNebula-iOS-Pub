//
//  WECreativeVASTLinearAd.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the Webeye SDK License Agreement

//

#import <Foundation/Foundation.h>
#import "WECreativeVASTModel.h"

@class WECreativeVASTDurationOffset;
@class WECreativeVASTMediaFile;

@interface WECreativeVASTLinearAd : WECreativeVASTModel

@property (nonatomic, copy, readonly) NSURL *clickThroughURL;
@property (nonatomic, readonly) NSArray *clickTrackingURLs;
@property (nonatomic, readonly) NSArray *customClickURLs;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, readonly) NSArray *industryIcons;
@property (nonatomic, readonly) NSArray *mediaFiles;
@property (nonatomic, readonly) WECreativeVASTDurationOffset *skipOffset;
@property (nonatomic, readonly) NSDictionary *trackingEvents;

@end

@interface WECreativeVASTLinearAd (Media)
@property (nonatomic, readonly) WECreativeVASTMediaFile *highestBitrateMediaFile;

@end
