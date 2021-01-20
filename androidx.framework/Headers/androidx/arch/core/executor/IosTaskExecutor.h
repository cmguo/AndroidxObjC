//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/arch/core/core-runtime/src/main/java/androidx/arch/core/executor/IosTaskExecutor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxArchCoreExecutorIosTaskExecutor")
#ifdef RESTRICT_AndroidxArchCoreExecutorIosTaskExecutor
#define INCLUDE_ALL_AndroidxArchCoreExecutorIosTaskExecutor 0
#else
#define INCLUDE_ALL_AndroidxArchCoreExecutorIosTaskExecutor 1
#endif
#undef RESTRICT_AndroidxArchCoreExecutorIosTaskExecutor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXIosTaskExecutor_) && (INCLUDE_ALL_AndroidxArchCoreExecutorIosTaskExecutor || defined(INCLUDE_AXIosTaskExecutor))
#define AXIosTaskExecutor_

#define RESTRICT_AndroidxArchCoreExecutorTaskExecutor 1
#define INCLUDE_AXTaskExecutor 1
#include "androidx/arch/core/executor/TaskExecutor.h"

@protocol JavaLangRunnable;

@interface AXIosTaskExecutor : AXTaskExecutor

#pragma mark Public

- (instancetype __nonnull)init;

- (void)executeOnDiskIOWithJavaLangRunnable:(id<JavaLangRunnable>)runnable;

- (jboolean)isMainThread;

- (void)postToMainThreadWithJavaLangRunnable:(id<JavaLangRunnable>)runnable;

@end

J2OBJC_EMPTY_STATIC_INIT(AXIosTaskExecutor)

FOUNDATION_EXPORT void AXIosTaskExecutor_init(AXIosTaskExecutor *self);

FOUNDATION_EXPORT AXIosTaskExecutor *new_AXIosTaskExecutor_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AXIosTaskExecutor *create_AXIosTaskExecutor_init(void);

J2OBJC_TYPE_LITERAL_HEADER(AXIosTaskExecutor)

@compatibility_alias AndroidxArchCoreExecutorIosTaskExecutor AXIosTaskExecutor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxArchCoreExecutorIosTaskExecutor")
