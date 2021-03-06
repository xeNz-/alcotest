//
//  Bar.h
//  RainbowTest
//
//  Created by Sarah LAFORETS on 10/11/2015.
//  Copyright © 2015 Sarah LAFORETS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "AppDelegate.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Bar : NSManagedObject

// Insert code here to declare functionality of your managed object subclass
- (NSArray *)fetchBoisson;
+ (instancetype)sharedInstance;
- (NSArray *)fetchAllBar;
- (void)addBarInDataBase:(NSString *)name withDegre:(NSString *)degree;
@end

NS_ASSUME_NONNULL_END

#import "Bar+CoreDataProperties.h"
