//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/DoNotInline.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationDoNotInline")
#ifdef RESTRICT_AndroidxAnnotationDoNotInline
#define INCLUDE_ALL_AndroidxAnnotationDoNotInline 0
#else
#define INCLUDE_ALL_AndroidxAnnotationDoNotInline 1
#endif
#undef RESTRICT_AndroidxAnnotationDoNotInline

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXDoNotInline_) && (INCLUDE_ALL_AndroidxAnnotationDoNotInline || defined(INCLUDE_AXDoNotInline))
#define AXDoNotInline_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXDoNotInline < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXDoNotInline : NSObject < AXDoNotInline >

@end

J2OBJC_EMPTY_STATIC_INIT(AXDoNotInline)

FOUNDATION_EXPORT id<AXDoNotInline> create_AXDoNotInline(void);

J2OBJC_TYPE_LITERAL_HEADER(AXDoNotInline)

#define AndroidxAnnotationDoNotInline AXDoNotInline

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationDoNotInline")
