//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/XmlRes.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationXmlRes")
#ifdef RESTRICT_AndroidxAnnotationXmlRes
#define INCLUDE_ALL_AndroidxAnnotationXmlRes 0
#else
#define INCLUDE_ALL_AndroidxAnnotationXmlRes 1
#endif
#undef RESTRICT_AndroidxAnnotationXmlRes

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXXmlRes_) && (INCLUDE_ALL_AndroidxAnnotationXmlRes || defined(INCLUDE_AXXmlRes))
#define AXXmlRes_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXXmlRes < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXXmlRes : NSObject < AXXmlRes >

@end

J2OBJC_EMPTY_STATIC_INIT(AXXmlRes)

FOUNDATION_EXPORT id<AXXmlRes> create_AXXmlRes(void);

J2OBJC_TYPE_LITERAL_HEADER(AXXmlRes)

#define AndroidxAnnotationXmlRes AXXmlRes

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationXmlRes")
