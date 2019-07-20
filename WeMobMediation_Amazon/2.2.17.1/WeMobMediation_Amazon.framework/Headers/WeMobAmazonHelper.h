//
//  WeMobAmazonHelper.h
//  WeMobMediation_Amazon
//
//  Created by Mathew on 2019/6/24.
//

#import <Foundation/Foundation.h>
#import <AmazonAd/AmazonAd.h>
#import "WeMobAdError.h"

@interface WeMobAmazonHelper : NSObject

+(NSString *)getApplicationKey:(NSDictionary *)serverExtras;

+(void)initWithApplicationKey:(NSString *)applicationKey;

+(void)updateGdprConsent;

+(long)getEcpm:(float)eCpm;

+(WeMobAdError *)getAdError:(AmazonAdError *)error;

@end
