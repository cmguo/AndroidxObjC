//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/StyleRes.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationStyleRes")
#ifdef RESTRICT_AndroidxAnnotationStyleRes
#define INCLUDE_ALL_AndroidxAnnotationStyleRes 0
#else
#define INCLUDE_ALL_AndroidxAnnotationStyleRes 1
#endif
#undef RESTRICT_AndroidxAnnotationStyleRes

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXStyleRes_) && (INCLUDE_ALL_AndroidxAnnotationStyleRes || defined(INCLUDE_AXStyleRes))
#define AXStyleRes_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXStyleRes < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXStyleRes : NSObject < AXStyleRes >

@end

J2OBJC_EMPTY_STATIC_INIT(AXStyleRes)

FOUNDATION_EXPORT id<AXStyleRes> create_AXStyleRes(void);

J2OBJC_TYPE_LITERAL_HEADER(AXStyleRes)

#define AndroidxAnnotationStyleRes AXStyleRes

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationStyleRes")
