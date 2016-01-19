//
//  Json2Api.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Aqi.h"

@interface Json2Api : NSObject

-(Aqi *)json2AqiByDictionary:(NSDictionary *)json;

@end
