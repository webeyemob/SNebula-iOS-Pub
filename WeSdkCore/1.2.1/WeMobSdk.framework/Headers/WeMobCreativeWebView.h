//
//  WeMobCreativeWebView.h

//
//  Created by liuguangren on 2019/6/11.
//  Copyright © 2019 WeMob. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^WeMobCommonVoidBlock)(void);

typedef void (^MPWebViewJavascriptEvaluationCompletionHandler)(id _Nullable result, NSError * _Nullable error);

@interface WeMobCreativeWebView : UIView
@property (nonatomic, assign) BOOL shouldConformToSafeArea;
@property (copy) WeMobCommonVoidBlock _Nullable didLoadedBlock;
@property (copy) WeMobCommonVoidBlock _Nullable didClickBlock;

- (void)loadHTMLString:(NSString *_Nullable)string
               baseURL:(NSURL *_Nullable)baseURL;

@end
