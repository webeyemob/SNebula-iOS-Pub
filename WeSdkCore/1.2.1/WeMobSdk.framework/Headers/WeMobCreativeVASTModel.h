//
//  WeMobCreativeVASTModel.h
//

//  Licensed under the WeMob License Agreement

//

#import <Foundation/Foundation.h>

@protocol WeMobCreativeObjectMapper <NSObject>

- (id)mappedObjectFromSourceObject:(id)object;
- (Class)requiredSourceObjectClass;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

id<WeMobCreativeObjectMapper> WeMobParseArrayOf(id<WeMobCreativeObjectMapper> internalMapper);
id<WeMobCreativeObjectMapper> WeMobParseURLFromString(void);
id<WeMobCreativeObjectMapper> WeMobParseNumberFromString(NSNumberFormatterStyle numberStyle);
id<WeMobCreativeObjectMapper> WeMobParseTimeIntervalFromDurationString(void);
id<WeMobCreativeObjectMapper> WeMobParseClass(Class destinationClass);

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WeMobCreativeNSStringToNSURLMapper : NSObject <WeMobCreativeObjectMapper>
@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WeMobCreativeDurationStringToTimeIntervalMapper : NSObject <WeMobCreativeObjectMapper>
@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WeMobCreativeStringToNumberMapper : NSObject <WeMobCreativeObjectMapper>

- (id)initWithNumberStyle:(NSNumberFormatterStyle)numberStyle;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WeMobCreativeClassMapper : NSObject <WeMobCreativeObjectMapper>

- (id)initWithDestinationClass:(Class)destinationClass;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WeMobCreativeNSArrayMapper : NSObject <WeMobCreativeObjectMapper>

- (id)initWithInternalMapper:(id<WeMobCreativeObjectMapper>)mapper;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WeMobCreativeVASTModel : NSObject

+ (NSDictionary *)modelMap;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (id)generateModelFromDictionaryValue:(id)value modelProvider:(id(^)(id))provider;
- (NSArray *)generateModelsFromDictionaryValue:(id)value modelProvider:(id(^)(id))provider;

@end
