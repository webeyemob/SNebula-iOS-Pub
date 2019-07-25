//
//  WeMobBannerAdapterHelper.h

//
//  Created by Mathew on 2019/7/14.
//  Copyright © 2019年 WeMobSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WeMobILineItem.h"

@interface WeMobBannerAdapterHelper : NSObject

-(void)trackViewImpl:(UIView *)view forLineItem:(WeMobILineItem *)lineItem;
-(void)stopTrack;

@end
