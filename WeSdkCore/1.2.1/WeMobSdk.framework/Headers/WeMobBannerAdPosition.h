//
//  WeMobBannerAdPosition.h

//

/// Positions to place an banner ad on Unity Platform.
typedef NS_ENUM(NSInteger, WeMobBannerAdPosition) {
    WeMobBannerAdPos_Custom = -1,      // Custom ad position: (x,y)
    WeMobBannerAdPos_Top = 0,          // Top of screen.
    WeMobBannerAdPos_Bottom = 1,       // Bottom of screen.
    WeMobBannerAdPos_TopLeft = 2,      // Top left of screen.
    WeMobBannerAdPos_TopRight = 3,     // Top right of screen.
    WeMobBannerAdPos_BottomLeft = 4,   // Bottom left of screen.
    WeMobBannerAdPos_BottomRight = 5,  // Bottom right of screen.
    WeMobBannerAdPos_Center = 6        // Center of screen.
};
