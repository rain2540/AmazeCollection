//
//  UINavigationBar+RGUICategory.h
//  RGUICategory
//
//  Created by RAIN on 16/4/10.
//  Copyright © 2016年 Smartech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationBar (RGUICategory)

/**
 *  修改 Navigation Bar 的背景颜色
 *
 *  @param color 提供给 Navigation Bar 的背景的 tint color
 */
+ (void)rg_barTintColor:(UIColor *)color;

/**
 *  修改 Navigation item 和 bar button item 的 tint color
 *
 *  @param color 提供给 Navigation item 和 bar button item 的 tint color
 */
+ (void)rg_tintColor:(UIColor *)color;

/**
 *  修改 Navigation Bar 的文字颜色
 *
 *  @param color 提供给 Navigation Bar 上文字的颜色
 */
+ (void)rg_titleTextColor:(UIColor *)color;

@end
