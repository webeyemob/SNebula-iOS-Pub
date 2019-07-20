//
//  WECreativeVASTMacroProcessor.h
//

//  Licensed under the WeSdk License Agreement

//

#import <Foundation/Foundation.h>

@interface WECreativeVASTMacroProcessor : NSObject

+ (NSURL *)macroExpandedURLForURL:(NSURL *)URL errorCode:(NSString *)errorCode;
+ (NSURL *)macroExpandedURLForURL:(NSURL *)URL errorCode:(NSString *)errorCode videoTimeOffset:(NSTimeInterval)timeOffset videoAssetURL:(NSURL *)videoAssetURL;

@end
