//
//  WeMobTracker.h
//  WeMobSdk
//
//  Created by 王航 on 2019/6/16.
//

typedef void (^trackCallback)(BOOL success);

@interface WeMobTracker : NSObject

+ (WeMobTracker *)getInstance;

-(void) track:(NSString *)url;
-(void) sendLocalFailedTrack;

@end
