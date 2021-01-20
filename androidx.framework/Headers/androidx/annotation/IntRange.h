//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/IntRange.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationIntRange")
#ifdef RESTRICT_AndroidxAnnotationIntRange
#define INCLUDE_ALL_AndroidxAnnotationIntRange 0
#else
#define INCLUDE_ALL_AndroidxAnnotationIntRange 1
#endif
#undef RESTRICT_AndroidxAnnotationIntRange

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXIntRange_) && (INCLUDE_ALL_AndroidxAnnotationIntRange || defined(INCLUDE_AXIntRange))
#define AXIntRange_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXIntRange < JavaLangAnnotationAnnotation >

@property (readonly) jlong from;
@property (readonly) jlong to;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXIntRange : NSObject < AXIntRange > {
 @public
  jlong from_;
  jlong to_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(AXIntRange)

FOUNDATION_EXPORT id<AXIntRange> create_AXIntRange(jlong from, jlong to);

J2OBJC_TYPE_LITERAL_HEADER(AXIntRange)

#define AndroidxAnnotationIntRange AXIntRange

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationIntRange")