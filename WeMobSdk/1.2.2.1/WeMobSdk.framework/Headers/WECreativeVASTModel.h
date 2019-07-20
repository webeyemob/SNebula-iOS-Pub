//
//  WECreativeVASTModel.h
//

//  Licensed under the WeSdk License Agreement

//

#import <Foundation/Foundation.h>

@protocol WECreativeObjectMapper <NSObject>

- (id)mappedObjectFromSourceObject:(id)object;
- (Class)requiredSourceObjectClass;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

id<WECreativeObjectMapper> WEParseArrayOf(id<WECreativeObjectMapper> internalMapper);
id<WECreativeObjectMapper> WEParseURLFromString(void);
id<WECreativeObjectMapper> WEParseNumberFromString(NSNumberFormatterStyle numberStyle);
id<WECreativeObjectMapper> WEParseTimeIntervalFromDurationString(void);
id<WECreativeObjectMapper> WEParseClass(Class destinationClass);

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WECreativeNSStringToNSURLMapper : NSObject <WECreativeObjectMapper>
@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WECreativeDurationStringToTimeIntervalMapper : NSObject <WECreativeObjectMapper>
@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WECreativeStringToNumberMapper : NSObject <WECreativeObjectMapper>

- (id)initWithNumberStyle:(NSNumberFormatterStyle)numberStyle;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WECreativeClassMapper : NSObject <WECreativeObjectMapper>

- (id)initWithDestinationClass:(Class)destinationClass;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WECreativeNSArrayMapper : NSObject <WECreativeObjectMapper>

- (id)initWithInternalMapper:(id<WECreativeObjectMapper>)mapper;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface WECreativeVASTModel : NSObject

+ (NSDictionary *)modelMap;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (id)generateModelFromDictionaryValue:(id)value modelProvider:(id(^)(id))provider;
- (NSArray *)generateModelsFromDictionaryValue:(id)value modelProvider:(id(^)(id))provider;

@end
