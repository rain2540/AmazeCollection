//
//  UIView+RGUICategory.m
//  RGUICategory
//
//  Created by RAIN on 16/4/10.
//  Copyright © 2016年 Smartech. All rights reserved.
//

#import "UIView+RGUICategory.h"

@implementation UIView (DrawTools)

- (void)rg_addBorderWithWidth:(CGFloat)width
                 cornerRadius:(CGFloat)cornerRadius
                        color:(UIColor *)color
{
    self.layer.masksToBounds = YES;
    self.layer.borderWidth = width;
    self.layer.cornerRadius = cornerRadius;
    self.layer.borderColor = color.CGColor;
}

- (UIView *)rg_drawLineWithStartPoint:(CGPoint)startPoint
                               length:(CGFloat)length
                                width:(CGFloat)width
                                color:(UIColor *)color
                            direction:(RGLineDirection)direction
{
    UIView *line = [[UIView alloc] init];
    line.backgroundColor = color;
    
    switch (direction) {
        case Horizontal:
            line.frame = CGRectMake(startPoint.x, startPoint.y, length, width);
            break;
            
        case Vertical:
            line.frame = CGRectMake(startPoint.x, startPoint.y, width, length);
            break;
    }
    [self addSubview:line];
    return line;
}

@end

@implementation UIView (Rect)

#pragma mark Size
- (CGSize)rg_size {
    return self.bounds.size;
}

- (CGFloat)rg_width {
    return [self rg_size].width;
}

- (void)rg_setWidth:(CGFloat)width {
    CGRect frame = self.frame;
    frame.size.width = width;
    self.frame = frame;
}

- (CGFloat)rg_height {
    return [self rg_size].height;
}

- (void)rg_setHeight:(CGFloat)height {
    CGRect frame = self.frame;
    frame.size.height = height;
    self.frame = frame;
}

#pragma mark Origin
- (CGFloat)rg_x {
    return self.frame.origin.x;
}

- (void)rg_setX:(CGFloat)x {
    CGRect frame = self.frame;
    frame.origin.x = x;
    self.frame = frame;
}

- (CGFloat)rg_y {
    return self.frame.origin.y;
}

- (void)rg_setY:(CGFloat)y {
    CGRect frame = self.frame;
    frame.origin.y = y;
    self.frame = frame;
}

- (CGFloat)rg_maxX {
    return [self rg_x] + [self rg_width];
}

- (CGFloat)rg_maxY {
    return [self rg_y] + [self rg_height];
}

- (CGFloat)rg_midX {
    return ([self rg_x] + [self rg_maxX]) / 2;
}

- (CGFloat)rg_midY {
    return ([self rg_y] + [self rg_maxY]) / 2;
}

@end
