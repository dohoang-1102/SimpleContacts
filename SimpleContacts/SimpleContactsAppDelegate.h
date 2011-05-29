//
//  SimpleContactsAppDelegate.h
//  SimpleContacts
//
//  Created by Aaron McLeod on 11-05-28.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
// #import "ContactsController.h"

@interface SimpleContactsAppDelegate : NSObject <UIApplicationDelegate> {
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    
    UIWindow *window;  
    UINavigationController *navigationController;
    // view for adding new contacts
    UIViewController *newContactView;
    UIButton *addButton;

    // controls for the addContactView
    UIButton *saveContactButton;
    UITextField *nameField;
    UITextField *emailField;
    UITextField *phoneField;
    
    UITableView *contactsTable;
}

@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;  
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;  
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@property (nonatomic, retain) IBOutlet UIButton *addButton;
@property (nonatomic, retain) IBOutlet UITableView *contactsTable;

// controller and fields for the form
@property (nonatomic, retain) IBOutlet UIViewController *newContactView;
@property (nonatomic, retain) IBOutlet UITextField *nameField;
@property (nonatomic, retain) IBOutlet UITextField *emailField;
@property (nonatomic, retain) IBOutlet UITextField *phoneField;
@property (nonatomic, retain) IBOutlet UIButton *saveContactButton;


- (NSString *)applicationDocumentsDirectory;
- (IBAction) saveContact;
- (IBAction) switchToAddContactView;

@end
