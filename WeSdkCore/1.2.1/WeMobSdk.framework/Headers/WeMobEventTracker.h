//
//  WeMobEventTracker.h

//
//  Created by Mathew on 2019/6/16.
//

typedef void (^trackCallback)(BOOL success);

@interface WeMobEventTracker : NSObject

+ (WeMobEventTracker *)getInstance;

-(void) track:(NSString *)url;
-(void) trackWithDomain:(NSString *)url;
-(void) sendLocalFailedTrack;

@end
