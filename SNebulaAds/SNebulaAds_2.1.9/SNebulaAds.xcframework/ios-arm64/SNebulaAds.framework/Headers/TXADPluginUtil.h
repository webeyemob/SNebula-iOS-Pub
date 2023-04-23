//
//  TXADPluginUtil.h

//
//  用于 Unity 的工具类。

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "TXADTypes.h"
#import "TXADUnityAdPos.h"

@interface TXADPluginUtil : NSObject

/// 当全屏广告展示时，Unity App 是否需要暂停。
@property(class) BOOL pauseOnBackground;

/// 将 C 语言 UTF8 编码的 byte Array 转为 NSString；如果 bytes 为 NULL，返回 nil。
+ (NSString *)TXADStringFromUTF8String:(const char *)bytes;

/// 返回 Unity 的 ViewController。
+ (UIViewController *)unityGLViewController;

/// 获取 iOS 当前的 ViewController。
+ (UIViewController *)iOSViewController;

/// 将 view 放在 parentView 的 position 位置。
/// TXADUnityAdPosition.
+ (void)positionView:(UIView *)view inParentView:(UIView *)parentView adPosition:(TXADUnityAdPosition)position;

/// 将 view 放在 parentView 的 (x, y) 位置。
+ (void)positionView:(UIView *)view inParentView:(UIView *)parentView withX:(int)x andY:(int)y;

/// 将 view 放在 parentView 的 position 位置，向左偏移 x，想下偏移 y
+ (void)positionView:(UIView *)view inParentView:(UIView *)parentView adPosition:(TXADUnityAdPosition)position x:(int)x y:(int)y;

@end
