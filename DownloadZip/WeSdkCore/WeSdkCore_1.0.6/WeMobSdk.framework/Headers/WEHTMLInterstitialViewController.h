//
//  MPHTMLInterstitialViewController.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the MoPub SDK License Agreement
//  http://www.mopub.com/legal/sdk-license-agreement/
//

#import <UIKit/UIKit.h>
#import "WeWebView.h"
#import "WEInterstitialViewController.h"


@interface WEHTMLInterstitialViewController : WEInterstitialViewController

- (void)loadInterstitalView:(NSString *)htmlContent;

- (void)presentInterstitialFromViewController:(UIViewController *)controller complete:(void(^)(NSError *))complete;

@end
