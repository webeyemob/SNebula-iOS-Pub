//
//  TXADUnityAdPos.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2020/3/29.
//  Copyright © 2020 TaurusXAds. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TXADUnityAdPosition) {
    TXADUnityAdPos_Custom = -1,      // Custom ad position: (x,y)
    TXADUnityAdPos_Top = 0,          // Top of screen.
    TXADUnityAdPos_Bottom = 1,       // Bottom of screen.
    TXADUnityAdPos_TopLeft = 2,      // Top left of screen.
    TXADUnityAdPos_TopRight = 3,     // Top right of screen.
    TXADUnityAdPos_BottomLeft = 4,   // Bottom left of screen.
    TXADUnityAdPos_BottomRight = 5,  // Bottom right of screen.
    TXADUnityAdPos_Center = 6        // Center of screen.
};

@interface TXADUnityAdPos : NSObject

+ (NSString *)getPositionDesc:(TXADUnityAdPosition)position;

@end

NS_ASSUME_NONNULL_END
