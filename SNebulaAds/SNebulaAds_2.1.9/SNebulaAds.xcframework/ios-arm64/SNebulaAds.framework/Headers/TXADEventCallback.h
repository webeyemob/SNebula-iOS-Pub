//
//  TXADEventCallback.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2021/1/26.
//  Copyright © 2021 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADEventData.h"

NS_ASSUME_NONNULL_BEGIN

@protocol TXADEventCallback<NSObject>

@optional
- (void)txAdEvent:(TXADEventData *)eventData;

@end

NS_ASSUME_NONNULL_END
