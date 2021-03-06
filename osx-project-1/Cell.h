//
//  Cell.h
//  osx-project-1
//
//  Created by Nikolay Kushin on 06.01.13.
//  Copyright (c) 2013 Nikolay Kushin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Cell : NSObject

@property NSMutableArray *DNA;
@property (readonly) NSArray *ELEMENTS;

-(int) hammingDistance: (Cell*) cell;
-(void) print;

@end
