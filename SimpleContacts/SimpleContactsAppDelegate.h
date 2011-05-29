//
//  SimpleContactsAppDelegate.h
//  SimpleContacts
//
//  Created by Aaron McLeod on 11-05-28.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface SimpleContactsAppDelegate : NSObject <UIApplicationDelegate> {
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;
    NSPersistentStoreCoordinator *persistentStoreCoordinator;  
    UIWindow *window;  
    UINavigationController *navigationController;  
}

@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;  
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;  
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;  
@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) UINavigationController *navigationController;
- (NSString *)applicationDocumentsDirectory;

@end
