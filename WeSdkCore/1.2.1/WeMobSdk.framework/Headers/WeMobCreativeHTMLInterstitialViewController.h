//
//  WeMobCreativeHTMLInterstitialViewController.h
//

//  Licensed under the WeMob License Agreement
//

#import <UIKit/UIKit.h>
#import "WeMobCreativeWebView.h"
#import "WeMobCreativeInterstitialViewController.h"


@interface WeMobCreativeHTMLInterstitialViewController : WeMobCreativeInterstitialViewController

- (void)loadHtmlContent:(NSString *)htmlContent;

//- (void)presentInterstitialFromViewController:(UIViewController *)controller complete:(void(^)(NSError *))complete;

@end
