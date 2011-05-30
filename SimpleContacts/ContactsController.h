//
//  ContactsController.h
//  SimpleContacts
//
//  Created by Aaron McLeod on 11-05-28.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Contact.h"


@interface ContactsController : UITableViewController {
    NSManagedObjectContext * managedObjectContext;
    NSMutableArray * contactArray;
}

@property (nonatomic, retain) NSManagedObjectContext * managedObjectContext;
@property (nonatomic, retain) NSMutableArray *contactArray; 
- (void) fetchRecords;
- (void) addContact:(NSString *)name email:(NSString *)email phone:(NSString *)phone;

@end
