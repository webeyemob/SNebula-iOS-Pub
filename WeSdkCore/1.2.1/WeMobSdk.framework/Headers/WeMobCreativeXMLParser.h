//
//  WeMobCreativeXMLParser.h

//
//  Created by tamefox on 2019/6/21.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WeMobCreativeXMLParser : NSObject

- (NSDictionary *)dictionaryWithData:(NSData *)data error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
