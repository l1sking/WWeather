//
//  ViewController.m
//  窗外天气
//
//  Created by 李康 on 16/1/18.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import "ViewController.h"
#import "HWeather.h"
#import "WeatherRest.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    
    WeatherRest *weatherRest = [[WeatherRest alloc] init];
    [weatherRest getWeatherDataRest:@"beijing"];
    
    
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
