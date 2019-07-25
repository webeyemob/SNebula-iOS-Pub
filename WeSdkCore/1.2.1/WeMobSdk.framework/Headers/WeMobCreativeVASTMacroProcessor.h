//
//  WeMobCreativeVASTMacroProcessor.h
//

//  Licensed under the WeMob License Agreement

//

#import <Foundation/Foundation.h>

@interface WeMobCreativeVASTMacroProcessor : NSObject

+ (NSURL *)macroExpandedURLForURL:(NSURL *)URL errorCode:(NSString *)errorCode;
+ (NSURL *)macroExpandedURLForURL:(NSURL *)URL errorCode:(NSString *)errorCode videoTimeOffset:(NSTimeInterval)timeOffset videoAssetURL:(NSURL *)videoAssetURL;

@end
