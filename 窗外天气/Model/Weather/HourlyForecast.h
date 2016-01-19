//
//  HourlyForecast.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HourlyForecast : NSObject

@property (nonatomic,copy) NSString *date;       //当地日期和时间
@property float tmp;    //当前温度(摄氏度)

@property float spd;        //风速(Kmph)
@property (nonatomic,copy) NSString *sc;     //风力等级
@property float deg;        //风向(角度)
@property (nonatomic,copy) NSString *dir;        //风向(方向)

@property float pop;        //降水概率
@property float hum;        //湿度(%)
@property float pres;       //气压

@end
