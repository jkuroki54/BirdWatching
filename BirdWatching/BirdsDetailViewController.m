//
//  BirdsDetailViewController.m
//  BirdWatching
//
//  Created by m-kuroki on 2014/05/28.
//  Copyright (c) 2014年 Self. All rights reserved.
//

#import "BirdSighting.h"
#import "BirdsDetailViewController.h"

@interface BirdsDetailViewController ()
- (void)configureView;
@end

@implementation BirdsDetailViewController

#pragma mark - Managing the detail item

- (void)setSighting:(BirdSighting *) newSighting
{
    if (_sighting != newSighting) {
        _sighting = newSighting;
        // ビューを更新する
        [self configureView];
    }
}

- (void)configureView
{
    // ユーザインターフェイスを詳細アイテム用に更新する
    BirdSighting *theSighting = self.sighting;
    static NSDateFormatter *formatter = nil;
    if (formatter == nil) {
        formatter = [[NSDateFormatter alloc] init];
        [formatter setDateStyle:NSDateFormatterMediumStyle];
    }
    if (theSighting) {
        self.birdNameLabel.text = theSighting.name;
        self.locationLabel.text = theSighting.location;
        self.dateLabel.text = [formatter stringFromDate:(NSDate
                                                         *)theSighting.date];
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
