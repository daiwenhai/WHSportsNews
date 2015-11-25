//
//  PicCell.h
//  5U体育
//
//  Created by Mark on 15-4-25.
//  Copyright (c) 2015年 Mark. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SportsModel;
@interface PicCell : UITableViewCell
{
    UIImageView *photoImageView;
    UILabel *titleLable;
}
- (void)config:(SportsModel *)model;
@end
