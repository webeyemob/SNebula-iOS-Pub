//
//  WECreativeVASTMacroProcessor.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the Webeye SDK License Agreement

//

#import <Foundation/Foundation.h>

@interface WECreativeVASTMacroProcessor : NSObject

+ (NSURL *)macroExpandedURLForURL:(NSURL *)URL errorCode:(NSString *)errorCode;
+ (NSURL *)macroExpandedURLForURL:(NSURL *)URL errorCode:(NSString *)errorCode videoTimeOffset:(NSTimeInterval)timeOffset videoAssetURL:(NSURL *)videoAssetURL;

@end
