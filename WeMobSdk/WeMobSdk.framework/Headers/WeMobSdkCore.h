//
//  SdkCore.h
//  WeMobSdk
//

@interface WeMobSdkCore : NSObject {
    @private NSTimer *timer;
}

@property(readonly) BOOL isInited;
@property(readonly) NSString* appId;
@property BOOL gdprConsent;

+ (WeMobSdkCore *)getInstance;

- (void)init:(NSString *) appId;
- (NSString *)getAppId;
    
@end
