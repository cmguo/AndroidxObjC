//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/NavigationRes.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationNavigationRes")
#ifdef RESTRICT_AndroidxAnnotationNavigationRes
#define INCLUDE_ALL_AndroidxAnnotationNavigationRes 0
#else
#define INCLUDE_ALL_AndroidxAnnotationNavigationRes 1
#endif
#undef RESTRICT_AndroidxAnnotationNavigationRes

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXNavigationRes_) && (INCLUDE_ALL_AndroidxAnnotationNavigationRes || defined(INCLUDE_AXNavigationRes))
#define AXNavigationRes_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXNavigationRes < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXNavigationRes : NSObject < AXNavigationRes >

@end

J2OBJC_EMPTY_STATIC_INIT(AXNavigationRes)

FOUNDATION_EXPORT id<AXNavigationRes> create_AXNavigationRes(void);

J2OBJC_TYPE_LITERAL_HEADER(AXNavigationRes)

#define AndroidxAnnotationNavigationRes AXNavigationRes

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationNavigationRes")