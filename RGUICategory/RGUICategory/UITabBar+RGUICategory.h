//
//  UITabBar+RGUICategory.h
//  RGUICategory
//
//  Created by RAIN on 16/4/28.
//  Copyright © 2016年 Smartech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITabBar (RGUICategory)

/**
 *  修改 Tab Bar 的背景颜色
 *
 *  @param color 提供给 Tab Bar 的背景的 tint color
 */
+ (void)rg_barTintColor:(UIColor *)color;

/**
 *  修改 Tab Bar item 的 tint color
 *
 *  @param color 提供给 Tab Bar 的 tint color
 */
+ (void)rg_tintColor:(UIColor *)color;

@end
