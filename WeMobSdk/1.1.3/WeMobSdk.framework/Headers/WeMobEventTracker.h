//
//  WeMobEventTracker.h
//  WeMobSdk
//
//  Created by wanghang on 2019/6/16.
//

typedef void (^trackCallback)(BOOL success);

@interface WeMobEventTracker : NSObject

+ (WeMobEventTracker *)getInstance;

-(void) track:(NSString *)url;
-(void) sendLocalFailedTrack;

@end
