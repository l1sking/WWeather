//
//  Basic.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Basic : NSObject

@property (nonatomic,copy)NSString *city;  //城市名称
@property (nonatomic,copy)NSString *cnty;  //国家名称
@property (nonatomic,copy)NSString *cityid; //城市ID
@property          double  lat;  //纬度
@property          double  lon;  //经度
@property (nonatomic,copy)NSString  *loc;  //数据更新的当地时间
@property (nonatomic,copy)NSString  *utc;  //数据更新的UTC时间

@end
