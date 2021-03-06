//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/GuardedBy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationGuardedBy")
#ifdef RESTRICT_AndroidxAnnotationGuardedBy
#define INCLUDE_ALL_AndroidxAnnotationGuardedBy 0
#else
#define INCLUDE_ALL_AndroidxAnnotationGuardedBy 1
#endif
#undef RESTRICT_AndroidxAnnotationGuardedBy

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXGuardedBy_) && (INCLUDE_ALL_AndroidxAnnotationGuardedBy || defined(INCLUDE_AXGuardedBy))
#define AXGuardedBy_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXGuardedBy < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXGuardedBy : NSObject < AXGuardedBy > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(AXGuardedBy)

FOUNDATION_EXPORT id<AXGuardedBy> create_AXGuardedBy(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(AXGuardedBy)

#define AndroidxAnnotationGuardedBy AXGuardedBy

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationGuardedBy")
