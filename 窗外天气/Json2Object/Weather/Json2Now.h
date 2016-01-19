//
//  Json2Now.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Now.h"

@interface Json2Now : NSObject

-(Now *)json2NowByDictionary:(NSDictionary *)json;

@end
