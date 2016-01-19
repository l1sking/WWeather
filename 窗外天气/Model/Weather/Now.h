//
//  Now.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Now : NSObject

@property float tmp;	//当前温度(摄氏度)
@property float fl;	//体感温度

@property float spd;	//风速(Kmph)
@property (nonatomic,copy)NSString *sc;	//风力等级
@property float deg;	//风向(角度)
@property (nonatomic,copy)NSString *dir;	//风向(方向)
@property int code; 	//天气代码
@property (nonatomic,copy)NSString *txt;	//天气描述
@property float pcpn;	//降雨量(mm)
@property float hum;	//湿度(%)
@property float pres;	//气压
@property float vis; //能见度(km)

@end
