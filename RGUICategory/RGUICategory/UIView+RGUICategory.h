//
//  UIView+RGUICategory.h
//  RGUICategory
//
//  Created by RAIN on 16/4/10.
//  Copyright © 2016年 Smartech. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    Horizontal,
    Vertical
} RGLineDirection;

@interface UIView (RGUICategory)

/**
 *  为视图添加边线
 *
 *  @param width        边线宽度
 *  @param cornerRadius 边线圆角半径, 若无圆角则值为0
 *  @param color        边线颜色
 */
- (void)rg_addBorderWithWidth:(CGFloat)width
                 cornerRadius:(CGFloat)cornerRadius
                        color:(UIColor *)color;

/**
 *  在 view 的指定位置加指定颜色的线
 *
 *  @param startPoint 起始点坐标
 *  @param length     长度
 *  @param width      宽度
 *  @param color      颜色
 *  @param direction  方向
 *
 *  @return 按参数条件添加的线
 */
- (UIView *)rg_drawLineWithStartPoint:(CGPoint)startPoint
                               length:(CGFloat)length
                                width:(CGFloat)width
                                color:(UIColor *)color
                            direction:(RGLineDirection)direction;

@end
