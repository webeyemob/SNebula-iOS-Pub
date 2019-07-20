//
//  WeGlobal.h
//  WeDSPDemo
//
//  Created by tamefox on 2019/6/19.
//  Copyright © 2019 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
#ifndef WE_ANIMATED
#define WE_ANIMATED YES
#endif

UIInterfaceOrientation WEInterfaceOrientation(void);
UIWindow *WEKeyWindow(void);
CGFloat WEStatusBarHeight(void);
CGRect WEApplicationFrame(BOOL includeSafeAreaInsets);
CGRect WEScreenBounds(void);
CGSize WEScreenResolution(void);
CGFloat WEDeviceScaleFactor(void);
NSDictionary *WEDictionaryFromQueryString(NSString *query);
NSString *WESHA1Digest(NSString *string);
NSString *WEResourcePathForResource(NSString *resourceName);
NSArray *WEConvertStringArrayToURLArray(NSArray *strArray);
////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 * Availability constants.
 */

#define WE_IOS_7_0  70000
#define WE_IOS_8_0  80000
#define WE_IOS_9_0  90000

////////////////////////////////////////////////////////////////////////////////////////////////////

typedef NS_ENUM(NSUInteger, WEInterstitialCloseButtonStyle) {
    WEInterstitialCloseButtonStyleAlwaysVisible,
    WEInterstitialCloseButtonStyleAlwaysHidden,
    WEInterstitialCloseButtonStyleAdControlled,
};

typedef NS_ENUM(NSUInteger, WEInterstitialOrientationType) {
    WEInterstitialOrientationTypePortrait,
    WEInterstitialOrientationTypeLandscape,
    WEInterstitialOrientationTypeAll,
};

UIInterfaceOrientationMask WEInterstitialOrientationTypeToUIInterfaceOrientationMask(WEInterstitialOrientationType type);

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface UIDevice (WEAdditions)

- (NSString *)mp_hardwareDeviceName;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface UIApplication (WEAdditions)

// Correct way to hide/show the status bar on pre-ios 7.
- (void)mp_preIOS7setApplicationStatusBarHidden:(BOOL)hidden;
- (BOOL)mp_supportsOrientationMask:(UIInterfaceOrientationMask)orientationMask;
- (BOOL)mp_doesOrientation:(UIInterfaceOrientation)orientation matchOrientationMask:(UIInterfaceOrientationMask)orientationMask;

@end

NS_ASSUME_NONNULL_END
