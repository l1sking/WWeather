//
//  Json2DailyForecast.m
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import "Json2DailyForecast.h"

@implementation Json2DailyForecast

-(DailyForecast *)json2DailyForecastByDictionary:(NSDictionary *)json
{
    DailyForecast *dailyForecast = [[DailyForecast alloc] init];
    
    return dailyForecast;
}

@end
