//
//  WeatherRest.m
//  窗外天气
//
//  Created by 李康 on 16/1/18.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import "WeatherRest.h"
#import "HWeather.h"

@implementation WeatherRest

-(NSDictionary *)getWeatherDataRest:(NSString *)cityName{
    HWeather *hweather = [[HWeather alloc] init];
    NSMutableDictionary *JsonData = [hweather getWeatherData:cityName];
    
    
    
    
    
    return JsonData;
}



@end
