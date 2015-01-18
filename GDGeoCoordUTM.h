//
//  GDGeoCoordUTM.h
//  test_for_long_lat_2_mgrs
//
//  Created by Gautam Dey on 6/19/11.
//  Copyright 2011 AppZorz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import "GDGeoCoordConv.h"




@interface GDGeoCoordUTM : NSObject

@property (nonatomic,strong) NSString* zoneString;
@property (nonatomic) CLLocationDegrees easting;
@property (nonatomic) CLLocationDegrees northing;

- (id)initFromEllips:(kGDGeoCoordEllipsoidType)ellips zone:(int)zone latitude:(double)latitude andLongitude:(double)longitude;
- (id)initFromEllips:(kGDGeoCoordEllipsoidType)ellips latitude:(CLLocationDegrees)latitude andLongitude:(CLLocationDegrees)longitude;
- (id)initFromLatitude:(CLLocationDegrees)latitude andLongitude:(CLLocationDegrees)longitude;
- (id)initFromCoords:(CLLocationCoordinate2D)coords;


- (NSString*)zoneLetter;
- (NSInteger)zoneNumber;

@end
