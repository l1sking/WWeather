//
//  HWeather.h
//  窗外天气
//
//  Created by 李康 on 16/1/18.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WeatherRest.h"

@interface HWeather : NSObject{
}


-(NSMutableDictionary *)getWeatherData:(NSString *)cityName;


@end
