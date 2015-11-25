//
//  CommentCell.h
//  5U体育
//
//  Created by Mark on 15-4-27.
//  Copyright (c) 2015年 Mark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CommentFrame.h"
@interface CommentCell : UITableViewCell
{
    UILabel *idLable;
    UILabel *dateLabel;
    UILabel *textLable;
}
@property (nonatomic,strong)CommentFrame *commentFrame;
@end
