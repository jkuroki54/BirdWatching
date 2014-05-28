//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by m-kuroki on 2014/05/28.
//  Copyright (c) 2014年 Self. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BirdSightingDataController;
@interface BirdsMasterViewController : UITableViewController
@property (strong, nonatomic) BirdSightingDataController *dataController;
@end
