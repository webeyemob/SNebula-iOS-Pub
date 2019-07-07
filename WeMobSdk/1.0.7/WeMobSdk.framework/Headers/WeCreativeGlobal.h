//
//  WeCreativeGlobal.h
//  WeDSPDemo
//
//  Created by tangzheng on 2019/6/19.
//  Copyright © 2019 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef WE_ANIMATED
#define WE_ANIMATED YES
#endif

UIInterfaceOrientation WECreativeInterfaceOrientation(void);
UIWindow *WECreativeKeyWindow(void);
CGFloat WECreativeStatusBarHeight(void);
CGRect WECreativeApplicationFrame(BOOL includeSafeAreaInsets);
CGRect WECreativeScreenBounds(void);
CGSize WECreativeScreenResolution(void);
CGFloat WECreativeDeviceScaleFactor(void);
NSDictionary *WECreativeDictionaryFromQueryString(NSString *query);
NSString *WECreativeSHA1Digest(NSString *string);
NSArray *WECreativeConvertStringArrayToURLArray(NSArray *strArray);
NSString *WECreativeResourcePathForResource(NSString *resourceName);
NSString *WECreativeReplaceSpecialCharacters(NSString *origin);
////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 * Availability constants.
 */

#define WE_IOS_7_0  70000
#define WE_IOS_8_0  80000
#define WE_IOS_9_0  90000

////////////////////////////////////////////////////////////////////////////////////////////////////

typedef NS_ENUM(NSUInteger, WECreativeInterstitialOrientationType) {
    WECreativeInterstitialOrientationTypePortrait,
    WECreativeInterstitialOrientationTypeLandscape,
    WECreativeInterstitialOrientationTypeAll,
};

UIInterfaceOrientationMask WECreativeInterstitialOrientationTypeToUIInterfaceOrientationMask(WECreativeInterstitialOrientationType type);

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface UIDevice (WECreativeAdditions)

- (NSString *)mp_hardwareDeviceName;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface UIApplication (WECreativeAdditions)

// Correct way to hide/show the status bar on pre-ios 7.
- (void)mp_preIOS7setApplicationStatusBarHidden:(BOOL)hidden;
- (BOOL)mp_supportsOrientationMask:(UIInterfaceOrientationMask)orientationMask;
- (BOOL)mp_doesOrientation:(UIInterfaceOrientation)orientation matchOrientationMask:(UIInterfaceOrientationMask)orientationMask;

@end

