//
//  YZIWeatherViewController.h
//  WeatherObjC
//
//  Created by Yvette Zhukovsky on 1/22/19.
//  Copyright © 2019 Lambda School. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YZIWeatherController.h"

NS_ASSUME_NONNULL_BEGIN

@interface YZIWeatherViewController : UIViewController <UISearchBarDelegate, UICollectionViewDataSource>

@property YZIWeatherController *weatherController ;






@end

NS_ASSUME_NONNULL_END
