//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/lifecycle/lifecycle-livedata-core/src/main/java/androidx/lifecycle/Observer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxLifecycleObserver")
#ifdef RESTRICT_AndroidxLifecycleObserver
#define INCLUDE_ALL_AndroidxLifecycleObserver 0
#else
#define INCLUDE_ALL_AndroidxLifecycleObserver 1
#endif
#undef RESTRICT_AndroidxLifecycleObserver

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXObserver_) && (INCLUDE_ALL_AndroidxLifecycleObserver || defined(INCLUDE_AXObserver))
#define AXObserver_

@protocol AXObserver < JavaObject >

- (void)onChangedWithId:(id)t;

@end

J2OBJC_EMPTY_STATIC_INIT(AXObserver)

J2OBJC_TYPE_LITERAL_HEADER(AXObserver)

#define AndroidxLifecycleObserver AXObserver

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxLifecycleObserver")