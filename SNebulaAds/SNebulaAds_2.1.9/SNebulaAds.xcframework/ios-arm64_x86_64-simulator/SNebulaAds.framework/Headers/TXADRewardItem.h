//
//  TXADRewardItem.h
//

#import <Foundation/Foundation.h>

/*!
@class TXADRewardItem
@abstract TXAD reward content object
*/
@interface TXADRewardItem : NSObject

/*!
@property rewardType
@abstract reward content it set be APP to dashboard and SDK will return the value to APP in the delegate didReward
*/
@property NSString *rewardType;

/*!
@property rewardAmount
@abstract reward amount it set be APP to dashboard and SDK will return the value to APP in the delegate didReward
*/
@property int rewardAmount;

/*!
@method initWithType
@abstract init the instance
@param type  reward type
@param amount reward amount
@result TXADRewardItem instance
*/
-(id)initWithType:(NSString *)type andAmount:(int)amount;

@end
