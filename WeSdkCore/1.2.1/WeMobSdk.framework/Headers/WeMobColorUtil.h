//
//  WeMobColorUtil.h

//
//  Created by Mathew on 2019/6/23.
//

#import <Foundation/Foundation.h>
#import "UIKit/UIKit.h"

@interface WeMobColorUtil : NSObject

+ (UIColor *)colorWithHex:(NSInteger)hex;
+ (UIColor *)colorWithHex:(NSInteger)hex alpha:(CGFloat)alpha;

+ (UIColor *)colorWithHexString:(NSString *)hexString;
+ (UIColor *)colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha;

@end
