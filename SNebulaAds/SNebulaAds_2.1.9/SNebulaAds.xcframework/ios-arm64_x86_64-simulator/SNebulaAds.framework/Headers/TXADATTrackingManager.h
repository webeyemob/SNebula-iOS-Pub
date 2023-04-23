//
//  TXADATTrackingManager.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2020/9/22.
//  Copyright © 2020 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADTypes.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TXADATTrackingManagerAuthorizationStatus) {
    TXAD_ATTrackingAuthorizationStatusNotDetermined = 0,
    TXAD_ATTrackingAuthorizationStatusRestricted,
    TXAD_ATTrackingAuthorizationStatusDenied,
    TXAD_ATTrackingAuthorizationStatusAuthorized
};

// For Unity Use
@interface TXADATTrackingManager : NSObject

+ (TXADATTrackingManager *)sharedInstance;

@property(nonatomic, assign) TXADATTrackingAuthorizationCallback trackingCallback;

+ (int)trackingAuthorizationStatus;

+ (NSString *)getStatusDesc:(int)status;

+ (void)requestTrackingAuthorization;

+ (void)requestTrackingAuthorizationWithCompletionHandler:(void(^)(int status))completion;

@end

NS_ASSUME_NONNULL_END
