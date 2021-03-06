//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/Size.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationSize")
#ifdef RESTRICT_AndroidxAnnotationSize
#define INCLUDE_ALL_AndroidxAnnotationSize 0
#else
#define INCLUDE_ALL_AndroidxAnnotationSize 1
#endif
#undef RESTRICT_AndroidxAnnotationSize

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXSize_) && (INCLUDE_ALL_AndroidxAnnotationSize || defined(INCLUDE_AXSize))
#define AXSize_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXSize < JavaLangAnnotationAnnotation >

@property (readonly) jlong value;
@property (readonly) jlong min;
@property (readonly) jlong max;
@property (readonly) jlong multiple;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXSize : NSObject < AXSize > {
 @public
  jlong value_;
  jlong min_;
  jlong max_;
  jlong multiple_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(AXSize)

FOUNDATION_EXPORT id<AXSize> create_AXSize(jlong max, jlong min, jlong multiple, jlong value);

J2OBJC_TYPE_LITERAL_HEADER(AXSize)

#define AndroidxAnnotationSize AXSize

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationSize")
