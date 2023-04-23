//
//  TXADLineItemFilter.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2020/6/29.
//  Copyright © 2020 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADILineItem.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Delegate that will filter specifed LineItem in AdUnit for local test use.
 */
@protocol TXADLineItemFilter<NSObject>

@required
- (BOOL)txAdAcceptLineItem:(TXADILineItem *)lineItem;

@end

NS_ASSUME_NONNULL_END
