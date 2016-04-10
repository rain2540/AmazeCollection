//
//  UIView+RGUICategory.m
//  RGUICategory
//
//  Created by RAIN on 16/4/10.
//  Copyright © 2016年 Smartech. All rights reserved.
//

#import "UIView+RGUICategory.h"

@implementation UIView (RGUICategory)

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
