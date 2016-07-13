//
//  MainScreen.h
//  RGUICategory
//
//  Created by RAIN on 16/4/13.
//  Copyright © 2016年 Smartech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainScreen : UIScreen

/**
 *  获取视图的 bounds
 *
 *  @return 视图的 bounds
 */
+ (CGRect)rg_bouds;

/**
 *  获取视图的 size
 *
 *  @return 视图的 size
 */
+ (CGSize)rg_size;

/**
 *  获取视图的宽
 *
 *  @return 视图的宽
 */
+ (CGFloat)rg_width;

+ (CGFloat)rg_height;

/**
 *  获取主屏幕的实体
 *
 *  @return 主屏幕实体
 */
+ (UIScreen *)rg_mainScreen;

@end
