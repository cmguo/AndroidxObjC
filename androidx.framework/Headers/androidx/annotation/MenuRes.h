//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/MenuRes.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationMenuRes")
#ifdef RESTRICT_AndroidxAnnotationMenuRes
#define INCLUDE_ALL_AndroidxAnnotationMenuRes 0
#else
#define INCLUDE_ALL_AndroidxAnnotationMenuRes 1
#endif
#undef RESTRICT_AndroidxAnnotationMenuRes

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXMenuRes_) && (INCLUDE_ALL_AndroidxAnnotationMenuRes || defined(INCLUDE_AXMenuRes))
#define AXMenuRes_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXMenuRes < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXMenuRes : NSObject < AXMenuRes >

@end

J2OBJC_EMPTY_STATIC_INIT(AXMenuRes)

FOUNDATION_EXPORT id<AXMenuRes> create_AXMenuRes(void);

J2OBJC_TYPE_LITERAL_HEADER(AXMenuRes)

#define AndroidxAnnotationMenuRes AXMenuRes

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationMenuRes")
