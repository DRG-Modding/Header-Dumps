#ifndef UE4SS_SDK_ClothingSystemRuntimeCommon_HPP
#define UE4SS_SDK_ClothingSystemRuntimeCommon_HPP

#include "ClothingSystemRuntimeCommon_enums.hpp"

class UClothConfigCommon : UClothConfigBase
{
}

class UClothSharedConfigCommon : UClothConfigCommon
{
}

class UClothingAssetCustomData : UObject
{
}

class UClothingAssetCommon : UClothingAssetBase
{
    UPhysicsAsset* PhysicsAsset;
    TMap<FName, UClothConfigBase*> ClothConfigs;
    UClothConfigBase* ClothSharedSimConfig;
    UClothConfigBase* ClothSimConfig;
    UClothConfigBase* ChaosClothSimConfig;
    TArray<UClothLODDataCommon_Legacy*> ClothLODData;
    TArray<FClothLODDataCommon> LODData;
    TArray<int32> LodMap;
    TArray<FName> UsedBoneNames;
    TArray<int32> UsedBoneIndices;
    int32 ReferenceBoneIndex;
    UClothingAssetCustomData* CustomData;
    FClothConfig_Legacy ClothConfig;
}

class UClothLODDataCommon_Legacy : UObject
{
    UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData;
    FClothPhysicalMeshData ClothPhysicalMeshData;
    FClothCollisionData CollisionData;
}

struct UClothConfig_Legacy
{
    EClothingWindMethod_Legacy WindMethod;
    FClothConstraintSetup_Legacy VerticalConstraintConfig;
    FClothConstraintSetup_Legacy HorizontalConstraintConfig;
    FClothConstraintSetup_Legacy BendConstraintConfig;
    FClothConstraintSetup_Legacy ShearConstraintConfig;
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
}

struct UClothConstraintSetup_Legacy
{
    float Stiffness;
    float StiffnessMultiplier;
    float StretchLimit;
    float CompressionLimit;
}

struct UClothLODDataCommon
{
    FClothPhysicalMeshData PhysicalMeshData;
    FClothCollisionData CollisionData;
}

struct UClothPhysicalMeshData
{
    TArray<FVector> Vertices;
    TArray<FVector> Normals;
    TArray<uint32> Indices;
    TMap<uint32, FPointWeightMap> WeightMaps;
    TArray<float> InverseMasses;
    TArray<FClothVertBoneData> BoneData;
    int32 MaxBoneWeights;
    int32 NumFixedVerts;
    TArray<uint32> SelfCollisionIndices;
    TArray<float> MaxDistances;
    TArray<float> BackstopDistances;
    TArray<float> BackstopRadiuses;
    TArray<float> AnimDriveMultipliers;
}

struct UPointWeightMap
{
    TArray<float> Values;
}

struct UClothParameterMask_Legacy
{
    FName MaskName;
    EWeightMapTargetCommon CurrentTarget;
    float MaxValue;
    float MinValue;
    TArray<float> Values;
    bool bEnabled;
}

#endif
