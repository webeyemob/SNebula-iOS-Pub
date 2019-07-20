//
//  WeMobGlobal.h
//  WeMobSdk
//
//  Created by Mathew on 2019/6/13.
//

// 全局配置
//{
//  "host_list": ["http:\/\/sdk.wesdk.co\/"],
//  "event_list": ["http:\/\/event.wesdk.co\/"],
//  "crash_list": ["http:\/\/event.wesdk.co\/v1\/crash\/crash"],
//  "track_list": ["http:\/\/track.wesdk.co\/"],
//  "refresh_interval": 900,
//  "rtb_token": "d4cc8ab8305380d3a9149cacdfdfcac0"
//}

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
