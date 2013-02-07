//
//  FirstViewController.h
//  Equilibrium
//
//  Created by Stefan on 02.02.13.
//  Copyright (c) 2013 Stefan Schröer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Location.h"
#import <MapKit/MapKit.h>


@interface FirstViewController : UIViewController

@property (nonatomic, strong) Location * myLocation;

@property (strong, nonatomic) IBOutlet MKMapView *mapView;
@property (strong, nonatomic) IBOutlet UILabel *speedLabel;

- (void)beginnLocationUpdates:(Location *)myLocation;

@end
