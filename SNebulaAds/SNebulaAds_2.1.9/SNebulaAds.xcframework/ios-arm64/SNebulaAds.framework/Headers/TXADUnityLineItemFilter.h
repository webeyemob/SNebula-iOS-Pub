//
//  TXADUnityLineItemFilter.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2020/9/9.
//  Copyright © 2020 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface TXADUnityLineItemFilter : NSObject

- (id)initWithLineItemFilterCallback:(TXADLineItemFilterCallback)lineItemFilterCallback;

- (id)initWithAdClientReference:(TXADTypeRef _Nullable* _Nullable)adClient
         lineItemFilterCallback:(TXADAdLineItemFilterCallback)lineItemFilterCallback;

@end

NS_ASSUME_NONNULL_END
