//
//  KKSongModel.h
//  秀秀音乐
//
//  Created by Kenny.li on 16/5/8.
//  Copyright (c) 2016年 KK. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KKSongModel : NSObject
@property (nonatomic, strong) NSNumber *songlist_id;
@property (nonatomic, copy) NSString *songlist_name;
@property (nonatomic, copy) NSString *details;
@property (nonatomic, copy) NSString *parentname; //分区名
@property (nonatomic, copy) NSString *large_pic_url, *small_pic_url, *pic_url_240_200;

@end
