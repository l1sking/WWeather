//
//  Json2HourlyForecast.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HourlyForecast.h"

@interface Json2HourlyForecast : NSObject

-(HourlyForecast *)json2HourlyForecastByDictionary:(NSDictionary *)json;

@end
