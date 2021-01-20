//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/lifecycle/lifecycle-livedata-core/src/main/java/androidx/lifecycle/MutableLiveData.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxLifecycleMutableLiveData")
#ifdef RESTRICT_AndroidxLifecycleMutableLiveData
#define INCLUDE_ALL_AndroidxLifecycleMutableLiveData 0
#else
#define INCLUDE_ALL_AndroidxLifecycleMutableLiveData 1
#endif
#undef RESTRICT_AndroidxLifecycleMutableLiveData

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXMutableLiveData_) && (INCLUDE_ALL_AndroidxLifecycleMutableLiveData || defined(INCLUDE_AXMutableLiveData))
#define AXMutableLiveData_

#define RESTRICT_AndroidxLifecycleLiveData 1
#define INCLUDE_AXLiveData 1
#include "androidx/lifecycle/LiveData.h"

@interface AXMutableLiveData : AXLiveData

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithId:(id)value;

- (void)postValueWithId:(id)value;

- (void)setValueWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(AXMutableLiveData)

FOUNDATION_EXPORT void AXMutableLiveData_initWithId_(AXMutableLiveData *self, id value);

FOUNDATION_EXPORT AXMutableLiveData *new_AXMutableLiveData_initWithId_(id value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AXMutableLiveData *create_AXMutableLiveData_initWithId_(id value);

FOUNDATION_EXPORT void AXMutableLiveData_init(AXMutableLiveData *self);

FOUNDATION_EXPORT AXMutableLiveData *new_AXMutableLiveData_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AXMutableLiveData *create_AXMutableLiveData_init(void);

J2OBJC_TYPE_LITERAL_HEADER(AXMutableLiveData)

@compatibility_alias AndroidxLifecycleMutableLiveData AXMutableLiveData;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxLifecycleMutableLiveData")