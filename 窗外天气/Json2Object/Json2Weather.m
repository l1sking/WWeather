//
//  Json2Weather.m
//  窗外天气
//
//  Created by 李康 on 16/1/18.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import "Json2Weather.h"

@implementation Json2Weather

-(Weather *)Json2WeatherByDictionary:(NSDictionary *)json
{
    Weather *weather = [[Weather alloc] init];
    
    NSArray *all = [json objectForKey:HWeatherV];
    
    if (all.count != 0) {
        NSDictionary *weatherJson = [all objectAtIndex:0];
        NSDictionary *alarmsJson = [weatherJson objectForKey:ALARMS];
        NSDictionary *aqisJson = [weatherJson objectForKey:AQI];
        NSDictionary *basicJson = [weatherJson objectForKey:BASIC];
        NSDictionary *nowJson = [weatherJson objectForKey:NOW];
        NSDictionary *daily_forecastJson = [weatherJson objectForKey:DAILY_FORECAST];
        NSDictionary *hourly_forecastJson = [weatherJson objectForKey:HOURLY_FORECAST];
        NSDictionary *suggestionJson = [weatherJson objectForKey:SUGGESTION];
        
        Json2Alarms *json2Alarms = [[Json2Alarms alloc] init];
        Json2Api *json2Aqi = [[Json2Api alloc] init];
        Json2Basic *json2Basic = [[Json2Basic alloc] init];
        Json2DailyForecast *json2DailyForecast = [[Json2DailyForecast alloc] init];
        Json2HourlyForecast *json2HourlyForecast = [[Json2HourlyForecast alloc] init];
        Json2Now *json2Now = [[Json2Now alloc] init];
        Json2Suggestion *json2Suggestion = [[Json2Suggestion alloc] init];
        
        //排除没有预警的时候
        NSString *alarmsStr = [weatherJson objectForKey:ALARMS];
        if (alarmsStr.length > 10) {
            Alarms *alarms = [json2Alarms json2AlarmsByDictionary:alarmsJson];
            weather.alarms = alarms;
        }
        
        
        Aqi *aqi = [json2Aqi json2AqiByDictionary:aqisJson];
        Basic *basic = [json2Basic json2BasicByDictionary:basicJson];
        Now *now = [json2Now json2NowByDictionary:nowJson];
        DailyForecast *dailyForecast = [json2DailyForecast json2DailyForecastByDictionary:daily_forecastJson];
        HourlyForecast *hourlyForecast = [json2HourlyForecast json2HourlyForecastByDictionary:hourly_forecastJson];
        Suggestion *suggestion = [json2Suggestion json2SuggestionByDictionary:suggestionJson];
        
        
        weather.aqi = aqi;
        weather.basic = basic;
        weather.now = now;
        weather.dailyForecast = dailyForecast;
        weather.hourlyForecast = hourlyForecast;
        weather.suggestion = suggestion;
        
    }else{
        NSLog(@"Json2Weather lost");
    }
    
    return weather;
}

@end
