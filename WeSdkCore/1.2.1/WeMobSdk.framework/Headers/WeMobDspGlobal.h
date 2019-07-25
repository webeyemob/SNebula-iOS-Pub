//
//  WeMobDspGlobal.h

//
//  Created by tamefox on 2019/6/19.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
#ifndef WeMob_ANIMATED
#define WeMob_ANIMATED YES
#endif

UIInterfaceOrientation WeMobDspInterfaceOrientation(void);
UIWindow *WeMobDspKeyWindow(void);
CGFloat WeMobDspStatusBarHeight(void);
CGRect WeMobDspApplicationFrame(BOOL includeSafeAreaInsets);
CGRect WeMobDspScreenBounds(void);
CGSize WeMobDspScreenResolution(void);
CGFloat WeMobDspDeviceScaleFactor(void);
NSDictionary *WeMobDspDictionaryFromQueryString(NSString *query);
NSString *WeMobDspSHA1Digest(NSString *string);
NSString *WeMobDspResourcePathForResource(NSString *resourceName);
NSArray *WeMobDspConvertStringArrayToURLArray(NSArray *strArray);
////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 * Availability constants.
 */

#define WeMob_IOS_7_0  70000
#define WeMob_IOS_8_0  80000
#define WeMob_IOS_9_0  90000

////////////////////////////////////////////////////////////////////////////////////////////////////

typedef NS_ENUM(NSUInteger, WeMobDspInterstitialCloseButtonStyle) {
    WeMobDspInterstitialCloseButtonStyleAlwaysVisible,
    WeMobDspInterstitialCloseButtonStyleAlwaysHidden,
    WeMobDspInterstitialCloseButtonStyleAdControlled,
};

typedef NS_ENUM(NSUInteger, WeMobDspInterstitialOrientationType) {
    WeMobDspInterstitialOrientationTypePortrait,
    WeMobDspInterstitialOrientationTypeLandscape,
    WeMobDspInterstitialOrientationTypeAll,
};

UIInterfaceOrientationMask WeMobInterstitialOrientationTypeToUIInterfaceOrientationMask(WeMobDspInterstitialOrientationType type);

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface UIDevice (WeMobDspAdditions)

- (NSString *)dsp_hardwareDeviceName;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface UIApplication (WeMobDspAdditions)

// Correct way to hide/show the status bar on pre-ios 7.
- (void)dsp_preIOS7setApplicationStatusBarHidden:(BOOL)hidden;
- (BOOL)dsp_supportsOrientationMask:(UIInterfaceOrientationMask)orientationMask;
- (BOOL)dsp_doesOrientation:(UIInterfaceOrientation)orientation matchOrientationMask:(UIInterfaceOrientationMask)orientationMask;

@end

NS_ASSUME_NONNULL_END
