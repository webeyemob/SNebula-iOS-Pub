//
//  WECreativeAVPlayerView.h
//

//  Licensed under the WeSdk License Agreement
//  
//

#import <UIKit/UIKit.h>

@class AVPlayer;

@interface WECreativeAVPlayerView : UIView

@property (nonatomic) AVPlayer *player;
@property (nonatomic) NSString *videoGravity;

@end
