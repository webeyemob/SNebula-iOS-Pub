//
//  WeMobDspWebView.h

//
//  Created by liuguangren on 2019/6/11.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WeMobDspConstant.h"

typedef void (^WeMobDspWebViewJavascriptEvaluationCompletionHandler)(id _Nullable result, NSError * _Nullable error);

@interface WeMobDspWebView : UIView
@property (nonatomic, assign) BOOL shouldConformToSafeArea;
@property (copy) WeMobDspCommonVoidBlock _Nullable didLoadedBlock;
@property (copy) WeMobDspCommonVoidBlock _Nullable didClickBlock;

- (void)loadHTMLString:(NSString *_Nullable)string
               baseURL:(NSURL *_Nullable)baseURL;

@end

