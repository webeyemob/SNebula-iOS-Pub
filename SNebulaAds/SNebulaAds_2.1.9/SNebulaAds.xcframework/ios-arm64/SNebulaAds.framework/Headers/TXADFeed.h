//
//  TXADFeed.h
//  TXADSdk
//
//  Created by TaurusXAds on 2019/9/19.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TXADNativeAdLayout.h"

@class TXADCustomFeedList<T>;

/*!
@enum TXADFeedType
@abstract feed type in feedlist ad
@constant TXAD_FEEDTYPE_UNKNOWN             unknown
@constant TXAD_FEEDTYPE_LARGE_IMAGE      large image
@constant TXAD_FEEDTYPE_SMALL_IMAGE      small image
@constant TXAD_FEEDTYPE_VERTICAL_IMAGE  vertical image
@constant TXAD_FEEDTYPE_GROUP_IMAGE     group image
@constant TXAD_FEEDTYPE_VIDEO                     video
*/
typedef NS_ENUM(NSUInteger, TXADFeedType) {
    TXAD_FEEDTYPE_UNKNOWN = 0, // unknown
    TXAD_FEEDTYPE_LARGE_IMAGE = 1, // large image
    TXAD_FEEDTYPE_SMALL_IMAGE = 2, // small image
    TXAD_FEEDTYPE_VERTICAL_IMAGE = 3, // vertical image
    TXAD_FEEDTYPE_GROUP_IMAGE = 4, // group image
    TXAD_FEEDTYPE_VIDEO = 5        // video
};

/*!
@class TXADFeed
@abstract TXAD custom feed object
*/
@interface TXADFeed<T> : NSObject 

/*!
@method initWithAdapter
@abstract init feed object with adapter and origin data
@param adapter  feedlist adapter
@param originData  origin data
@result TXADFeedType
*/
- (TXADFeed<T> *)initWithAdapter:(TXADCustomFeedList<T> *)adapter feed:(T)originData;

/*!
@method getOriginData
@abstract get origin data in feed
@result NSObject
*/
- (NSObject *)getOriginData;

/*!
@method getType
@abstract get feed type
@result TXADFeedType
*/
- (TXADFeedType)getType;

/*!
@method getAdView
@abstract get ad view in the adlayout
@param layout  ad layout
@result UIView ad view that can be display in screen
*/
- (UIView *)getAdView:(TXADNativeAdLayout *)layout;

/*!
@method getAdView
@abstract get ad view in the adlayout
@param layout  ad layout
@param sceneId scene ID
@result UIView ad view that can be display in screen
*/
- (UIView *)getAdView:(TXADNativeAdLayout *)layout sceneId:(NSString *)sceneId;

/*!
@method findFeedinArray
@abstract find feed in feed array
@param originData  originData
@param feedArray  feed array
@result TXADFeed
*/
+ (TXADFeed *)findFeed:(NSObject *)originData inArray:(NSMutableArray<TXADFeed *> *)feedArray;

/*!
@method getSceneId
@abstract get scene ID
@result scene ID
*/
- (NSString *)getSceneId;

/*!
@method getFeedIndex
@abstract get feed index
@result feed index
*/
- (int)getFeedIndex;


/*!
@method setFeedIndex
@abstract set feed index
@param feedIndex  feed index
*/
- (void)setFeedIndex:(int)feedIndex;

@end
