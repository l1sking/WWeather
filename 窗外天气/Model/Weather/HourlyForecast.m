//
//  HourlyForecast.m
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import "HourlyForecast.h"

@implementation HourlyForecast

@synthesize date;       //当地日期和时间
@synthesize tmp;    //当前温度(摄氏度)

@synthesize spd;        //风速(Kmph)
@synthesize sc;     //风力等级
@synthesize deg;        //风向(角度)
@synthesize dir;        //风向(方向)

@synthesize pop;        //降水概率
@synthesize hum;        //湿度(%)
@synthesize pres;       //气压

@end
