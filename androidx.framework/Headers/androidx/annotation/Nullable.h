//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/Nullable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationNullable")
#ifdef RESTRICT_AndroidxAnnotationNullable
#define INCLUDE_ALL_AndroidxAnnotationNullable 0
#else
#define INCLUDE_ALL_AndroidxAnnotationNullable 1
#endif
#undef RESTRICT_AndroidxAnnotationNullable

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXNullable_) && (INCLUDE_ALL_AndroidxAnnotationNullable || defined(INCLUDE_AXNullable))
#define AXNullable_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXNullable < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXNullable : NSObject < AXNullable >

@end

J2OBJC_EMPTY_STATIC_INIT(AXNullable)

FOUNDATION_EXPORT id<AXNullable> create_AXNullable(void);

J2OBJC_TYPE_LITERAL_HEADER(AXNullable)

#define AndroidxAnnotationNullable AXNullable

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationNullable")