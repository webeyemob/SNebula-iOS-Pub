//
//  WeConstant.h
//  WeDSPDemo
//
//  Created by liuguangren on 2019/6/10.
//  Copyright © 2019 WE. All rights reserved.
//

#ifndef WeConstant_h
#define WeConstant_h

#ifdef DEBUG
#   define WeLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#   define WeLog(...)
#endif

#define SCREEN_HEIGHT [[UIScreen mainScreen]bounds].size.height
#define SCREEN_WIDTH [[UIScreen mainScreen]bounds].size.width

typedef void (^WECommonVoidBlock)(void);

#endif /* WeConstant_h */
