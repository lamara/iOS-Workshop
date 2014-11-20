//
//  ToDoList.h
//  ToDoList
//
//  Created by Alex Lamar on 11/8/14.
//  Copyright (c) 2014 Alex Lamar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ToDoList : UITableViewController

//Array to keep track of the items present on the ToDoList
@property NSMutableArray *toDoItems;

//Action used to transition back to the ToDoList view.
- (IBAction)unwindToList:(UIStoryboardSegue *)segue;

@end
