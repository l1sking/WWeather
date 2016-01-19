//
//  Json2DailyForecast.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DailyForecast.h"

@interface Json2DailyForecast : NSObject

-(DailyForecast *)json2DailyForecastByDictionary:(NSDictionary *)json;

@end
