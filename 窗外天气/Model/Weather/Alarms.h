//
//  Alarms.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Alarms : NSObject

@property (nonatomic,copy)NSString *level; //灾害预警级别
@property (nonatomic,copy)NSString *stat;  //灾害预警状态
@property (nonatomic,copy)NSString *title;  //灾害预警标题
@property (nonatomic,copy)NSString *txt;  //灾害预警描述
@property (nonatomic,copy)NSString *type;  //灾害预警类型


@end
