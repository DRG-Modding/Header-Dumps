#ifndef UE4SS_SDK_ClothingSystemRuntimeNv_HPP
#define UE4SS_SDK_ClothingSystemRuntimeNv_HPP

#include "ClothingSystemRuntimeNv_enums.hpp"

struct FClothConstraintSetupNv
{
    float Stiffness;
    float StiffnessMultiplier;
    float StretchLimit;
    float CompressionLimit;

};

class UClothConfigNv : public UClothConfigCommon
{
    EClothingWindMethodNv ClothingWindMethod;
    FClothConstraintSetupNv VerticalConstraint;
    FClothConstraintSetupNv HorizontalConstraint;
    FClothConstraintSetupNv BendConstraint;
    FClothConstraintSetupNv ShearConstraint;
    float SelfCollisionRadius;
    float SelfCollisionStiffness;
    float SelfCollisionCullScale;
    FVector Damping;
    float Friction;
    float WindDragCoefficient;
    float WindLiftCoefficient;
    FVector LinearDrag;
    FVector AngularDrag;
    FVector LinearInertiaScale;
    FVector AngularInertiaScale;
    FVector CentrifugalInertiaScale;
    float SolverFrequency;
    float StiffnessFrequency;
    float GravityScale;
    FVector GravityOverride;
    bool bUseGravityOverride;
    float TetherStiffness;
    float TetherLimit;
    float CollisionThickness;
    float AnimDriveSpringStiffness;
    float AnimDriveDamperStiffness;
    EClothingWindMethod_Legacy WindMethod;
    FClothConstraintSetup_Legacy VerticalConstraintConfig;
    FClothConstraintSetup_Legacy HorizontalConstraintConfig;
    FClothConstraintSetup_Legacy BendConstraintConfig;
    FClothConstraintSetup_Legacy ShearConstraintConfig;

};

class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{
    TArray<float> MaxDistances;
    TArray<float> BackstopDistances;
    TArray<float> BackstopRadiuses;
    TArray<float> AnimDriveMultipliers;

};

class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
};

class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{

    void SetAnimDriveDamperStiffness(float InStiffness);
};

#endif
