//
//  DailyForecast.m
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import "DailyForecast.h"

@implementation DailyForecast

@synthesize date;      //当地日期

@synthesize sr;      //日出时间
@synthesize ss;      //日落时间

@synthesize max;     //最该温度(摄氏度)
@synthesize min;     //最低温度(摄氏度)

@synthesize spd;     //风速(Kmph)
@synthesize sc;      //风力等级
@synthesize deg;     //风向(角度)
@synthesize dir;     //风向(方向)

@synthesize code_d;      //白天天气代码
@synthesize txt_d;       //白天天气描述
@synthesize code_n;      //夜间天气代码
@synthesize txt_n;       //夜间天气描述
@synthesize pcpn;        //降雨量(mm)
@synthesize pop;     //降水概率
@synthesize hum;     //湿度(%)
@synthesize pres;        //气压
@synthesize vis;     //能见度(km)

@end
