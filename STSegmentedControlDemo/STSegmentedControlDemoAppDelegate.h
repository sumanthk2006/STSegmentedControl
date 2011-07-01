//
//  STSegmentedControlDemoAppDelegate.h
//  STSegmentedControlDemo
//
//  Created by Cedric Vandendriessche on 01/07/11.
//  Copyright 2011 FreshCreations. All rights reserved.
//

#import <UIKit/UIKit.h>

@class STSegmentedControlDemoViewController;

@interface STSegmentedControlDemoAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet STSegmentedControlDemoViewController *viewController;

@end
