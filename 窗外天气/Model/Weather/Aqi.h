//
//  Aqi.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Aqi : NSObject

@property float aqi;  //空气质量指数
@property float co;  //一氧化碳1小时平均值(ug/m³)
@property float *no2; //二氧化氮1小时平均值(ug/m³)
@property float *o3;    //臭氧1小时平均值(ug/m³)
@property float *pm10;  //PM10 1小时平均值(ug/m³)
@property float *pm25;  //PM2.5 1小时平均值(ug/m³)
@property (nonatomic,copy)NSString *qlty; //空气质量类别
@property float *so2;  //二氧化硫1小时平均值(ug/m³)

@end
