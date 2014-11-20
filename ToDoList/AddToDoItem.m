//
//  AddToDoItem.m
//  ToDoList
//
//  Created by Alex Lamar on 11/8/14.
//  Copyright (c) 2014 Alex Lamar. All rights reserved.
//

#import "AddToDoItem.h"
#import "ToDoItem.h"


@implementation AddToDoItem



- (void) prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if (sender != self.doneButton) {
        return;
    }
    
    if (self.textField.text.length > 0) {
        self.toDoItem = [[ToDoItem alloc] init];
        self.toDoItem.itemName = self.textField.text;
    }
    
    

}



@end
