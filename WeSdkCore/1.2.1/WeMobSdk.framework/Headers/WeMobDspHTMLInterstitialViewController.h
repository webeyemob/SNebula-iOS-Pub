//
//  MPHTMLInterstitialViewController.h
//

//  
//  
//

#import <UIKit/UIKit.h>
#import "WeMobDspWebView.h"
#import "WeMobDspInterstitialViewController.h"


@interface WeMobDspHTMLInterstitialViewController : WeMobDspInterstitialViewController

- (void)loadInterstitalView:(NSString *)htmlContent;

- (void)presentInterstitialFromViewController:(UIViewController *)controller complete:(void(^)(NSError *))complete;

@end
