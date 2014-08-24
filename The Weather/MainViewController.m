//
//  MainViewController.m
//  ZipWeather
//
//  Created by Rick DeMartini on 07/15/14.
//  Copyright Demapps.com. All rights reserved.
//

#import "MainViewController.h"
#import "MainView.h"
#import "TheWeather.h"

@implementation MainViewController

- (IBAction)goClick {
	NSString* weatherXml = [TheWeather getWeatherXmlForZipCode: textField.text];
	NSData* htmlData = [weatherXml dataUsingEncoding:NSUTF8StringEncoding];
	[webView loadData:htmlData MIMEType:@"text/html" textEncodingName:@"UTF-8" baseURL:[NSURL URLWithString:@"http://www.demapps.com"]];  	 
	
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
	if (self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil]) {
		// Custom initialization
	}
	return self;
}


 - (void)viewDidLoad {
 }

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
	// Return YES for supported orientations
	return (interfaceOrientation == UIInterfaceOrientationPortrait);
}


- (void)didReceiveMemoryWarning {
	[super didReceiveMemoryWarning]; // Releases the view if it doesn't have a superview
	// Release anything that's not essential, such as cached data
}



@end
