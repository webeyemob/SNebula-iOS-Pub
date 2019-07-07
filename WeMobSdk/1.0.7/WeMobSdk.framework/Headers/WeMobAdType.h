//
//  AdType.h
//  WeMobSdk
//
//  Created by wanghang on 2019/6/15.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, WeMobAdTypeId) {
    Unknown = 0,
    Banner = 1,
    Interstitial = 2,
    Native = 3,
    Rewarded_Video = 4,
    MixView = 5,
    MixFullScreen = 6,
    Splash = 7,
    FeedList = 8
};

@interface WeMobAdType : NSObject

@property int type;

- (id)initWithType:(int)type;
- (NSString *)getName;

@end
