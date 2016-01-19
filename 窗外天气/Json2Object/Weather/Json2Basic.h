//
//  Json2Basic.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Basic.h"

@interface Json2Basic : NSObject

-(Basic *)json2BasicByDictionary:(NSDictionary *)json;

@end
