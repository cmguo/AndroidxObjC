//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/ColorRes.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationColorRes")
#ifdef RESTRICT_AndroidxAnnotationColorRes
#define INCLUDE_ALL_AndroidxAnnotationColorRes 0
#else
#define INCLUDE_ALL_AndroidxAnnotationColorRes 1
#endif
#undef RESTRICT_AndroidxAnnotationColorRes

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXColorRes_) && (INCLUDE_ALL_AndroidxAnnotationColorRes || defined(INCLUDE_AXColorRes))
#define AXColorRes_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXColorRes < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXColorRes : NSObject < AXColorRes >

@end

J2OBJC_EMPTY_STATIC_INIT(AXColorRes)

FOUNDATION_EXPORT id<AXColorRes> create_AXColorRes(void);

J2OBJC_TYPE_LITERAL_HEADER(AXColorRes)

#define AndroidxAnnotationColorRes AXColorRes

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationColorRes")
