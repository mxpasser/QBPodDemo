//
//  NSArray+Extension.h
//  LXMath
//
//  Created by 周培玉 on 2018/1/17.
//  Copyright © 2018年 LXM. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Extension)

/**
  * 翻转数组
 */
- (NSArray *)reverseArray;


/**
 safe access
 */
- (id)safe_objectAtIndex:(NSUInteger)index;

/**
 遍历数组
 */
- (void)lx_forEach:(void(^)(id obj))block;

@end
