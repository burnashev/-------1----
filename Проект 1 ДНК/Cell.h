//
//  Cell.h
//  Проект 1 ДНК
//
//  Created by КYННЭЙ on 07.11.12.
//  Copyright (c) 2012 КYННЭЙ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Cell : NSObject

@property NSMutableArray *DNA;
    - (void) print;
    - (int) hammingDistance : (Cell *) withCell;
@end