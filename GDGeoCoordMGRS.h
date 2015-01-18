//
//  GDGeoCoordMGRS.h
//  test_for_long_lat_2_mgrs
//
//  Created by Gautam Dey on 6/21/11.
//  Copyright 2011 AppZorz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import "GDGeoCoordUTM.h"

typedef enum {
    GDGeoCoordMGRS1m = 0,
    GDGeoCoordMGRS10m,
    GDGeoCoordMGRS100m,
    GDGeoCoordMGRS1000m,
    GDGeoCoordMGRS10000m,
    GDGeoCoordMGRS100000m,
    GDGeoCoordMGRS1000000m
} kGDGeoCoordMGRSPrecision;


@interface GDGeoCoordMGRS : NSObject

@property (nonatomic, strong) NSString* zoneString;
@property (nonatomic, strong) NSString* letterEast;
@property (nonatomic, strong) NSString* letterNorth;
@property (nonatomic, strong) NSString* mgrsEast;
@property (nonatomic, strong) NSString* mgrsNorth;
@property (nonatomic) kGDGeoCoordMGRSPrecision precision;



- (id)initWithUTM:(GDGeoCoordUTM *)utm;

- (id)initFromCoord:(CLLocationCoordinate2D)coord;
- (id)initWithLatitude:(CLLocationDegrees)latitude andLongitude:(CLLocationDegrees)longitude;
- (id)initWithEllips:(kGDGeoCoordEllipsoidType)ellips 
            latitude:(CLLocationDegrees)latitude 
        andLongitude:(CLLocationDegrees)longitude;

- (id)initWithZone:(NSString *)zone 
          mgrsEast:(NSString *)mgrsEast 
         mgrsNorth:(NSString *)mgrsNorth 
        letterEast:(NSString *)letterEast 
       letterNorth:(NSString *)letterNorth;

- (NSString*)mgrsWithPrecision:(kGDGeoCoordMGRSPrecision)precision;

@end
