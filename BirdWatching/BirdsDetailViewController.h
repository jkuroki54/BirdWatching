//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by m-kuroki on 2014/05/28.
//  Copyright (c) 2014年 Self. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BirdSighting;
@interface BirdsDetailViewController : UIViewController

@property (strong, nonatomic) BirdSighting *sighting;
@property (weak, nonatomic) IBOutlet UILabel *birdNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@end
