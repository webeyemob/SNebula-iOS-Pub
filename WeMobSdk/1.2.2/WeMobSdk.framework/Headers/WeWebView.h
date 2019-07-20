//
//  WeWebView.h
//  WeDSPDemo
//
//  Created by liuguangren on 2019/6/11.
//  Copyright © 2019 WeSdk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WeConstant.h"

typedef void (^MPWebViewJavascriptEvaluationCompletionHandler)(id _Nullable result, NSError * _Nullable error);

@interface WeWebView : UIView
@property (nonatomic, assign) BOOL shouldConformToSafeArea;
@property (copy) WECommonVoidBlock _Nullable didLoadedBlock;
@property (copy) WECommonVoidBlock _Nullable didClickBlock;

- (void)loadHTMLString:(NSString *_Nullable)string
               baseURL:(NSURL *_Nullable)baseURL;

@end

