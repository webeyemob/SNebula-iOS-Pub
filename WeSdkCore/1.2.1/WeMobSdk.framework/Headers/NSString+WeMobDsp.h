//
//  NSString+WeMobDsp.h

//
//  Created by liuguangren on 2019/6/11.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (WeMobDsp)

/**
 *  URLEncode
 */
- (NSString *)URLEncodedString;

/**
 *  URLDecode
 */
-(NSString *)URLDecodedString;

- (NSString*)safeStr;

@end

NS_ASSUME_NONNULL_END
