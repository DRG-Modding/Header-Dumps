#ifndef UE4SS_SDK_ChaosCloth_HPP
#define UE4SS_SDK_ChaosCloth_HPP

#include "ChaosCloth_enums.hpp"

class UChaosClothConfig : UClothConfigCommon
{
    EClothMassMode MassMode;
    float UniformMass;
    float TotalMass;
    float Density;
    float MinPerParticleMass;
    float EdgeStiffness;
    float BendingStiffness;
    float AreaStiffness;
    float VolumeStiffness;
    float StrainLimitingStiffness;
    float LimitScale;
    bool bUseGeodesicDistance;
    float ShapeTargetStiffness;
    float CollisionThickness;
    float FrictionCoefficient;
    float DampingCoefficient;
    float DragCoefficient;
    float AnimDriveSpringStiffness;
    bool bUseBendingElements;
    bool bUseTetrahedralConstraints;
    bool bUseThinShellVolumeConstraints;
    bool bUseSelfCollisions;
    bool bUseContinuousCollisionDetection;
    FVector LinearVelocityScale;
    float AngularVelocityScale;
}

class UChaosClothSharedSimConfig : UClothSharedConfigCommon
{
    int32 IterationCount;
    int32 SubdivisionCount;
    float SelfCollisionThickness;
    float CollisionThickness;
    bool bUseDampingOverride;
    float Damping;
    bool bUseGravityOverride;
    float GravityScale;
    FVector Gravity;
    bool bUseLocalSpaceSimulation;
    bool bUseXPBDConstraints;
}

class UChaosClothingSimulationFactory : UClothingSimulationFactory
{
}

class UChaosClothingSimulationInteractor : UClothingSimulationInteractor
{
}

#endif
