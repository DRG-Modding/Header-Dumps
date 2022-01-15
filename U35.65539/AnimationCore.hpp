#ifndef UE4SS_SDK_AnimationCore_HPP
#define UE4SS_SDK_AnimationCore_HPP

#include "AnimationCore_enums.hpp"

class UAnimationDataSourceRegistry : UObject
{
    TMap<FName, TWeakObjectPtr<UObject>> DataSources;
}

struct UCCDIKChainLink
{
}

struct UAxis
{
    FVector Axis;
    bool bInLocalSpace;
}

struct UConstraintData
{
    FConstraintDescriptor Constraint;
    float Weight;
    bool bMaintainOffset;
    FTransform Offset;
    FTransform CurrentTransform;
}

struct UConstraintDescriptor
{
    EConstraintType Type;
}

struct UConstraintDescriptionEx
{
    FFilterOptionPerAxis AxesFilterOption;
}

struct UFilterOptionPerAxis
{
    bool bX;
    bool bY;
    bool bZ;
}

struct UAimConstraintDescription : FConstraintDescriptionEx
{
    FAxis LookAt_Axis;
    FAxis LookUp_Axis;
    bool bUseLookUp;
    FVector LookUpTarget;
}

struct UTransformConstraintDescription : FConstraintDescriptionEx
{
    ETransformConstraintType TransformType;
}

struct UTransformConstraint
{
    FConstraintDescription Operator;
    FName SourceNode;
    FName TargetNode;
    float Weight;
    bool bMaintainOffset;
}

struct UConstraintDescription
{
    bool bTranslation;
    bool bRotation;
    bool bScale;
    bool bParent;
    FFilterOptionPerAxis TranslationAxes;
    FFilterOptionPerAxis RotationAxes;
    FFilterOptionPerAxis ScaleAxes;
}

struct UConstraintOffset
{
    FVector Translation;
    FQuat Rotation;
    FVector Scale;
    FTransform Parent;
}

struct UTransformFilter
{
    FFilterOptionPerAxis TranslationFilter;
    FFilterOptionPerAxis RotationFilter;
    FFilterOptionPerAxis ScaleFilter;
}

struct UEulerTransform
{
    FVector Location;
    FRotator Rotation;
    FVector Scale;
}

struct UFABRIKChainLink
{
}

struct UNodeChain
{
    TArray<FName> Nodes;
}

struct UNodeHierarchyWithUserData
{
    FNodeHierarchyData Hierarchy;
}

struct UNodeHierarchyData
{
    TArray<FNodeObject> Nodes;
    TArray<FTransform> Transforms;
    TMap<FName, int32> NodeNameToIndexMapping;
}

struct UNodeObject
{
    FName Name;
    FName ParentName;
}

struct UTransformNoScale
{
    FVector Location;
    FQuat Rotation;
}

#endif
