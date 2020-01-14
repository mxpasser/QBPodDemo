//
//  NSArray+json.h
//  LXMath
//
//  Created by zuosong on 2019/5/11.
//  Copyright © 2019 LX. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (json)

/**
 jsonstring初始化数组

 @param jsonString json string
 @return 数组对象
 */
+ (NSArray *)arrayWithJsonString:(NSString *)jsonString;

/**
 json Data 初始化数组

 @param jsonData json类型的data
 @return 数组对象
 */
+ (NSArray *)arrayWithJsonData:(NSData *)jsonData;

@end

NS_ASSUME_NONNULL_END
