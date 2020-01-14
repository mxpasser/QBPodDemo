#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NSArray+Extension.h"
#import "NSArray+json.h"
#import "NSArray+Log.h"
#import "NSDate+Extension.h"
#import "DeviceID.h"
#import "SAMKeychain.h"
#import "SAMKeychainQuery.h"
#import "SynthesizeSingleton.h"

FOUNDATION_EXPORT double CategoryKitVersionNumber;
FOUNDATION_EXPORT const unsigned char CategoryKitVersionString[];

