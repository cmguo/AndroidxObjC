//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/ArrayRes.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationArrayRes")
#ifdef RESTRICT_AndroidxAnnotationArrayRes
#define INCLUDE_ALL_AndroidxAnnotationArrayRes 0
#else
#define INCLUDE_ALL_AndroidxAnnotationArrayRes 1
#endif
#undef RESTRICT_AndroidxAnnotationArrayRes

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXArrayRes_) && (INCLUDE_ALL_AndroidxAnnotationArrayRes || defined(INCLUDE_AXArrayRes))
#define AXArrayRes_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXArrayRes < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXArrayRes : NSObject < AXArrayRes >

@end

J2OBJC_EMPTY_STATIC_INIT(AXArrayRes)

FOUNDATION_EXPORT id<AXArrayRes> create_AXArrayRes(void);

J2OBJC_TYPE_LITERAL_HEADER(AXArrayRes)

#define AndroidxAnnotationArrayRes AXArrayRes

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationArrayRes")
