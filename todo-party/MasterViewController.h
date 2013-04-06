//
//  MasterViewController.h
//  todo-party
//
//  Created by Kirill Zonov on 06.04.13.
//  Copyright (c) 2013 Racoons Group. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
