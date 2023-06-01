#ifndef UE4SS_SDK_FullBodyIK_HPP
#define UE4SS_SDK_FullBodyIK_HPP

#include "FullBodyIK_enums.hpp"

struct FFBIKBoneLimit
{
    EFBIKBoneLimitType LimitType_X;
    EFBIKBoneLimitType LimitType_Y;
    EFBIKBoneLimitType LimitType_Z;
    FVector Limit;

};

struct FFBIKConstraintOption
{
    FRigElementKey Item;
    bool bEnabled;
    bool bUseStiffness;
    FVector LinearStiffness;
    FVector AngularStiffness;
    bool bUseAngularLimit;
    FFBIKBoneLimit AngularLimit;
    bool bUsePoleVector;
    EPoleVectorOption PoleVectorOption;
    FVector PoleVector;
    FRotator OffsetRotation;

};

struct FFBIKDebugOption
{
    bool bDrawDebugHierarchy;
    bool bColorAngularMotionStrength;
    bool bColorLinearMotionStrength;
    bool bDrawDebugAxes;
    bool bDrawDebugEffector;
    bool bDrawDebugConstraints;
    FTransform DrawWorldOffset;
    float DrawSize;

};

struct FFBIKEndEffector
{
    FRigElementKey Item;
    FVector Position;
    float PositionAlpha;
    int32 PositionDepth;
    FQuat Rotation;
    float RotationAlpha;
    int32 RotationDepth;
    float Pull;

};

struct FMotionProcessInput
{
    bool bForceEffectorRotationTarget;
    bool bOnlyApplyWhenReachedToTarget;

};

struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Root;
    TArray<FFBIKEndEffector> Effectors;
    TArray<FFBIKConstraintOption> Constraints;
    FSolverInput SolverProperty;
    FMotionProcessInput MotionProperty;
    bool bPropagateToChildren;
    FFBIKDebugOption DebugOption;
    FRigUnit_FullbodyIK_WorkData WorkData;

};

struct FRigUnit_FullbodyIK_WorkData
{
};

struct FSolverInput
{
    float LinearMotionStrength;
    float MinLinearMotionStrength;
    float AngularMotionStrength;
    float MinAngularMotionStrength;
    float DefaultTargetClamp;
    float Precision;
    float Damping;
    int32 MaxIterations;
    bool bUseJacobianTranspose;

};

#endif
