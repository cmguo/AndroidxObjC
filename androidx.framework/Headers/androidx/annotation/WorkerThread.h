//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/WorkerThread.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationWorkerThread")
#ifdef RESTRICT_AndroidxAnnotationWorkerThread
#define INCLUDE_ALL_AndroidxAnnotationWorkerThread 0
#else
#define INCLUDE_ALL_AndroidxAnnotationWorkerThread 1
#endif
#undef RESTRICT_AndroidxAnnotationWorkerThread

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXWorkerThread_) && (INCLUDE_ALL_AndroidxAnnotationWorkerThread || defined(INCLUDE_AXWorkerThread))
#define AXWorkerThread_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXWorkerThread < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXWorkerThread : NSObject < AXWorkerThread >

@end

J2OBJC_EMPTY_STATIC_INIT(AXWorkerThread)

FOUNDATION_EXPORT id<AXWorkerThread> create_AXWorkerThread(void);

J2OBJC_TYPE_LITERAL_HEADER(AXWorkerThread)

#define AndroidxAnnotationWorkerThread AXWorkerThread

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationWorkerThread")
