//
//  WeTrackGlobal.h

//
//  Created by tamefox on 2019/6/19.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef WeMob_ANIMATED
#define WeMob_ANIMATED YES
#endif

BOOL WeMobDspViewIsVisible(UIView *view);
BOOL WeMobViewIntersectsParentWindowWithPercent(UIView *view, CGFloat percentVisible);


