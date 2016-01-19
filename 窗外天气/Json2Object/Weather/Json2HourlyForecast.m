//
//  Json2HourlyForecast.m
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import "Json2HourlyForecast.h"

@implementation Json2HourlyForecast

-(HourlyForecast *)json2HourlyForecastByDictionary:(NSDictionary *)json
{
    HourlyForecast *hourlyForecast = [[HourlyForecast alloc] init];
    
    return hourlyForecast;
}

@end
