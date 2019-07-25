//
//  WeMobCreativeReplayView.h
//

//  Licensed under the WeMob License Agreement
//

#import <UIKit/UIKit.h>
#import "WeMobCreativePlayerView.h"

@class WeMobCreativeReplayView;

typedef void (^WeMobCreativeBReplayActionBlock)(WeMobCreativeReplayView *replayView);

@interface WeMobCreativeReplayView : UIView

@property (nonatomic, copy) WeMobCreativeBReplayActionBlock actionBlock;

- (instancetype)initWithFrame:(CGRect)frame displayMode:(WeMobCreativePlayerDisplayMode)displayMode;

@end
