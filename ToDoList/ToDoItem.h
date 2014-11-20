//
//  ToDoItem.h
//  ToDoList
//
//  Created by Alex Lamar on 11/8/14.
//  Copyright (c) 2014 Alex Lamar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;

@property BOOL completed;

@property (readonly) NSDate *creationDate;

@end
