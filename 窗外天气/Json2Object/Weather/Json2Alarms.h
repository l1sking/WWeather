//
//  Json2Alarms.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Alarms.h"

@interface Json2Alarms : NSObject

-(Alarms *)json2AlarmsByDictionary:(NSDictionary *)json;

@end
