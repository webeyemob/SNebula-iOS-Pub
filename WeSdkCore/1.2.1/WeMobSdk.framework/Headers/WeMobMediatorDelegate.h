//
//  WeMobMediatorDelegate.h

//

#import "WeMobBaseAdAdapter.h"
#import "WeMobLineItem.h"

@protocol WeMobMediatorDelegate<NSObject>

@required -(WeMobBaseAdAdapter *)createAdapter:(WeMobLineItem *)lineItem;

@end
