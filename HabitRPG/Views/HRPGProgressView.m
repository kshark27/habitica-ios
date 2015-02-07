//
//  HRPGProgressView.m
//  RabbitRPG
//
//  Created by Phillip Thelen on 04/05/14.
//  Copyright (c) 2014 Phillip Thelen. All rights reserved.
//

#import "HRPGProgressView.h"

@implementation HRPGProgressView
@synthesize progress = _progress;


- (id)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    return self;
}

- (void)drawRect:(CGRect)rect {
    rect = self.bounds;

    CGRect coloredRect = CGRectMake(rect.origin.x, rect.origin.y, rect.size.width, self.progressBarHeight);
    coloredRect.size.width *= _progress;
    CGContextRef context = UIGraphicsGetCurrentContext();

    CGColorRef tintColor = self.tintColor.CGColor;

    CGContextClearRect(context, rect);

    CGContextSetFillColorWithColor(context, self.backgroundColor.CGColor);
    CGContextFillRect(context, rect);

    CGContextSetFillColorWithColor(context, tintColor);
    CGContextFillRect(context, coloredRect);
}

- (CGFloat)progressBarHeight {
    return self.bounds.size.height;
}

- (void)setProgress:(CGFloat)progress {
    _progress = progress;
    [self setNeedsDisplay];
}

- (CGFloat)progress {
    return _progress;
}


@end
