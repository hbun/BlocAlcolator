//
//  ViewController.h
//  Alcolator
//
//  Created by Husam Al-Ziab on 8/11/15.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCounterSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

-(void)buttonPressed:(UIButton *)sender;

@end

