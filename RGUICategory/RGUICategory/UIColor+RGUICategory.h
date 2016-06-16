//
//  UIColor+RGUICategory.h
//  RGUICategory
//
//  Created by RAIN on 16/4/10.
//  Copyright © 2016年 Smartech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (RGUICategory)

/**
 *  通过指定的不透明度和 RGB 分量值, 初始化并返回一个颜色对象
 *
 *  @param red   红色分量的值 (0 ~ 255)
 *  @param green 绿色分量的值 (0 ~ 255)
 *  @param blue  蓝色分量的值 (0 ~ 255)
 *  @param alpha 不透明度的值 (0 ~ 1)
 *
 *  @return 被初始化的颜色
 */
+ (UIColor * _Nonnull)rg_colorWithRed:(CGFloat)red
                                Green:(CGFloat)green
                                 Blue:(CGFloat)blue
                                Alpha:(CGFloat)alpha;

/**
 *  通过指定的不透明度 和 一个用16进制数字表示 RGB 分量值的字符串, 初始化并返回一个颜色对象
 *
 *  @param hexString 以"#"或"0x"开头, 后面跟随6位(或3位)16进制数字 表示RGB分量值的字符串
 *  @param alpha     不透明度 (0 ~ 1)
 *
 *  @return 被初始化的颜色
 */
+ (UIColor * _Nonnull)rg_colorWithHexString:(nonnull NSString *)hexString
                                      alpha:(CGFloat)alpha;

/**
 *  通过指定的不透明度和 RGB 分量值, 初始化并返回一个颜色对象
 *
 *  @param red   红色分量的值 (0 ~ 255)
 *  @param green 绿色分量的值 (0 ~ 255)
 *  @param blue  蓝色分量的值 (0 ~ 255)
 *  @param alpha 不透明度的值 (0 ~ 1)
 *
 *  @return 被初始化的颜色
 */
- (UIColor * _Nonnull)rg_initWithRed:(CGFloat)red
                               Green:(CGFloat)green
                                Blue:(CGFloat)blue
                               Alpha:(CGFloat)alpha;

/**
 *  通过指定的不透明度 和 一个用16进制数字表示 RGB 分量值的字符串, 初始化并返回一个颜色对象
 *
 *  @param hexString 以"#"或"0x"开头, 后面跟随6位(或3位)16进制数字 表示RGB分量值的字符串
 *  @param alpha     不透明度 (0 ~ 1)
 *
 *  @return 被初始化的颜色
 */
- (UIColor * _Nonnull)rg_initWithHexString:(nonnull NSString *)hexString
                                     alpha:(CGFloat)alpha;

@end
