//
//  RootViewController.h
//  ZipWeather
//
//  Created by Rick DeMartini on 07/15/14.
//  Copyright Demapps.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MainViewController;
@class FlipsideViewController;

@interface RootViewController : UIViewController {

	IBOutlet UIButton *infoButton;
	MainViewController *mainViewController;
	FlipsideViewController *flipsideViewController;
	UINavigationBar *flipsideNavigationBar;
}

@property (nonatomic, strong) UIButton *infoButton;
@property (nonatomic, strong) MainViewController *mainViewController;
@property (nonatomic, strong) UINavigationBar *flipsideNavigationBar;
@property (nonatomic, strong) FlipsideViewController *flipsideViewController;

- (IBAction)toggleView;

@end
