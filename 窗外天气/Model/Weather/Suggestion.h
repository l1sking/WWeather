//
//  Suggestion.h
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Suggestion : NSObject

@property (nonatomic,copy) NSString *comfBrf;  //舒适指数
@property (nonatomic,copy) NSString *comfTxt;  //舒适详情

@property (nonatomic,copy) NSString *drsgBrf;	  //紫外线简介
@property (nonatomic,copy) NSString *drsgTxt;	  //紫外线详情

@property (nonatomic,copy) NSString *uvBrf;	 //简介
@property (nonatomic,copy) NSString *uvTxt;	 //详情

@property (nonatomic,copy) NSString *cwBrf;	 //洗车简介
@property (nonatomic,copy) NSString *cwTxt;	 //洗车详情

@property (nonatomic,copy) NSString *travBrf;	 //旅游简介
@property (nonatomic,copy) NSString *travTxt;	 //旅游详情

@property (nonatomic,copy) NSString *fluBrf;	//感冒简介
@property (nonatomic,copy) NSString *fluTxt;	//感冒详情

@property (nonatomic,copy) NSString *sportBrf;	 //运动简介
@property (nonatomic,copy) NSString *sportTxt;	//运动详情

@end
