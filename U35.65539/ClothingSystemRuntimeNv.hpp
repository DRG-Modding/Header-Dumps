#ifndef UE4SS_SDK_ClothingSystemRuntimeNv_HPP
#define UE4SS_SDK_ClothingSystemRuntimeNv_HPP

#include "ClothingSystemRuntimeNv_enums.hpp"

class UClothConfigNv : UClothConfigCommon
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
}

class UClothingSimulationFactoryNv : UClothingSimulationFactory
{
}

class UClothingSimulationInteractorNv : UClothingSimulationInteractor
{

    void SetAnimDriveDamperStiffness(float InStiffness);
}

class UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy
{
    TArray<float> MaxDistances;
    TArray<float> BackstopDistances;
    TArray<float> BackstopRadiuses;
    TArray<float> AnimDriveMultipliers;
}

struct UClothConstraintSetupNv
{
    float Stiffness;
    float StiffnessMultiplier;
    float StretchLimit;
    float CompressionLimit;
}

#endif
