//
//  BirdSighting.h
//  BirdWatching
//
//  Created by m-kuroki on 2014/05/28.
//  Copyright (c) 2014年 Self. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) NSDate *date;
-(id)initWithName:(NSString *)name location:(NSString *)location
             date:(NSDate *)date;
@end
