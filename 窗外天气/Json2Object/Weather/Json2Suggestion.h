//
//  Json2Suggestion.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Suggestion.h"

@interface Json2Suggestion : NSObject

-(Suggestion *)json2SuggestionByDictionary:(NSDictionary *)json;

@end
