//
//  MPHTMLInterstitialViewController.h
//

//  
//  
//

#import <UIKit/UIKit.h>
#import "WeWebView.h"
#import "WEInterstitialViewController.h"


@interface WEHTMLInterstitialViewController : WEInterstitialViewController

- (void)loadInterstitalView:(NSString *)htmlContent;

- (void)presentInterstitialFromViewController:(UIViewController *)controller complete:(void(^)(NSError *))complete;

@end
