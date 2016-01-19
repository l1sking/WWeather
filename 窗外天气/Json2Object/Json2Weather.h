//
//  Json2Weather.h
//  窗外天气
//
//  Created by 李康 on 16/1/18.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Weather.h"
#import "Json2Suggestion.h"
#import "Json2Now.h"
#import "Json2HourlyForecast.h"
#import "Json2DailyForecast.h"
#import "Json2Basic.h"
#import "Json2Api.h"
#import "Json2Alarms.h"
#import "Alarms.h"
#import "Aqi.h"
#import "Basic.h"
#import "DailyForecast.h"
#import "HourlyForecast.h"
#import "Now.h"
#import "Suggestion.h"

@interface Json2Weather : NSObject

-(Weather *)Json2WeatherByDictionary:(NSDictionary *)json;

@end
