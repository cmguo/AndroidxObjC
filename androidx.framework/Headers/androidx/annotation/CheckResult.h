//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/CheckResult.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationCheckResult")
#ifdef RESTRICT_AndroidxAnnotationCheckResult
#define INCLUDE_ALL_AndroidxAnnotationCheckResult 0
#else
#define INCLUDE_ALL_AndroidxAnnotationCheckResult 1
#endif
#undef RESTRICT_AndroidxAnnotationCheckResult

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXCheckResult_) && (INCLUDE_ALL_AndroidxAnnotationCheckResult || defined(INCLUDE_AXCheckResult))
#define AXCheckResult_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol AXCheckResult < JavaLangAnnotationAnnotation >

@property (readonly) NSString *suggest;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXCheckResult : NSObject < AXCheckResult > {
 @public
  NSString *suggest_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(AXCheckResult)

FOUNDATION_EXPORT id<AXCheckResult> create_AXCheckResult(NSString *suggest);

J2OBJC_TYPE_LITERAL_HEADER(AXCheckResult)

#define AndroidxAnnotationCheckResult AXCheckResult

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationCheckResult")
