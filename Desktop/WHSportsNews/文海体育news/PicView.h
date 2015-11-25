//
//  PicView.h
//  5U体育
//
//  Created by Mark on 15-14-25.
//  Copyright (c) 2015年 Mark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MJRefresh.h"
#import "HttpRequestBlock.h"
#import "AFHTTPRequestOperationManager.h"

@interface PicView : UIViewController
<UITableViewDataSource,UITableViewDelegate>
{
    NSInteger page;
    UITableView *_tableView;
    MJRefreshHeaderView *header;
    MJRefreshFooterView *footer;
    UIView *av;
    UIActivityIndicatorView * activity;
    AFHTTPRequestOperationManager *manager;

}
@property (nonatomic,strong)NSMutableArray *dataArray;
@property (nonatomic,copy)NSString *urlStr;
@end
