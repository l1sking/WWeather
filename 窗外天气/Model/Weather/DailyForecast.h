//
//  DailyForecast.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DailyForecast : NSObject

@property (nonatomic,copy) NSString *date;      //当地日期

@property (nonatomic,copy) NSString *sr;      //日出时间
@property (nonatomic,copy) NSString *ss;      //日落时间

@property float max;     //最该温度(摄氏度)
@property float min;     //最低温度(摄氏度)

@property float spd;     //风速(Kmph)
@property (nonatomic,copy) NSString *sc;      //风力等级
@property float deg;     //风向(角度)
@property (nonatomic,copy) NSString *dir;     //风向(方向)

@property int code_d;      //白天天气代码
@property (nonatomic,copy) NSString *txt_d;       //白天天气描述
@property int code_n;      //夜间天气代码
@property (nonatomic,copy) NSString *txt_n;       //夜间天气描述
@property float pcpn;        //降雨量(mm)
@property float pop;     //降水概率
@property float hum;     //湿度(%)
@property float pres;        //气压
@property float vis;     //能见度(km)

@end
