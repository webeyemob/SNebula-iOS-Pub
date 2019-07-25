//
//  WeMobBaseAdAdapter.h

//

#ifndef WeMobBaseAdAdapter_h
#define WeMobBaseAdAdapter_h

#import "WeMobAdapterStatus.h"
#import "WeMobILineItem.h"

@interface WeMobBaseAdAdapter : NSObject {
    @protected NSString *TAG;
}

-(int)getNetworkId;

-(void)updateLineItem:(WeMobILineItem *)lineItem;

-(WeMobILineItem *)getLineItem;

-(BOOL)innerCanLoad;

/**
 * 加载广告。
 *
 * @return YES-执行了加载；NO-当前无法加载。
 */
-(BOOL)innerLoadAd;

/**
 * 状态为 AdapterStatus.LOADED，并且广告有效。
 * 比如 Facebook 对每种广告提供了相应的方法来判断广告是否有效。
 */
-(BOOL)innerIsReady;

-(WeMobAdapterStatus *)getStatus;

-(void)innerDestroy;

-(void)log:(NSString *)message;

@end

#endif /* WeMobBaseAdAdapter_h */
