//

//  ZipWeather
//
//  Created by apple on 10/15/08.
//  Copyright 2008 ACS Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface TheWeather : NSObject {

}
+(NSString*)getWeatherXmlForZipCode: (NSString*)zipCode;
@end