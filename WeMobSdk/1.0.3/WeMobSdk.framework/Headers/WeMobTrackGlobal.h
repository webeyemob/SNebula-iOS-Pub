//
//  WeTrackGlobal.h
//  WeDSPDemo
//
//  Created by 汤正 on 2019/6/19.
//  Copyright © 2019 WE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef WE_ANIMATED
#define WE_ANIMATED YES
#endif

BOOL WEViewIsVisible(UIView *view);
BOOL WEViewIntersectsParentWindowWithPercent(UIView *view, CGFloat percentVisible);


