//
//  Mediation.h
//  Created by TaurusXAds on 2019/6/15.
//

#import <Foundation/Foundation.h>
#import "TXADAutoLoadConfig.h"

typedef NS_ENUM(NSInteger, TXADLoadModeId) {
    TXAD_LOAD_MODE_SERIAL = 1,
    TXAD_LOAD_MODE_PARALLEL = 2,
    TXAD_LOAD_MODE_SHUFFLE = 3,
    TXAD_LOAD_MODE_AUTO_LOAD = 4
};

typedef NS_ENUM(NSInteger, TXADMediationPriorityId) {
    TXAD_LOAD_PRIORITY_TIME = 1,
    TXAD_LOAD_PRIORITY_ECPM = 2
};

@interface TXADLoadMode : NSObject

@property TXADLoadModeId modeId;
@property TXADMediationPriorityId priority;

@property int parallelCount;

@property BOOL isUseWaterfallCacheFirst;

@property TXADAutoLoadConfig *autoLoadConfig;

- (NSString *)getModeName;
- (BOOL)isShuffle;

- (NSString *)getPriorityName;
- (BOOL)isTimePriority;

+ (TXADLoadMode *)fromJson:(NSDictionary *)object;

@end
