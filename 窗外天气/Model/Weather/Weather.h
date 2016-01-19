//
//  Weather.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Alarms.h"
#import "Aqi.h"
#import "Basic.h"
#import "DailyForecast.h"
#import "HourlyForecast.h"
#import "Now.h"
#import "Suggestion.h"

#define HWeatherV           @"HeWeather data service 3.0"
#define BASIC               @"basic"
#define AQI                 @"aqi"
#define NOW                 @"now"
#define BASIC               @"basic"
#define DAILY_FORECAST      @"daily_forecast"
#define HOURLY_FORECAST     @"hourly_forecast"
#define SUGGESTION          @"suggestion"
#define ALARMS              @"alarms"


@interface Weather : NSObject

@property (nonatomic,assign) Alarms *alarms;    //灾难预警
@property (nonatomic,assign) Aqi *aqi;      //空气质量指数
@property (nonatomic,assign) Basic *basic;      //城市基本信息
@property (nonatomic,assign) DailyForecast *dailyForecast;  //天气预报
@property (nonatomic,assign) HourlyForecast *hourlyForecast;    //每小时天气预报
@property (nonatomic,assign) Now *now;      //实况天气
@property (nonatomic,assign) Suggestion *suggestion;       //生活指数


@end
