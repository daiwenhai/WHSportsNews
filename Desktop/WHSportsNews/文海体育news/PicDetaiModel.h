//
//  PicDetaiModel.h
//  5U体育
//
//  Created by Mark on 15-4-25.
//  Copyright (c) 2015年 Mark. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PicDetaiModel : NSObject
@property (nonatomic,copy)NSString *des;
@property (nonatomic,copy)NSString *url;
- (instancetype)initWithDic:(NSDictionary *)dic;
@end
