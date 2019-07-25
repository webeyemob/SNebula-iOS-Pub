//
//  WeMobBaseInterstitial.h

//
//  Created by Mathew on 2019/6/27.
//  Copyright © 2019年 WeMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WeMobILineItem.h"
#import "WeMobInterstitialAdapterDelegate.h"

@interface WeMobBaseInterstitial : NSObject {
	@private id<WeMobInterstitialAdapterDelegate> delegate;
	@protected NSString *TAG;
}

-(id)initWithLineItem:(WeMobILineItem *)lineItem andDelegate:(id<WeMobInterstitialAdapterDelegate>)delegate;

-(void)log:(NSString *)message;

-(id<WeMobInterstitialAdapterDelegate>)getDelegate;

-(void)loadAd;

-(BOOL)isReady;

-(void)show:(UIViewController *)viewController;

-(void)destroy;

@end
