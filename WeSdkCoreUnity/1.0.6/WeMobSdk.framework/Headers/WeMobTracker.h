//
//  WeMobTracker.h
//  WeMobSdk
//
//  Created by wanghang on 2019/6/16.
//

typedef void (^trackCallback)(BOOL success);

@interface WeMobTracker : NSObject

+ (WeMobTracker *)getInstance;

-(void) track:(NSString *)url;
-(void) sendLocalFailedTrack;

@end
