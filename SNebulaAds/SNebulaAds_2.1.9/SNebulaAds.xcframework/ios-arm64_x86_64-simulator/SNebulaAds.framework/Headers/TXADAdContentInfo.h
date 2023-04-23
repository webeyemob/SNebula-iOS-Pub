//
//  TXADAdContentInfo.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2019/11/28.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADILineItem.h"

typedef NS_ENUM(int, TXADAdIsApp) {
    TXAD_AD_ISAPP_UNKNOWN = 0,  // unknown
    TXAD_AD_ISAPP_YES = 1,      //yes
    TXAD_AD_ISAPP_NO = 2        //no
    
};

typedef NS_ENUM(int, TXADAdContentType) {
    TXAD_AD_CONTENT_TYPE_UNKNOWN = 0,          // unknown
    TXAD_AD_CONTENT_TYPE_LARGE_IMAGE = 1,      //large image
    TXAD_AD_CONTENT_TYPE_SMALL_IMAGE = 2,      //small image
    TXAD_AD_CONTENT_TYPE_SMALL_IMAGE_VERTICAL = 3, //small image vertical
    TXAD_AD_CONTENT_TYPE_GROUP_IMAGE = 4,       //group image
    TXAD_AD_CONTENT_TYPE_VIDEO                  //video
};

typedef NS_ENUM(int, TXADAdRenderType) {
    TXAD_AD_RENDER_UNKNOWN = 0, // unknown
    TXAD_AD_RENDER_CUSTOM = 1,  // custom
    TXAD_AD_RENDER_EXPRESS = 2 // express
};

@interface TXADAdContentInfo : NSObject

@property(nonatomic, strong) TXADILineItem *lineItem;

@property(nonatomic, strong) NSString *title;
@property(nonatomic, strong) NSString *subTitle;
@property(nonatomic, strong) NSString *body;
@property(nonatomic, strong) NSString *advertiser;
@property(nonatomic, strong) NSString *callToAction;

@property(nonatomic) TXADAdIsApp isApp;
@property(nonatomic) TXADAdContentType contentType;
@property(nonatomic) TXADAdRenderType renderType;
@property(nonatomic) int adMode;

@property(nonatomic, strong) NSString *iconUrl;
@property(nonatomic, strong) NSString *imageUrl;

@property(nonatomic, strong) NSArray <NSString *> *imageUrls;    //取代imageUrl

@property(nonatomic, strong) NSString *videoUrl;
@property(nonatomic) int videoDuration;

@property(nonatomic, strong) NSString *clickUrl;

@property(nonatomic, strong) NSString *rating;
@property(nonatomic, strong) NSString *store;
@property(nonatomic, strong) NSString *price;

@property(nonatomic,strong) id networkAd;   //network广告对象

@end


@interface TXADBannerData : TXADAdContentInfo

@end

@interface TXADNativeData : TXADAdContentInfo

@end

@interface TXADInterstitialData : TXADAdContentInfo

@end

@interface TXADRewardedVideoData : TXADAdContentInfo

@end

@interface TXADFeedData : TXADAdContentInfo

@end

@interface TXADSplashData : TXADAdContentInfo

@end
