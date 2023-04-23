//
//  TXADNativeAdLayout.h
//  Created by TaurusXAds on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TXADInteractiveArea.h"

// set rating
typedef void (^ratingCallback)(double rating);

/*!
@class TXADNativeAdLayout
@abstract TXAD native ad layout object
*/
@interface TXADNativeAdLayout : NSObject

/*!
@property rootView
@abstract view for rendering all native ad
*/
@property UIView *rootView;

/*!
@property titleLabel
@abstract title label
*/
@property UILabel *titleLabel;

/*!
@property subTitleLabel
@abstract Label for rendering subtitle in native ad
*/
@property UILabel *subTitleLabel;

/*!
@property body Label
@abstract Label for rendering body in native ad
*/
@property UILabel *bodyLabel;

/*!
@property advertiserLabel
@abstract Label for rendering advertiser in native ad
*/
@property UILabel *advertiserLabel;

/*!
@property callToActionView
@abstract view for rendering callToAction in native ad, it can be UILabel or UIButton
*/
@property UIView *callToActionView;

/*!
@property iconView
@abstract view for rendering icon in native ad
*/
@property UIView *iconView;

/*!
@property mediaView
@abstract view for rendering media in native ad
*/
@property UIView *mediaView;

/*!
@property adChoicesView
@abstract view for rendering adChoices in native ad
*/
@property UIView *adChoicesView;

/*!
@property ratingLabel
@abstract label for rendering rating in native ad
*/
@property UILabel *ratingLabel;

/*!
@property ratingView
@abstract view for rendering rating in native ad
*/
@property UIView *ratingView;

/*!
@property ratingCallback
@abstract ratingCallback function for rating
*/
@property ratingCallback ratingCallback;

/*!
@property priceLabel
@abstract label for rendering price  in native ad
*/
@property UILabel *priceLabel;

/*!
@property storeLabel
@abstract label for rendering store in native ad
*/
@property UILabel *storeLabel;

/*!
@property customViews
@abstract Custom view for click ad
*/
@property NSArray<UIView *> *customViews;

/*!
@property interactiveArea
@abstract user interactive area
*/
@property TXADInteractiveArea *interactiveArea;

/*!
@method getRatingView
@abstract get rating view
@result ratingView
*/
-(UIView *)getRatingView;

/*!
@method setImage
@abstract set image view and url
@param imageView UIImageView
@param url NSString
*/
-(void)setImage:(UIImageView *)imageView withUrl:(NSString *)url;

/*!
@method hasTitle
@abstract Is there a title label in the layout
@result YES: has Title, NO: not has Title
*/
-(BOOL)hasTitle;

/*!
@method hasSubTitle
@abstract Is there a subTitle label in the layout
@result YES: has subTitle, NO: not has subTitle
*/
-(BOOL)hasSubTitle;

/*!
@method hasBody
@abstract Is there a body label in the layout
@result YES: has body, NO: not has body
*/
-(BOOL)hasBody;

/*!
@method hasAdvertiser
@abstract Is there a Advertiser label in the layout
@result YES: has Advertiser, NO: not has Advertiser
*/
-(BOOL)hasAdvertiser;

/*!
@method hasCallToAction
@abstract Is there a CallToAction view in the layout
@result YES: has CallToAction, NO: not has CallToAction
*/
-(BOOL)hasCallToAction;

/*!
@method hasIconView
@abstract Is there a IconViewin the layout
@result YES: has IconView, NO: not has IconView
*/
-(BOOL)hasIconView;

/*!
@method hasMediaView
@abstract Is there a MediaView in the layout
@result YES: has MediaView, NO: not has MediaView
*/
-(BOOL)hasMediaView;

/*!
@method hasAdChoicesView
@abstract Is there a AdChoicesView in the layout
@result YES: has AdChoicesView, NO: not has AdChoicesView
*/
-(BOOL)hasAdChoicesView;

/*!
@method hasRatingLabel
@abstract Is there a Rating label in the layout
@result YES: has Rating, NO: not has Rating
*/
-(BOOL)hasRatingLabel;

/*!
@method hasRatingView
@abstract Is there a RatingView in the layout
@result YES: has RatingView, NO: not has RatingView
*/
-(BOOL)hasRatingView;

/*!
@method hasPrice
@abstract Is there a Price label in the layout
@result YES: has Price, NO: not has Price
*/
-(BOOL)hasPrice;

/*!
@method hasStore
@abstract Is there a Store label in the layout
@result YES: has Store, NO: not has Store
*/
-(BOOL)hasStore;

/*!
@method updateTitle
@abstract update title content
@param title  title content
*/
-(void)updateTitle:(NSString *)title;

/*!
@method updateSubTitle
@abstract update subtitle content
@param subTitle  subtitle content
*/
-(void)updateSubTitle:(NSString *)subTitle;

/*!
@method updateBody
@abstract update body content
@param body  body content
*/
-(void)updateBody:(NSString *)body;

/*!
@method updateAdvertiser
@abstract update advertiser content
@param advertiser advertiser content
*/
-(void)updateAdvertiser:(NSString *)advertiser;

/*!
@method updateCallToAction
@abstract update callToAction content
@param callToAction  callToAction content
*/
-(void)updateCallToAction:(NSString *)callToAction;

/*!
@method updateIconView
@abstract update icon view
@param view   UIView icon view
*/
-(void)updateIconView:(UIView *)view;

/*!
@method updateIconImage
@abstract update icon image
@param image  UIImage icon image
*/
-(void)updateIconImage:(UIImage *)image;

/*!
@method updateIconImageUrl
@abstract update icon image url
@param url NSString icon image's url string
*/
-(void)updateIconImageUrl:(NSString *)url;

/*!
@method updateMediaView
@abstract update media view
@param view   UIView media view
*/
-(void)updateMediaView:(UIView *)view;

/*!
@method updateMediaImage
@abstract update media image
@param image  UIImage media image
*/
-(void)updateMediaImage:(UIImage *)image;

/*!
@method updateMediaImageUrl
@abstract update Media image url
@param url NSString Media image's url string
*/
-(void)updateMediaImageUrl:(NSString *)url;
// imageRate = width/height

/*!
@method updateMediaGroupImageList:imageRate
@abstract update a group of media image url
@param urlArray  media image url array
@param imageRate CGFloat
*/
-(void)updateMediaGroupImageList:(NSArray<NSString *> *)urlArray imageRate:(CGFloat)imageRate;

/*!
@method updateMediaGroupImageViewList:imageRate
@abstract update a group of media image view
@param imgViewArray  imgeView array
@param imageRate CGFloat
*/
- (void)updateMediaGroupImageViewList:(NSArray<UIImageView *> *)imgViewArray imageRate:(CGFloat)imageRate;

/*!
@method updateAdChoicesView
@abstract update AdChoices view
@param view  UIView AdChoicesView
*/
-(void)updateAdChoicesView:(UIView *)view;

/*!
@method updateAdChoicesImage
@abstract update AdChoices Image
@param image UIImage  AdChoices Image
*/
-(void)updateAdChoicesImage:(UIImage *)image;

/*!
@method updateAdChoicesImageUrl
@abstract update AdChoices Image url
@param url  AdChoices Image url
*/
-(void)updateAdChoicesImageUrl:(NSString *)url;
// -(void)updateAdChoicesText:(NSString *)text;

/*!
@method updateRatingDouble
@abstract update rating value
@param rating  double value of rating
*/
-(void)updateRatingDouble:(double)rating;

/*!
@method updatePrice
@abstract update price content
@param price  price content
*/
-(void)updatePrice:(NSString *)price;

/*!
@method updateStore
@abstract update store content
@param store  store content
*/
-(void)updateStore:(NSString *)store;

/*!
@method hideAll
@abstract hide all view
*/
-(void)hideAll;

/*!
@method getInteractiveViewArray
@abstract get all clickable views in native layout
@result NSMutableArray<UIView *>
*/
-(NSMutableArray<UIView *> *)getInteractiveViewArray;

-(BOOL)hasInteractiveArea;

@property (nonatomic, strong) UIView *defaultBaseLayout;

+ (TXADNativeAdLayout *)fromUnityLayout:(NSString *)layoutName;
+ (TXADNativeAdLayout *)generateUnityLayout:(NSString *)layoutName;

/*!
@method getSmallLayoutWithWidth
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of small layout.
@param frameWidth native ad's display width, it can be set to screen's width and so on
@result TXADNativeAdLayout instance
*/
+ (instancetype)getSmallLayoutWithWidth:(CGFloat) frameWidth;

/*!
@method getMediumLayoutWithWidth
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of medium layout.
@param frameWidth native ad's display width, it can be set to screen's width and so on
@result TXADNativeAdLayout instance
*/
+ (instancetype)getMediumLayoutWithWidth:(CGFloat) frameWidth;

/*!
@method getLargeLayout1WithWidth
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of large layout1.
@param frameWidth native ad's display width, it can be set to screen's width and so on
@result TXADNativeAdLayout instance
*/
+ (instancetype)getLargeLayout1WithWidth:(CGFloat) frameWidth;

/*!
@method getLargeLayout2WithWidth
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of large layout2.
@param frameWidth native ad's display width, it can be set to screen's width and so on
@result TXADNativeAdLayout instance
*/
+ (instancetype)getLargeLayout2WithWidth:(CGFloat) frameWidth;

/*!
@method getLargeLayout3WithWidth
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of large layout3.
@param frameWidth native ad's display width, it can be set to screen's width and so on
@result TXADNativeAdLayout instance
*/
+ (instancetype)getLargeLayout3WithWidth:(CGFloat) frameWidth;

/*!
@method getLargeLayout4WithWidth
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of large layout4.
@param frameWidth native ad's display width, it can be set to screen's width and so on
@result TXADNativeAdLayout instance
*/
+ (instancetype)getLargeLayout4WithWidth:(CGFloat) frameWidth;

/*!
@method getFullLayout1
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of full screen layout1.
@result TXADNativeAdLayout instance
*/
+ (instancetype)getFullLayout1;

/*!
@method getFullLayout2
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of full screen layout2.
@result TXADNativeAdLayout instance
*/
+ (instancetype)getFullLayout2;

/*!
@method getFullLayout3
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of full screen layout3.
@result TXADNativeAdLayout instance
*/
+ (instancetype)getFullLayout3;

/*!
@method getFullLayout4
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of full screen layout4.
@result TXADNativeAdLayout instance
*/
+ (instancetype)getFullLayout4;

/*!
@method getBannerLayoutHeight50WithWidth
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of bannerlayout with height 50.
@param frameWidth native ad's display width, it can be set to screen's width and so on
@result TXADNativeAdLayout instance
*/
+ (instancetype)getBannerLayoutHeight50WithWidth:(CGFloat) frameWidth;

/*!
@method getBannerLayoutHeight60WithWidth
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of bannerlayout with height 60.
@param frameWidth native ad's display width, it can be set to screen's width and so on
@result TXADNativeAdLayout instance
*/
+ (instancetype)getBannerLayoutHeight60WithWidth:(CGFloat) frameWidth;

/*!
@method getBannerLayoutHeight90WithWidth
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of bannerlayout with height 90.
@param frameWidth native ad's display width, it can be set to screen's width and so on
@result TXADNativeAdLayout instance
*/
+ (instancetype)getBannerLayoutHeight90WithWidth:(CGFloat) frameWidth;

/*!
@method getBannerLayoutHeight100WithWidth
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of bannerlayout with height 100.
@param frameWidth native ad's display width, it can be set to screen's width and so on
@result TXADNativeAdLayout instance
*/
+ (instancetype)getBannerLayoutHeight100WithWidth:(CGFloat) frameWidth;

/*!
@method getBannerLayoutHeight250WithWidth
@abstract The  default NativeAdLayout has been support by the sdk. Get the style of bannerlayout with height 250.
@param frameWidth native ad's display width, it can be set to screen's width and so on
@result TXADNativeAdLayout instance
*/
+ (instancetype)getBannerLayoutHeight250WithWidth:(CGFloat) frameWidth;

#pragma mark - Unity
@property (nonatomic, strong) NSString *unityLayoutName;

@end
