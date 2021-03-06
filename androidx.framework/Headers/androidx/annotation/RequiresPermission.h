//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: androidx/annotation/annotation/src/main/java/androidx/annotation/RequiresPermission.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidxAnnotationRequiresPermission")
#ifdef RESTRICT_AndroidxAnnotationRequiresPermission
#define INCLUDE_ALL_AndroidxAnnotationRequiresPermission 0
#else
#define INCLUDE_ALL_AndroidxAnnotationRequiresPermission 1
#endif
#undef RESTRICT_AndroidxAnnotationRequiresPermission

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AXRequiresPermission_) && (INCLUDE_ALL_AndroidxAnnotationRequiresPermission || defined(INCLUDE_AXRequiresPermission))
#define AXRequiresPermission_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;

@protocol AXRequiresPermission < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;
@property (readonly) IOSObjectArray *allOf;
@property (readonly) IOSObjectArray *anyOf;
@property (readonly) jboolean conditional;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXRequiresPermission : NSObject < AXRequiresPermission > {
 @public
  NSString *value_;
  IOSObjectArray *allOf_;
  IOSObjectArray *anyOf_;
  jboolean conditional_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(AXRequiresPermission)

FOUNDATION_EXPORT id<AXRequiresPermission> create_AXRequiresPermission(IOSObjectArray *allOf, IOSObjectArray *anyOf, jboolean conditional, NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(AXRequiresPermission)

#define AndroidxAnnotationRequiresPermission AXRequiresPermission

#endif

#if !defined (AXRequiresPermission_Read_) && (INCLUDE_ALL_AndroidxAnnotationRequiresPermission || defined(INCLUDE_AXRequiresPermission_Read))
#define AXRequiresPermission_Read_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@protocol AXRequiresPermission;

@protocol AXRequiresPermission_Read < JavaLangAnnotationAnnotation >

@property (readonly) id<AXRequiresPermission> value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXRequiresPermission_Read : NSObject < AXRequiresPermission_Read > {
 @public
  id<AXRequiresPermission> value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(AXRequiresPermission_Read)

FOUNDATION_EXPORT id<AXRequiresPermission_Read> create_AXRequiresPermission_Read(id<AXRequiresPermission> value);

J2OBJC_TYPE_LITERAL_HEADER(AXRequiresPermission_Read)

#endif

#if !defined (AXRequiresPermission_Write_) && (INCLUDE_ALL_AndroidxAnnotationRequiresPermission || defined(INCLUDE_AXRequiresPermission_Write))
#define AXRequiresPermission_Write_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@protocol AXRequiresPermission;

@protocol AXRequiresPermission_Write < JavaLangAnnotationAnnotation >

@property (readonly) id<AXRequiresPermission> value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AXRequiresPermission_Write : NSObject < AXRequiresPermission_Write > {
 @public
  id<AXRequiresPermission> value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(AXRequiresPermission_Write)

FOUNDATION_EXPORT id<AXRequiresPermission_Write> create_AXRequiresPermission_Write(id<AXRequiresPermission> value);

J2OBJC_TYPE_LITERAL_HEADER(AXRequiresPermission_Write)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidxAnnotationRequiresPermission")
