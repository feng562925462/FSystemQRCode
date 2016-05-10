//
//  CommonHeaderFile.h
//  ios屏幕和版本判断
//
//  Created by tcyf-2 on 16/5/3.
//  Copyright © 2016年 TaiChuan. All rights reserved.
//

#ifndef CommonHeaderFile_h
#define CommonHeaderFile_h


//-------------------获取设备大小-------------------------

/**
 * 屏幕大小
 * 屏幕宽度
 * 屏幕高度
 */
#define SCREEN_BOUNDS [UIScreen mainScreen].bounds
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)


/**
 * ipone4s大小
 * ipone5s大小
 * ipone6s大小
 * ipone6sPlus大小
 * iPad Retina大小
 */
#define IPHONE_4S_SIZE CGSizeMake(640, 960)
#define IPHONE_5S_SIZE CGSizeMake(640, 1136)
#define IPHONE_6S_SIZE CGSizeMake(750, 1334)
#define IPHONE_6SPLUS_SIZE CGSizeMake(1242, 2208)
#define IPAD_RETINA_SIZE CGSizeMake(1536, 2048)

/**
 * 是否为某个设备（参数为屏幕的大小）
 */
#define  ISDEVICE(DEVICE_SIZE)  ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(DEVICE_SIZE, [[UIScreen mainScreen] currentMode].size) : NO)

//-------------------获取设备大小-------------------------

// 是否是iPad
#define ISIPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

//获取系统版本
#define IOS_VERSION ［[UIDevice currentDevice] systemVersion] floatValue]
//判断是哪个版本

#define ISVERSION(number) [[UIDevice currentDevice].systemVersion isEqualToString:number]

// 判断是否是哪个版本之后

#define ISVERSIONAFTER(number) [UIDevice currentDevice].systemVersion.floatValue > number

//----------------------图片----------------------------

//读取本地图片
#define LOADIMAGE(file,ext) [UIImage imageWithContentsOfFile:［NSBundle mainBundle]pathForResource:file ofType:ext］

// 获取RGB颜色
#define COLOR(R,G,B,A) [UIColor colorWithRed:R/255.0f green:G/255.0f blue:B/255.0f alpha:A]




#endif /* CommonHeaderFile_h */
