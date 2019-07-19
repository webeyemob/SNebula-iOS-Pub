//
//  WeTrackGlobal.h
//  WeDSPDemo
//
//  Created by tamefox on 2019/6/19.
//  Copyright © 2019 WeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef WE_ANIMATED
#define WE_ANIMATED YES
#endif

BOOL WEViewIsVisible(UIView *view);
BOOL WEViewIntersectsParentWindowWithPercent(UIView *view, CGFloat percentVisible);


