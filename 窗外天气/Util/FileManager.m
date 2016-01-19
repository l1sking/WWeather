//
//  FileManager.m
//  窗外天气
//
//  Created by 李康 on 16/1/19.
//  Copyright © 2016年 lisking. All rights reserved.
//

#import "FileManager.h"

@implementation FileManager


-(BOOL) CreateFile
{
    BOOL isSuccess = NO;
    //对于错误信息
    NSError *error;
    // 创建文件管理器
    NSFileManager *fileMgr = [NSFileManager defaultManager];
    //指向文件目录
    NSString *documentsDirectory= [NSHomeDirectory() stringByAppendingPathComponent:@"Documents"];
    
    //创建一个目录
    [[NSFileManager defaultManager]   createDirectoryAtPath: [NSString stringWithFormat:@"%@/myFolder", NSHomeDirectory()] attributes:nil];
    
    // File we want to create in the documents directory我们想要创建的文件将会出现在文件目录中
    // Result is: /Documents/file1.txt结果为：/Documents/file1.txt
    NSString *filePath= [documentsDirectory
                         stringByAppendingPathComponent:@"file2.txt"];
    //需要写入的字符串
    NSString *str= @"iPhoneDeveloper Tips\nhttp://iPhoneDevelopTips,com";
    //写入文件
    [str writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:&error];
    
    if (!error) {
        isSuccess = YES;
    }
    
    return isSuccess;
}


@end
