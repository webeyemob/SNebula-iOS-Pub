//
//  TXADNetworkConfigs.h
//  TXADSdk
//
//  Created by TaurusXAds on 2019/10/8.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADNetworkConfig.h"

/*!
@class TXADNetworkConfigs
@abstract NetworkConfigs enable set special config of Network.
*/
@interface TXADNetworkConfigs : NSObject

/*!
@method addConfig
@abstract Add a config to NetworkConfigs.
@param config TXADNetworkConfig
*/
-(void)addConfig:(TXADNetworkConfig *)config;

/*!
@method getNetworkConfig
@abstract Gets the third-party network config
@param clazz The config class name
@result The third-party network config
*/
-(NSObject *)getNetworkConfig:(Class)clazz;

/*!
@method getNetworkConfigOrGlobal
@abstract Gets the third-party or global network config
@param clazz The config class name
@result The network config
*/
-(NSObject *)getNetworkConfigOrGlobal:(Class)clazz;

/*!
@method getGlobalNetworkConfig
@abstract Gets the global network config
@param clazz The config class name
@result The global network config
*/
+(NSObject *)getGlobalNetworkConfig:(Class)clazz;

@end
