//
//  TXADInteractiveArea.h
//  TXADSdk
//
//  Created by TaurusXAds on 2019/8/7.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
@class TXADInteractiveArea
@abstract TXAD user interactive area object
*/
@interface TXADInteractiveArea : NSObject

/*!
@method allArea
@abstract set all area can be clicked
@result TXADInteractiveArea instanse
*/
+(TXADInteractiveArea *)allArea;

/*!
@method builder
@abstract add element to clickable area by builder.addXxx
@result TXADInteractiveArea instanse
*/
+(TXADInteractiveArea *)builder;

/*!
@method addTitle
@abstract add title view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addTitle;

/*!
@method addSubTitle
@abstract add subTitle view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addSubTitle;

/*!
@method addBody
@abstract add body view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addBody;

/*!
@method addAdvertiser
@abstract add Advertiser view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addAdvertiser;

/*!
@method addCallToAction
@abstract add CallToAction view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addCallToAction;

/*!
@method addIcon
@abstract add Icon view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addIcon;

/*!
@method addMediaView
@abstract add MediaView view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addMediaView;

/*!
@method addAdChoices
@abstract add AdChoices view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addAdChoices;

/*!
@method addRatingView
@abstract add RatingView view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addRatingView;

/*!
@method addRatingLabel
@abstract add RatingLabel view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addRatingLabel;

/*!
@method addPrice
@abstract add Price view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addPrice;

/*!
@method addStore
@abstract add Store view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addStore;

/*!
@method addRootView
@abstract add root view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addRootView;

/*!
@method addCustomView
@abstract add custom view to clickable area
@result TXADInteractiveArea instanse
*/
- (TXADInteractiveArea *)addCustomView;

/*!
@method hasTitle
@abstract check title view is clickable
@result YES: title view can be clicked, NO: title view can not be clicked
*/
- (BOOL)hasTitle;

/*!
@method hasSubTitle
@abstract check SubTitle view is clickable
@result YES: SubTitle view can be clicked, NO: SubTitle view can not be clicked
*/
- (BOOL)hasSubTitle;

/*!
@method hasBody
@abstract check Body view is clickable
@result YES: Body view can be clicked, NO: Body view can not be clicked
*/
- (BOOL)hasBody;

/*!
@method hasAdvertiser
@abstract check Advertiser view is clickable
@result YES: Advertiser view can be clicked, NO: Advertiser view can not be clicked
*/
- (BOOL)hasAdvertiser;

/*!
@method hasCallToAction
@abstract check CallToAction view is clickable
@result YES: CallToAction view can be clicked, NO: CallToAction view can not be clicked
*/
- (BOOL)hasCallToAction;

/*!
@method hasIcon
@abstract check Icon view is clickable
@result YES: Icon view can be clicked, NO: Icon view can not be clicked
*/
- (BOOL)hasIcon;

/*!
@method hasMediaView
@abstract check MediaView is clickable
@result YES: MediaView can be clicked, NO: MediaView can not be clicked
*/
- (BOOL)hasMediaView;

/*!
@method hasAdChoices
@abstract check AdChoices view is clickable
@result YES: AdChoices view can be clicked, NO: AdChoices view can not be clicked
*/
- (BOOL)hasAdChoices;

/*!
@method hasRatingView
@abstract checkRatingView is clickable
@result YES: RatingView can be clicked, NO: RatingView can not be clicked
*/
- (BOOL)hasRatingView;

/*!
@method hasRatingLabel
@abstract check RatingLabel view is clickable
@result YES: RatingLabel view can be clicked, NO: RatingLabel view can not be clicked
*/
- (BOOL)hasRatingLabel;

/*!
@method hasPrice
@abstract check Price view is clickable
@result YES: Price view can be clicked, NO: Price view can not be clicked
*/
- (BOOL)hasPrice;

/*!
@method hasStore
@abstract check Store view is clickable
@result YES: Store view can be clicked, NO: Store view can not be clicked
*/
- (BOOL)hasStore;

/*!
@method hasRootView
@abstract check RootView  is clickable
@result YES: RootView can be clicked, NO: RootView can not be clicked
*/
- (BOOL)hasRootView;

/*!
@method hasCustomView
@abstract check CustomViews  is clickable
@result YES: CustomViews can be clicked, NO: CustomViews can not be clicked
*/
- (BOOL)hasCustomView;

@end
