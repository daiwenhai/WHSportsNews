//
//  PicDetaiModel.m
//  5U体育
//
//  Created by Mark on 15-4-25.
//  Copyright (c) 2015年 Mark. All rights reserved.
//

#import "PicDetaiModel.h"

@implementation PicDetaiModel
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
