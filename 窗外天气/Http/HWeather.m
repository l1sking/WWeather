//
//  HWeather.m
//  窗外天气
//
//  Created by 李康 on 16/1/18.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import "HWeather.h"
#import "ASIHTTPRequest.h"

#define HttpURL  @"http://apis.baidu.com/heweather/pro/weather?city="
#define baiDuAPIKey  @"1948ae6131bb5f1a689ed1b1e2fe4c33"

@implementation HWeather


-(NSMutableDictionary *)getWeatherData:(NSString *)cityName{
    NSString *urlStr = [[NSString alloc]initWithFormat: @"%@%@", HttpURL, cityName];
    NSURL *url = [NSURL URLWithString: urlStr];
    
    NSMutableDictionary *headerDic = [NSMutableDictionary dictionary];
    [headerDic setObject:baiDuAPIKey forKey:@"apikey"];
    
    ASIHTTPRequest *request = [ASIHTTPRequest requestWithURL:url];
    [request setRequestMethod : @"GET" ];
    [request setRequestHeaders:headerDic];
    [request setTimeOutSeconds : 60 ];
    [request startSynchronous];
    
    
    NSError *error = [request error];
    if (!error) {
        NSData *data = [request responseData];
        NSMutableDictionary *dic = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingAllowFragments error:nil];
        return dic;
    }else{
        NSLog(@"HWeather Error!");
        return nil;
    }
    
    
    
    
}


@end
