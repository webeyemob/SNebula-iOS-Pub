//
//  WeMobAesUtil.h
//  cipher
//

#import <Foundation/Foundation.h>
#import <Foundation/NSData.h>
#import <Foundation/NSError.h>
#import <CommonCrypto/CommonCryptor.h>
#import <CommonCrypto/CommonHMAC.h>

@interface WeMobAesUtil : NSObject

+ (NSData *)decrypt:(NSData *)data Key:(id)key IV:(id)iv;

+ (NSString*)md5HexDigest:(NSString*)input;

+ (NSData *) decryptedDataUsingAlgorithm:(CCAlgorithm) algorithm
                                    withData: (NSData *)data
                                     key: (id) key        // data or string
                    initializationVector: (id) iv        // data or string
                                 options: (CCOptions) options
                                   error: (CCCryptorStatus *) error;

@end
