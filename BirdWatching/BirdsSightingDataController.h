//
//  BirdsSightingDataController.h
//  BirdWatching
//
//  Created by m-kuroki on 2014/05/28.
//  Copyright (c) 2014年 Self. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BirdSighting;

@interface BirdsSightingDataController : NSObject
@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;
-(NSUInteger)countOfList;
-(BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
-(void)addBirdSightingWithSighting:(BirdSighting *)sighting;
@end
