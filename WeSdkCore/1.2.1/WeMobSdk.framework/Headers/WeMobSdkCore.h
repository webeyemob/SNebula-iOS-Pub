//
//  SdkCore.h

//

@interface WeMobSdkCore : NSObject {
    @private NSTimer *timer;
}

@property(readonly) BOOL isInited;
@property(readonly) NSString* appId;
@property BOOL gdprConsent;

@property(readonly) BOOL testMode;
@property(readonly) BOOL logEnable;

+ (WeMobSdkCore *)getInstance;

- (void)init:(NSString *) appId;
- (NSString *)getAppId;

- (void)setTestMode:(BOOL)testMode;

- (void)setLogEnable:(BOOL)enable;
- (BOOL)isLogEnable;

@end
