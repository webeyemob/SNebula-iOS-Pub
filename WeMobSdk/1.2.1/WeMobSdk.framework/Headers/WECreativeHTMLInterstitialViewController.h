//
//  WECreativeHTMLInterstitialViewController.h
//

//  Licensed under the WeSdk License Agreement
//

#import <UIKit/UIKit.h>
#import "WeCreativeWebView.h"
#import "WECreativeInterstitialViewController.h"


@interface WECreativeHTMLInterstitialViewController : WECreativeInterstitialViewController

- (void)loadHtmlContent:(NSString *)htmlContent;

//- (void)presentInterstitialFromViewController:(UIViewController *)controller complete:(void(^)(NSError *))complete;

@end
