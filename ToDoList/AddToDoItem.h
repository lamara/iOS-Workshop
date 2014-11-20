//
//  AddToDoItem.h
//  ToDoList
//
//  Created by Alex Lamar on 11/8/14.
//  Copyright (c) 2014 Alex Lamar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ToDoItem.h"

@interface AddToDoItem : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *textField;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneButton;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *cancelButton;

@property ToDoItem *toDoItem;

@end
