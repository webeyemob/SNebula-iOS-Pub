//
//  WeMobDspConstant.h

//
//  Created by liuguangren on 2019/6/10.
//  Copyright © 2019 WeMob. All rights reserved.
//

#ifndef WeMobDspConstant_h
#define WeMobDspConstant_h

#ifdef DEBUG
#   define WeLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#   define WeLog(...)
#endif

#define SCREEN_HEIGHT [[UIScreen mainScreen]bounds].size.height
#define SCREEN_WIDTH [[UIScreen mainScreen]bounds].size.width

typedef void (^WeMobDspCommonVoidBlock)(void);

#endif /* WeMobDspConstant_h */
