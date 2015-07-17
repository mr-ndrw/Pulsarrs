//
//  PulsingButtonView.h
//  Pulsarrs
//
//  Created by Andrew Torski on 12.07.2015.
//  Copyright (c) 2015 Andrew Torski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PulsingButtonView : UIView

//  Properties

/// Foreground color for the button.
@property UIColor * currentColor;

/// Rectangular frame after the button has been tapped.
@property CGRect rectAfterTap;

/// Rectangular frame before the button is tapped.
@property CGRect rectBeforeTap;

/// Button's tap state.
@property BOOL isBeforeTap;

/// Button's row position in table. Defaults to zero.
@property int rowPosition;

/// Button's column position in table. Defaults to zero.
@property int columnPosition;

//  End of Properties

//  Initializers

/**
 @brief Initializes and returns a newly allocated PulsingButtonView object with the specified frame rectangle and foreground color.
 
 @param frame The frame rectangle for the view.
 @param color The color for the foreground of the button.
 */
-(id) initWithFrame:(CGRect) frame
              color:(UIColor*) color;

/**
 @brief Initializes and returns a newly allocated PulsingButtonView object with the specified frame rectangle, foreground color and row and column positions.
 
 @param frame The frame rectangle for the view.
 @param color The color for the foreground of the button.
 @param rowPosition Number of the row in which this button is placed.
 @param columnPosition Number of the column in which this button is placed.
 */
-(id) initWithFrame:(CGRect) frame
              color:(UIColor*) color
        rowPosition:(int) rowPosition
     columnPosition:(int) columnPosition;

//  End of Initializers

//  Methods

/**
 @brief Changes buttons size depeneding on the state it's in - before being tapped and after being tapped.
 */
-(void) changeSize;

//  End of Methods

//  Static methods

/**
 @brief Returns a newly allocated PulsingButtonView object with the specified frame rectangle.
 
 @param frame The frame rectangle for the view.
 */
+(PulsingButtonView *) pulsingButtonFromFrame:(CGRect) frame;

/**
 @brief Returns a newly allocated PulsingButtonView object with the specified frame rectangle and foreground color.
 
 @param frame The frame rectangle for the view.
 @param color The color for the foreground of the button.
 */
+(PulsingButtonView *) pulsingButtonFromFrame:(CGRect) frame
                                        color:(UIColor*) color;

/**
 @brief Returns a newly allocated PulsingButtonView object with the specified frame rectangle, foreground color and row and column positions.
 
 @param frame The frame rectangle for the view.
 @param color The color for the foreground of the button.
 @param rowPosition Number of the row in which this button is placed.
 @param columnPosition Number of the column in which this button is placed.
 */
+(PulsingButtonView *) pulsingButtonFromFrame:(CGRect) frame
                                        color:(UIColor*) color
                                  rowPosition:(int) rowPosition
                               columnPosition:(int) columnPosition;


//  End of Static methods

@end
