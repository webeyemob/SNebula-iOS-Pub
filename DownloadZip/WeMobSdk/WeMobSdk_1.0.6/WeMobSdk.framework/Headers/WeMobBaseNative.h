//
//  WeMobBaseNative.h
//  WeMobSdk
//
//  Created by wanghang on 2019/6/28.
//  Copyright © 2019年 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WeMobILineItem.h"
#import "WeMobNativeAdapterDelegate.h"
#import "WeMobNativeAdLayout.h"

@interface WeMobBaseNative : NSObject {
	@private id<WeMobNativeAdapterDelegate> delegate;
	@protected NSString *TAG;
}

-(id)initWithLineItem:(WeMobILineItem *)lineItem andDelegate:(id<WeMobNativeAdapterDelegate>)delegate;

-(void)log:(NSString *)message;

-(id<WeMobNativeAdapterDelegate>)getDelegate;

-(void)loadAd;

-(BOOL)isReady;

-(UIView *)getAdView:(WeMobNativeAdLayout *)layout;

-(void)destroy;

@end
