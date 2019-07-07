//
//  WECreativeXMLParser.h
//  WeDSPDemo
//
//  Created by tangzheng on 2019/6/21.
//  Copyright © 2019 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WECreativeXMLParser : NSObject

- (NSDictionary *)dictionaryWithData:(NSData *)data error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
