//
//  GDGeoCLLocationCategory.m
//  test_for_long_lat_2_mgrs
//
//  Created by Gautam Dey on 6/25/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "GDGeoCLLocationCategory.h"

@implementation CLLocation (GDGeoCLLocationCategory)


- (GDGeoCoordMGRS*)mgrs
{
    return [[GDGeoCoordMGRS alloc] initFromCoord:[self coordinate]];
}

- (GDGeoCoordUTM*)utm
{
    return [[GDGeoCoordUTM alloc] initFromCoords:[self coordinate]];
}
@end
