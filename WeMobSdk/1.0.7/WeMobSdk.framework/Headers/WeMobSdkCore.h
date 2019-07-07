//
//  SdkCore.h
//  WeMobSdk
//

@interface WeMobSdkCore : NSObject {
    @private NSTimer *timer;
}

@property(readonly) BOOL isInited;
@property(readonly) NSString* appId;
@property(readonly) BOOL testMode;
@property BOOL gdprConsent;

+ (WeMobSdkCore *)getInstance;

- (void)init:(NSString *) appId;
- (void)setTestMode:(BOOL)testMode;
- (NSString *)getAppId;
    
@end
