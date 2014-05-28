//
//  BirdSighting.m
//  BirdWatching
//
//  Created by m-kuroki on 2014/05/28.
//  Copyright (c) 2014年 Self. All rights reserved.
//

#import "BirdSighting.h"

@implementation BirdSighting
-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date
{
    self = [super init];
    if (self) {
        _name = name;
        _location = location;
        _date = date;
        return self;
    }
    return nil;
}
@end
