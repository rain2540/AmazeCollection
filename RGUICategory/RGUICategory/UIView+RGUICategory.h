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

@interface UIView (DrawTools)

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

@interface UIView (Rect)

/**
 *  获得视图的大小
 *
 *  @return 视图的大小
 */
- (CGSize)rg_size;

/**
 *  获得视图的宽度
 *
 *  @return 视图的宽度
 */
- (CGFloat)rg_width;

/**
 *  设置视图的宽度
 *
 *  @param width 视图的宽度
 */
- (void)rg_setWidth:(CGFloat)width;

- (CGFloat)rg_height;
- (void)rg_setHeight:(CGFloat)height;

- (CGFloat)rg_x;
- (void)rg_setX:(CGFloat)x;

- (CGFloat)rg_y;
- (void)rg_setY:(CGFloat)y;

- (CGFloat)rg_maxX;
- (CGFloat)rg_maxY;
- (CGFloat)rg_midX;
- (CGFloat)rg_midY;

@end
