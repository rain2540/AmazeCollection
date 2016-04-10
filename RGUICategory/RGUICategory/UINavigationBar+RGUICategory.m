//
//  UINavigationBar+RGUICategory.m
//  RGUICategory
//
//  Created by RAIN on 16/4/10.
//  Copyright © 2016年 Smartech. All rights reserved.
//

#import "UINavigationBar+RGUICategory.h"

@implementation UINavigationBar (RGUICategory)

+ (void)rg_barTintColor:(UIColor *)color {
    [UINavigationBar appearance].barTintColor = color;
}

+ (void)rg_tintColor:(UIColor *)color {
    [UINavigationBar appearance].tintColor = color;
}

+ (void)rg_titleTextColor:(UIColor *)color {
    [UINavigationBar appearance].titleTextAttributes = @{NSForegroundColorAttributeName: color};
}

@end
