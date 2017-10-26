//
//  ViewController.h
//  SQLiteObjectiveC
//
//  Created by Sneha Kasetty Sudarshan on 9/23/17.
//  Copyright © 2017 Sneha Kasetty Sudarshan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) NSString *databasePath;
@property (nonatomic) sqlite3 *personDB;

@property (weak, nonatomic) IBOutlet UITextField *name;
@property (weak, nonatomic) IBOutlet UITextField *location;
@property (weak, nonatomic) IBOutlet UITextView *address;

@property (weak, nonatomic) IBOutlet UITextField *phone;
@property (weak, nonatomic) IBOutlet UITextField *email;
@property (weak, nonatomic) IBOutlet UILabel *status;


@end

