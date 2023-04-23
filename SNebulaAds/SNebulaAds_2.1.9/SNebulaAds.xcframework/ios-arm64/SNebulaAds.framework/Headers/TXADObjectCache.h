//
//  TXADObjectCache.h

//
// 缓存 Unity 仍然在引用的对象。

#import <Foundation/Foundation.h>

@interface TXADObjectCache : NSObject

+ (instancetype)sharedInstance;
@property(nonatomic, strong) NSMutableDictionary *references;

@end


// 返回用于查找 Unity 对象的 key。
@interface NSObject (TXADOwnershipAdditions)

- (NSString *)adsdk_referenceKey;

@end
