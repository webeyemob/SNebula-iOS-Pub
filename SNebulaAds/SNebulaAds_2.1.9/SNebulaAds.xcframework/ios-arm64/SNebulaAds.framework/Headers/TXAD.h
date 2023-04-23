#import <Foundation/Foundation.h>
#import "TXADNetworkConfigs.h"
#import "TXADSegment.h"
#import "TXADNetwork.h"
#import "TXADLineItemFilter.h"
#import "TXADEventCallback.h"

typedef NS_ENUM(NSInteger, TXADGdprConsentStatus) {
    TXAD_GDPR_CONSENT_NO = -1, // gdpr set to no
    TXAD_GDPR_CONSENT_UNKNOWN = 0, // not set gdpr
    TXAD_GDPR_CONSENT_YES = 1  // gdpr set to yes
};

/*!
Class contains logic that applies to the SDK as a whole.
*/
@interface TXAD : NSObject

/*!
@brief Initialize SDK with App Id.
@param appId App ID in SDK platform.
*/
+ (void)initWithAppId:(NSString *)appId;

+ (BOOL)isInitialized;

/*!
 @brief Get the App Id used in initialization.
 @return NSString
 */
+ (NSString *)getAppId;

/*!
 @brief Set whether user consent GDPR. You can setGdprConsent at anytime if user changed their choices.
 @param consent YES if user consent, NO otherwise
 */
+ (void)setGdprConsent:(BOOL)consent;

/*!
 @brief Indicates whether user consent GDPR.
 @result BOOL
 */
+ (BOOL)isGdprConsent;

+ (TXADGdprConsentStatus)getGDPRConsentStatus;

/*!
 @brief Set whether to print log on Xcode console output.
 @param enable YES if print log, NO otherwise
 */
+ (void)setLogEnable:(BOOL)enable;

/*!
 @brief Indicates whether  to print log on Xcode console output.
 @result BOOL YES if print log, NO otherwise
 */
+ (BOOL)isLogEnable;

/*!
@brief Set whether to request test ads from Marketplace.
@warning Test mode will not effect Network ad requesting.
@param testMode YES if request test ads, NO otherwise
*/
+ (void)setTestMode:(BOOL)testMode;

/*!
@brief Indicates whether to request test ads from SDK.
@result BOOL YES if request test ads, NO otherwise
*/
+ (BOOL)isTestMode;

/*!
@brief set test server url  (just for specified developer)
@param url server url.
*/
+ (void)setTestServer:(NSString *)url;

/*!
@brief Get test server url
@result NSString
*/
+ (NSString *)getTestServer;

/*!
@brief Set all Network debug mode switch.
@param debugMode YES if debug mode, NO otherwise
*/
+ (void)setNetworkDebugMode:(BOOL)debugMode;

/**
@brief Set specified Network debug mode switch. This setting will override setting in setNetworkDebugMode() for this Network.
@param network Network
@param debugMode YES if debug mode, NO otherwise
 */
+ (void)setNetwork:(TXADNetworkId)network debugMode:(BOOL)debugMode;

/*!
@brief Indicates whether the Network is in debug mode.
@result BOOL YES if debug mode, NO otherwise
*/
+ (BOOL)isNetworkDebugMode:(TXADNetworkId)network;

/**
@brief Set all Network test mode switch.
@param testMode YES if test mode, NO otherwise
 */
+ (void)setNetworkTestMode:(BOOL)testMode;

/**
@brief Set specified Network test mode switch. This setting will override setting in setNetworkTestMode() for this Network.
@param testMode YES if test mode, NO otherwise
 */
+ (void)setNetwork:(TXADNetworkId)network testMode:(BOOL)testMode;

/*!
@brief Indicates whether the Network is in test mode.
@result BOOL YES if test mode, NO otherwise
*/
+ (BOOL)isNetworkTestMode:(TXADNetworkId)network;

/*!
 @brief Set global NetworkConfigs, the config will be sent to Network SDK.
 @warning Please set configs before load ads.
 @see TXADNetworkConfigs
 @param configs Global NetworkConfigs of Networks.
 */
+ (void)setGlobalNetworkConfigs:(TXADNetworkConfigs *)configs;

/*!
 @brief Get setted global NetworkConfigs.
 @result TXADNetworkConfigs
 */
+ (TXADNetworkConfigs *)getGlobalNetworkConfigs;

/*!
@brief Set user segment, SDK will request AdUnit Config using this segment.
@param segment TXADSegment include channel and customize value.
*/
+ (void)setSegment:(TXADSegment *)segment;

/*!
@brief Get Segment
@result TXADSegment
*/
+ (TXADSegment *)getSegment;

/*!
@brief Optional delegate object that will filter specifed LineItem in AdUnit.
@param lineItemFilter TXADLineItemFilter
*/
+ (void)setLineItemFilter:(id<TXADLineItemFilter>)lineItemFilter;

/*!
@brief Get LineItemFilter
@result TXADLineItemFilter
*/
+ (id<TXADLineItemFilter>)getLineItemFilter;

+ (NSString *)getUid;

/*!
@brief Get SDK Version.
@result version code
*/
+ (int)getSdkVersion;

+ (NSString *)parseVersionFromVersionString:(const unsigned char *)versionString;

+ (void)registerEventCallback:(id <TXADEventCallback>)callback;
+ (void)unRegisterEventCallback:(id <TXADEventCallback>)callback;
+ (NSMutableArray<id <TXADEventCallback>> *)getEventCallbackArray;

@end
