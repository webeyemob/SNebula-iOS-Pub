//
//  WeMobGlobal.h

//
//  Created by Mathew on 2019/6/13.
//

#import <Foundation/Foundation.h>

@interface WeMobGlobal : NSObject

- (void)showDesc;
- (NSString *)getHostUrl;
- (NSString *)getEventUrl;
- (NSString *)getCrashUrl;
- (NSString *)getTrackUrl;
- (int)getRefreshInterval;

+ (WeMobGlobal *)fromJson: (NSDictionary *)jsonObject;
+ (WeMobGlobal *)getDefault;

@end
