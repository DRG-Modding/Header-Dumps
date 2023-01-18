#ifndef UE4SS_SDK_PhysicsCore_HPP
#define UE4SS_SDK_PhysicsCore_HPP

#include "PhysicsCore_enums.hpp"

struct FBodyInstanceCore
{
    uint8 bSimulatePhysics;
    uint8 bOverrideMass;
    uint8 bEnableGravity;
    uint8 bAutoWeld;
    uint8 bStartAwake;
    uint8 bGenerateWakeEvents;
    uint8 bUpdateMassWhenScaleChanges;

};

class UBodySetupCore : public UObject
{
    FName BoneName;
    TEnumAsByte<EPhysicsType> PhysicsType;
    TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;
    TEnumAsByte<EBodyCollisionResponse::Type> CollisionReponse;

};

class UChaosPhysicalMaterial : public UObject
{
    float Friction;
    float StaticFriction;
    float Restitution;
    float LinearEtherDrag;
    float AngularEtherDrag;
    float SleepingLinearVelocityThreshold;
    float SleepingAngularVelocityThreshold;

};

class UDEPRECATED_PhysicalMaterialPropertyBase : public UObject
{
};

class UPhysicalMaterial : public UObject
{
    float Friction;
    float StaticFriction;
    TEnumAsByte<EFrictionCombineMode::Type> FrictionCombineMode;
    bool bOverrideFrictionCombineMode;
    float Restitution;
    TEnumAsByte<EFrictionCombineMode::Type> RestitutionCombineMode;
    bool bOverrideRestitutionCombineMode;
    float Density;
    float SleepLinearVelocityThreshold;
    float SleepAngularVelocityThreshold;
    int32 SleepCounterThreshold;
    float RaiseMassToPower;
    float DestructibleDamageThresholdScale;
    class UDEPRECATED_PhysicalMaterialPropertyBase* PhysicalMaterialProperty;
    TEnumAsByte<EPhysicalSurface> SurfaceType;

};

class UPhysicsSettingsCore : public UDeveloperSettings
{
    float DefaultGravityZ;
    float DefaultTerminalVelocity;
    float DefaultFluidFriction;
    int32 SimulateScratchMemorySize;
    int32 RagdollAggregateThreshold;
    float TriangleMeshTriangleMinAreaThreshold;
    bool bEnableShapeSharing;
    bool bEnablePCM;
    bool bEnableStabilization;
    bool bWarnMissingLocks;
    bool bEnable2DPhysics;
    bool bDefaultHasComplexCollision;
    float BounceThresholdVelocity;
    TEnumAsByte<EFrictionCombineMode::Type> FrictionCombineMode;
    TEnumAsByte<EFrictionCombineMode::Type> RestitutionCombineMode;
    float MaxAngularVelocity;
    float MaxDepenetrationVelocity;
    float ContactOffsetMultiplier;
    float MinContactOffset;
    float MaxContactOffset;
    bool bSimulateSkeletalMeshOnDedicatedServer;
    TEnumAsByte<ECollisionTraceFlag> DefaultShapeComplexity;
    FChaosSolverConfiguration SolverOptions;

};

#endif
