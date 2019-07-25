//
//  WeMobCreativeGlobal.h

//
//  Created by tamefox on 2019/6/19.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef WeMob_ANIMATED
#define WeMob_ANIMATED YES
#endif

UIInterfaceOrientation WeMobCreativeInterfaceOrientation(void);
UIWindow *WeMobCreativeKeyWindow(void);
CGFloat WeMobCreativeStatusBarHeight(void);
CGRect WeMobCreativeApplicationFrame(BOOL includeSafeAreaInsets);
CGRect WeMobCreativeScreenBounds(void);
CGSize WeMobCreativeScreenResolution(void);
CGFloat WeMobCreativeDeviceScaleFactor(void);
NSDictionary *WeMobCreativeDictionaryFromQueryString(NSString *query);
NSString *WeMobCreativeSHA1Digest(NSString *string);
NSArray *WeMobCreativeConvertStringArrayToURLArray(NSArray *strArray);
NSString *WeMobCreativeResourcePathForResource(NSString *resourceName);
NSString *WeMobCreativeReplaceSpecialCharacters(NSString *origin);
////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 * Availability constants.
 */

#define WeMob_IOS_7_0  70000
#define WeMob_IOS_8_0  80000
#define WeMob_IOS_9_0  90000

////////////////////////////////////////////////////////////////////////////////////////////////////

typedef NS_ENUM(NSUInteger, WeMobCreativeInterstitialOrientationType) {
    WeMobCreativeInterstitialOrientationTypePortrait,
    WeMobCreativeInterstitialOrientationTypeLandscape,
    WeMobCreativeInterstitialOrientationTypeAll,
};

UIInterfaceOrientationMask WeMobCreativeInterstitialOrientationTypeToUIInterfaceOrientationMask(WeMobCreativeInterstitialOrientationType type);

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface UIDevice (WeMobCreativeAdditions)

- (NSString *)dsp_hardwareDeviceName;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface UIApplication (WeMobCreativeAdditions)

// Correct way to hide/show the status bar on pre-ios 7.
- (void)dsp_preIOS7setApplicationStatusBarHidden:(BOOL)hidden;
- (BOOL)dsp_supportsOrientationMask:(UIInterfaceOrientationMask)orientationMask;
- (BOOL)dsp_doesOrientation:(UIInterfaceOrientation)orientation matchOrientationMask:(UIInterfaceOrientationMask)orientationMask;

@end

