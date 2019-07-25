//
//  WeMobMediationLoader.h

//
//  Created by Mathew on 2019/6/15.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, WeMobMediationLoadModeId) {
    SERIAL = 1,
    PARALLEL = 2,
    SHUFFLE = 3
};

@interface WeMobMediationLoadMode : NSObject

@property int mode;
+(WeMobMediationLoadMode *)fromMode:(int)mode;

-(NSString *)getModeName;
-(BOOL) isShuffle;

@end
