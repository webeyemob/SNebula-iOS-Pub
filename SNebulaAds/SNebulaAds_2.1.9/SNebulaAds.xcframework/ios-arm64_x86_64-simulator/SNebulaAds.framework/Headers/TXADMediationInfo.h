//
//  TXADMediationInfo.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2021/7/28.
//  Copyright © 2021 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TXADMediationInfo : NSObject

@property (nonatomic, strong) NSString *networkName;
@property (nonatomic, strong) NSString *sdkVersion;
@property (nonatomic, strong) NSString *mediationVersion;
@property (nonatomic) BOOL debugMode;
@property (nonatomic) BOOL testMode;

@end

NS_ASSUME_NONNULL_END
