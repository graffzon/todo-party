//
//  DetailViewController.h
//  todo-party
//
//  Created by Kirill Zonov on 06.04.13.
//  Copyright (c) 2013 Racoons Group. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
