//
//  CommentViewController.h
//  5U体育
//
//  Created by Mark on 15-4-27.
//  Copyright (c) 2015年 Mark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MJRefresh.h"
@interface CommentViewController : UIViewController
{
    int page;
    MJRefreshHeaderView *header;
    MJRefreshFooterView *footer;
}
@property (nonatomic,copy)NSString *catId;
@property (nonatomic,copy)NSString *newsId;
@end
