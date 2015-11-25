//
//  CommentFrame.h
//  5U体育
//
//  Created by Mark on 15-4-27.
//  Copyright (c) 2015年 Mark. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CommentModel;
@interface CommentFrame : NSObject
@property (nonatomic,assign,readonly)CGRect idFrame;
@property (nonatomic,assign,readonly)CGRect dateFrame;
@property (nonatomic,assign,readonly)CGRect textFrame;
@property (nonatomic,assign,readonly)CGFloat cellHeight;
@property (nonatomic,strong)CommentModel *commentModel;
@end
