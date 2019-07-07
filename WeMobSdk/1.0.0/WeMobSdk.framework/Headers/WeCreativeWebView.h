//
//  WeCreativeWebView.h
//  WeDSPDemo
//
//  Created by liuguangren on 2019/6/11.
//  Copyright © 2019 WE. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^WECommonVoidBlock)(void);

typedef void (^MPWebViewJavascriptEvaluationCompletionHandler)(id _Nullable result, NSError * _Nullable error);

@interface WeCreativeWebView : UIView
@property (nonatomic, assign) BOOL shouldConformToSafeArea;
@property (copy) WECommonVoidBlock _Nullable didLoadedBlock;
@property (copy) WECommonVoidBlock _Nullable didClickBlock;

- (void)loadHTMLString:(NSString *_Nullable)string
               baseURL:(NSURL *_Nullable)baseURL;

@end

