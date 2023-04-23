//
//  TXADDebugHelper.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2021/7/28.
//  Copyright © 2021 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADMediationInfo.h"
#import "TXADNetwork.h"

NS_ASSUME_NONNULL_BEGIN

@interface TXADDebugHelper : NSObject

+ (TXADMediationInfo * _Nullable)getMediationInfo:(TXADNetworkId)networkId;

@end

NS_ASSUME_NONNULL_END
