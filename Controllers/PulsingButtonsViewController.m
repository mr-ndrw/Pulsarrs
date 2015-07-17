//
//  PulsingButtonsViewController.m
//  Pulsarrs
//
//  Created by Andrew Torski on 17.07.2015.
//  Copyright (c) 2015 Andrew Torski. All rights reserved.
//

#import "PulsingButtonsViewController.h"
#import "PulsingButtonView.h"
#import "UIColor+Category.h"
#import "CGRect+Category.h"

@interface PulsingButtonsViewController ()

@end

@implementation PulsingButtonsViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    self.view.backgroundColor = [UIColor colorFromRed:255 green:222 blue:219 alpha:1.0];
    
    CGPoint centerPoint = CGRectGetCenterPoint(self.view.frame);
    PulsingButtonView * centerButton =
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
