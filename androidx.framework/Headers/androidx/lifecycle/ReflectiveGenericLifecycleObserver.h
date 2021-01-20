//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/lifecycle/lifecycle-common/src/main/java/androidx/lifecycle/ReflectiveGenericLifecycleObserver.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxLifecycleReflectiveGenericLifecycleObserver")
#ifdef RESTRICT_AndroidxLifecycleReflectiveGenericLifecycleObserver
#define INCLUDE_ALL_AndroidxLifecycleReflectiveGenericLifecycleObserver 0
#else
#define INCLUDE_ALL_AndroidxLifecycleReflectiveGenericLifecycleObserver 1
#endif
#undef RESTRICT_AndroidxLifecycleReflectiveGenericLifecycleObserver

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXReflectiveGenericLifecycleObserver_) && (INCLUDE_ALL_AndroidxLifecycleReflectiveGenericLifecycleObserver || defined(INCLUDE_AXReflectiveGenericLifecycleObserver))
#define AXReflectiveGenericLifecycleObserver_

#define RESTRICT_AndroidxLifecycleLifecycleEventObserver 1
#define INCLUDE_AXLifecycleEventObserver 1
#include "androidx/lifecycle/LifecycleEventObserver.h"

@class AXLifecycle_Event;
@protocol AXLifecycleOwner;

@interface AXReflectiveGenericLifecycleObserver : NSObject < AXLifecycleEventObserver >

#pragma mark Public

- (void)onStateChangedWithAXLifecycleOwner:(id<AXLifecycleOwner> __nonnull)source
                     withAXLifecycle_Event:(AXLifecycle_Event * __nonnull)event;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithId:(id)wrapped;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(AXReflectiveGenericLifecycleObserver)

FOUNDATION_EXPORT void AXReflectiveGenericLifecycleObserver_initPackagePrivateWithId_(AXReflectiveGenericLifecycleObserver *self, id wrapped);

FOUNDATION_EXPORT AXReflectiveGenericLifecycleObserver *new_AXReflectiveGenericLifecycleObserver_initPackagePrivateWithId_(id wrapped) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AXReflectiveGenericLifecycleObserver *create_AXReflectiveGenericLifecycleObserver_initPackagePrivateWithId_(id wrapped);

J2OBJC_TYPE_LITERAL_HEADER(AXReflectiveGenericLifecycleObserver)

@compatibility_alias AndroidxLifecycleReflectiveGenericLifecycleObserver AXReflectiveGenericLifecycleObserver;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxLifecycleReflectiveGenericLifecycleObserver")