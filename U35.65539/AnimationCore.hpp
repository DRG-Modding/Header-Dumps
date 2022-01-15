#ifndef UE4SS_SDK_AnimationCore_HPP
#define UE4SS_SDK_AnimationCore_HPP

#include "AnimationCore_enums.hpp"

class UAnimationDataSourceRegistry : UObject
{
    TMap<FName, TWeakObjectPtr<UObject>> DataSources;
}

struct FCCDIKChainLink
{
}

struct FAxis
{
    FVector Axis;
    bool bInLocalSpace;
}

struct FConstraintData
{
    FConstraintDescriptor Constraint;
    float Weight;
    bool bMaintainOffset;
    FTransform Offset;
    FTransform CurrentTransform;
}

struct FConstraintDescriptor
{
    EConstraintType Type;
}

struct FConstraintDescriptionEx
{
    FFilterOptionPerAxis AxesFilterOption;
}

struct FFilterOptionPerAxis
{
    bool bX;
    bool bY;
    bool bZ;
}

struct FAimConstraintDescription : FConstraintDescriptionEx
{
    FAxis LookAt_Axis;
    FAxis LookUp_Axis;
    bool bUseLookUp;
    FVector LookUpTarget;
}

struct FTransformConstraintDescription : FConstraintDescriptionEx
{
    ETransformConstraintType TransformType;
}

struct FTransformConstraint
{
    FConstraintDescription Operator;
    FName SourceNode;
    FName TargetNode;
    float Weight;
    bool bMaintainOffset;
}

struct FConstraintDescription
{
    bool bTranslation;
    bool bRotation;
    bool bScale;
    bool bParent;
    FFilterOptionPerAxis TranslationAxes;
    FFilterOptionPerAxis RotationAxes;
    FFilterOptionPerAxis ScaleAxes;
}

struct FConstraintOffset
{
    FVector Translation;
    FQuat Rotation;
    FVector Scale;
    FTransform Parent;
}

struct FTransformFilter
{
    FFilterOptionPerAxis TranslationFilter;
    FFilterOptionPerAxis RotationFilter;
    FFilterOptionPerAxis ScaleFilter;
}

struct FEulerTransform
{
    FVector Location;
    FRotator Rotation;
    FVector Scale;
}

struct FFABRIKChainLink
{
}

struct FNodeChain
{
    TArray<FName> Nodes;
}

struct FNodeHierarchyWithUserData
{
    FNodeHierarchyData Hierarchy;
}

struct FNodeHierarchyData
{
    TArray<FNodeObject> Nodes;
    TArray<FTransform> Transforms;
    TMap<FName, int32> NodeNameToIndexMapping;
}

struct FNodeObject
{
    FName Name;
    FName ParentName;
}

struct FTransformNoScale
{
    FVector Location;
    FQuat Rotation;
}

#endif
