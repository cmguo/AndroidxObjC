//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/BinderThread.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationBinderThread")
#ifdef RESTRICT_AndroidxAnnotationBinderThread
#define INCLUDE_ALL_AndroidxAnnotationBinderThread 0
#else
#define INCLUDE_ALL_AndroidxAnnotationBinderThread 1
#endif
#undef RESTRICT_AndroidxAnnotationBinderThread

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXBinderThread_) && (INCLUDE_ALL_AndroidxAnnotationBinderThread || defined(INCLUDE_AXBinderThread))
#define AXBinderThread_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXBinderThread < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXBinderThread : NSObject < AXBinderThread >

@end

J2OBJC_EMPTY_STATIC_INIT(AXBinderThread)

FOUNDATION_EXPORT id<AXBinderThread> create_AXBinderThread(void);

J2OBJC_TYPE_LITERAL_HEADER(AXBinderThread)

#define AndroidxAnnotationBinderThread AXBinderThread

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationBinderThread")
