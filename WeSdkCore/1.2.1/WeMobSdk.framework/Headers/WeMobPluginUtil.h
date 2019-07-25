//
//  WeMobPluginUtil.h

//
//  用于 Unity 的工具类。

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "WeMobTypes.h"
#import "WeMobBannerAdPosition.h"

@interface WeMobPluginUtil : NSObject

/// 当全屏广告展示时，Unity App 是否需要暂停。
@property(class) BOOL pauseOnBackground;

/// 将 C 语言 UTF8 编码的 byte Array 转为 NSString；如果 bytes 为 NULL，返回 nil。
+ (NSString *)WeMobStringFromUTF8String:(const char *)bytes;

/// 返回 Unity 的 ViewController。
+ (UIViewController *)unityGLViewController;

/// 获取 iOS 当前的 ViewController。
+ (UIViewController *)iOSViewController;

/// 将 view 放在 parentView 的 position 位置。
/// WeMobBannerAdPosition.
+ (void)positionView:(UIView *)view inParentView:(UIView *)parentView adPosition:(WeMobBannerAdPosition)position;

/// 将 view 放在 parentView 的 (x, y) 位置。
+ (void)positionView:(UIView *)view inParentView:(UIView *)parentView withX:(int)x andY:(int)y;

/// Returns a GADAdSize for a specified width and height.
//+ (GADAdSize)adSizeForWidth:(CGFloat)width height:(CGFloat)height;

/// If requesting smart banner landscape, returns the custom size for landscape smart banners which
/// is full width of the safe area and auto height. Assumes that the application window is visible.
/// If requesting any other ad size, returns the un-modified ad size.
//+ (GADAdSize)safeAdSizeForAdSize:(GADAdSize)adSize;

@end
