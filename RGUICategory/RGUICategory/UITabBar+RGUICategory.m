//
//  UITabBar+RGUICategory.m
//  RGUICategory
//
//  Created by RAIN on 16/4/28.
//  Copyright © 2016年 Smartech. All rights reserved.
//

#import "UITabBar+RGUICategory.h"

@implementation UITabBar (RGUICategory)

+ (void)rg_barTintColor:(UIColor *)color {
    [UITabBar appearance].barTintColor = color;
}

+ (void)rg_tintColor:(UIColor *)color {
    [UITabBar appearance].tintColor = color;
}

@end
