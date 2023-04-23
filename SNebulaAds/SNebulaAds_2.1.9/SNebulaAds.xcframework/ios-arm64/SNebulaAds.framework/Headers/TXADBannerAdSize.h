//
//  TXADBannerAdSize.h
//  size of TXADBannerAd

/*!
@enum TXADBannerAdSize
@abstract Ad size of Banner
@constant TXADBannerAdSize_Unknown   unknown
@constant TXADBannerAdSize_320_50     320*50
@constant TXADBannerAdSize_300_250   300*250
@constant TXADBannerAdSize_320_100   320*100
@constant TXADBannerAdSize_468_60     468*60
@constant TXADBannerAdSize_728_90     728*90
@constant TXADBannerAdSize_Smart       smart
*/

typedef NS_ENUM(NSInteger, TXADBannerAdSize) {
    TXADBannerAdSize_Unknown = -1,
    TXADBannerAdSize_320_50 = 1,
    TXADBannerAdSize_320_100 = 3,
    TXADBannerAdSize_300_250 = 2,
    TXADBannerAdSize_468_60 = 34,
    TXADBannerAdSize_728_90 = 11,
    TXADBannerAdSize_Smart = 71
};
