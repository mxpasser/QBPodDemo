//
//  NSArray+Extension.m
//  LXMath
//
//  Created by 周培玉 on 2018/1/17.
//  Copyright © 2018年 LXM. All rights reserved.
//

#import "NSArray+Extension.h"

@implementation NSArray (Extension)

- (NSArray *)reverseArray {
    NSMutableArray *arrayTemp = [NSMutableArray arrayWithCapacity:[self count]];
    NSEnumerator *enumerator = [self reverseObjectEnumerator];
    for (id element in enumerator) {
        [arrayTemp addObject:element];
    }

    return arrayTemp;
}

- (id)safe_objectAtIndex:(NSUInteger)index {
    if (self.count == 0) {
        return nil;
    }
    index = MIN(index, self.count-1);
    return [self objectAtIndex:index];
}

- (void)lx_forEach:(void (^)(id))block {
    for (id element in self) {
        block(element);
    }
}

@end
