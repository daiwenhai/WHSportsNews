//
//  CommentModel.m
//  5U体育
//
//  Created by Mark on 15-4-27.
//  Copyright (c) 2015年 Mark. All rights reserved.
//

#import "CommentModel.h"

@implementation CommentModel
- (void)setValue:(id)value forUndefinedKey:(NSString *)key
{
    
}
- (instancetype)initWithDic:(NSDictionary *)dic
{
    if (self = [super init]) {
        [self setValuesForKeysWithDictionary:dic];
    }
    return self;
}


@end
