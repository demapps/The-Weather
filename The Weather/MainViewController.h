//
//  MainViewController.h
//  ZipWeather
//
//  Created by Rick DeMartini on 07/15/14.
//  Copyright Demapps.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewController : UIViewController {
    IBOutlet UIWebView *webView;
    IBOutlet UITextField *textField;

}
- (IBAction)goClick;
@end
