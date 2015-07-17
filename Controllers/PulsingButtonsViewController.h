//
//  PulsingButtonsViewController.h
//  Pulsarrs
//
//  Created by Andrew Torski on 17.07.2015.
//  Copyright (c) 2015 Andrew Torski. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 @brief ViewController for a board that contains PulsingButtons and which is responsible for handling:
 
 - drawing the buttons, based on the number of buttons in rows and columns,
 - hooking up the buttons with handles to events,
 - handling the events of tapping,
 - propagating animations across the board.
 */
@interface PulsingButtonsViewController : UIViewController

//  Properties

@property int numberOfButtonsInRow;
@property int numberOfButtonsInColumns;

//  End of Properties

@end
