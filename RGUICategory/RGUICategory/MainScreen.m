//
//  MainScreen.m
//  RGUICategory
//
//  Created by RAIN on 16/4/13.
//  Copyright © 2016年 Smartech. All rights reserved.
//

#import "MainScreen.h"

@implementation MainScreen

+ (CGRect)rg_bouds {
    return [[[self class] rg_mainScreen] bounds];
}

+ (CGSize)rg_size {
    return [[self class] rg_bouds].size;
}

+ (CGFloat)rg_width {
    return [[self class] rg_size].width;
}

+ (CGFloat)rg_height {
    return [[self class] rg_size].height;
}

+ (UIScreen *)rg_mainScreen {
    return [UIScreen mainScreen];
}

@end
