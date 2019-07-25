//
//  WeMobAdapterStatus.h

//

#import "WeMobAdError.h"

@interface WeMobAdapterStatus : NSObject {    
    @private int errorTime; // 加载出错，目前不等待
    @private int status; // 当前状态
    @private int lastStatus; // 上个状态
    @private int requestTimeOut; // 请求超时时间
    @private int cacheTimeOut; // 缓存超时
    @private int freezeTime; // 设置的无填充/请求过于频繁等待间隔
    @private long freezeDelayTime; // 实际的无填充等待间隔，为 mFreezeTime 的整数倍
    @private long errorDelayTime; // 实际的加载出错等待时间，为 mErrorTime 的整数倍
    
    @private long long startLoadTime; // 开始加载时间
    @private long long loadedTime; // 加载成功的时间
    @private long long loadNoFillTime; // 加载无填充的时间
    @private long long loadErrorTime; // 加载出错的时间
    @private long long loadFailedTime; // 加载失败时间
}

-(id) initWithRequestTimeOut:(int)requestTimeOut cacheTimeOut:(int)cacheTimeOut freezeTime:(int)freezeTime;

-(void)setErrorDelayTime:(int)time;

-(void)setFreezeTime:(int)time;

-(BOOL)hasSetRequestTimeOut;

-(BOOL)hasSetCacheTimeOut;

-(BOOL)hasSetNoFillTimeOut;

// Status
- (int)getStatus;
- (void)setStatus:(int)status;
- (int)getLastStatus;
- (void)backToLastStatus;

// IDLE
- (BOOL)isIdle;
- (BOOL)isLastIdle;
- (void)setIdle;

// LOADING
- (BOOL)isLoading;
- (BOOL)isLastLoading;
- (void)setLoading;

// LOADED
- (BOOL)isLoaded;
- (BOOL)isLastLoaded;
- (void)setLoaded;
- (void)setLoadedAutoRequest;
- (int)getLoadedSpentTime;

- (BOOL)isReady;

// CONSUMED
- (BOOL)isConsumed;
- (BOOL)isLastConsumed;
- (void)setConsumed;

// 是否请求超时
- (BOOL)isRequestTimeOut;

// 是否缓存超时
- (BOOL)isCacheTimeOut;

// 设置无填充时间
- (void)setNoFill;

// 设置加载出错时间
- (void)setError;

// 是否过了无填充间隔
-(BOOL) hasPassNoFillInterval;

// 是否过了加载出错间隔
- (BOOL) hasPassErrorInterval;

// Failed，回到上一个状态；如果是无填充，切换到无填充状态
- (void) setFailed:(WeMobAdError *)adError;

- (BOOL) needFreeze:(WeMobAdError *)adError;

// 加载失败耗时
- (int) getFailedSpentTime;

- (BOOL) canLoad;

@end
