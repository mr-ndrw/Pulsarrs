//
//  PulsingButtonView.m
//  Pulsarrs
//
//  Created by Andrew Torski on 12.07.2015.
//  Copyright (c) 2015 Andrew Torski. All rights reserved.
//

#import "PulsingButtonView.h"
#import "CGRect+Category.h"
#import "CGSize+Category.h"
@import UIKit;

@implementation PulsingButtonView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

//  Initializers

-(id) initWithFrame:(CGRect)frame color:(UIColor *)color{
    self = [self initWithFrame:frame];
    
    if(!self){
        return self;
    }

    self.currentColor = color;
    
    [self initializePropertiesToDefault];
    
    return self;
}

-(id) initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    
    if(!self){
        return self;
    }
    
    self.rectBeforeTap = frame;
    CGSize sizeAfterTap  = CGSizeScaleByFactor(frame.size, 1.75);
    CGRect rectAfterTap = CGRectFromCenterPointAndSize(CGRectGetCenterPoint(frame), sizeAfterTap);
    self.rectAfterTap = rectAfterTap;
    self.backgroundColor = [UIColor clearColor];
    
    [self initializePropertiesToDefault];
    
    return self;
}

-(id) initWithFrame:(CGRect)frame color:(UIColor *)color rowPosition:(int)rowPosition columnPosition:(int)columnPosition{
    self = [self initWithFrame:frame color:color];
    
    if(!self){
        return self;
    }
    
    self.rowPosition = rowPosition;
    self.columnPosition = columnPosition;
    
    [self initializePropertiesToDefault];
    
    return self;
}

//  End of Initializers

//  Methods

-(void) changeSize{
    self.frame = self.isBeforeTap ? self.rectBeforeTap : self.rectAfterTap;
    self.isBeforeTap = !self.isBeforeTap;
}

//  End of Methods

//  Private methods

-(void) initializePropertiesToDefault{
    self.currentColor = [UIColor yellowColor];
    self.isBeforeTap = NO;
    self.rowPosition = 0;
    self.columnPosition = 0;
}

//  End of Private methods

//  Static methods

//  

@end
