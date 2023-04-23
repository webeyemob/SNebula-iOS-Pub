//
//  TXADAdType.h
//  Created by TaurusXAds on 2019/6/15.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, TXADAdTypeId) {
    TXAD_ADTYPE_UNKNOWN = 0,
    TXAD_ADTYPE_BANNER = 1,
    TXAD_ADTYPE_INTERSTITIAL = 2,
    TXAD_ADTYPE_NATIVE = 3,
    TXAD_ADTYPE_REWARDED_VIDEO = 4,
    TXAD_ADTYPE_MIXVIEW = 5,
    TXAD_ADTYPE_MIXFULLSCREEN = 6,
    TXAD_ADTYPE_SPLASH = 7,
    TXAD_ADTYPE_FEEDLIST = 8
};

@interface TXADAdType : NSObject

@property int type;

- (id)initWithType:(int)type;
- (NSString *)getName;

- (BOOL)canIncludeBanner;

@end
