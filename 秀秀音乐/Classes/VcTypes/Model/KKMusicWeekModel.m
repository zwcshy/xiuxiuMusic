//
//  KKMusicWeekModel.m
//  秀秀音乐
//
//  Created by Kenny.li on 16/5/8.
//  Copyright (c) 2016年 KK. All rights reserved.
//

#import "KKMusicWeekModel.h"

@implementation KKMusicWeekModel


- (void)setValue:(id)value forUndefinedKey:(NSString *)key {
    
    if ([key isEqualToString:@"id"]) {
        self.ID = value;
    }
    
}

@end
