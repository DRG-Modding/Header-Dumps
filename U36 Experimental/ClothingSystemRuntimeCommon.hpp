#ifndef UE4SS_SDK_ClothingSystemRuntimeCommon_HPP
#define UE4SS_SDK_ClothingSystemRuntimeCommon_HPP

#include "ClothingSystemRuntimeCommon_enums.hpp"

class UClothConfigCommon : public UClothConfigBase
{
};

class UClothSharedConfigCommon : public UClothConfigCommon
{
};

class UClothingAssetCustomData : public UObject
{
};

struct FPointWeightMap
{
    TArray<float> Values;

};

struct FClothPhysicalMeshData
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

};

struct FClothLODDataCommon
{
    FClothPhysicalMeshData PhysicalMeshData;
    FClothCollisionData CollisionData;
    bool bUseMultipleInfluences;
    float SkinningKernelRadius;

};

class UClothingAssetCommon : public UClothingAssetBase
{
    class UPhysicsAsset* PhysicsAsset;
    TMap<class FName, class UClothConfigBase*> ClothConfigs;
    TArray<FClothLODDataCommon> LODData;
    TArray<int32> LodMap;
    TArray<FName> UsedBoneNames;
    TArray<int32> UsedBoneIndices;
    int32 ReferenceBoneIndex;
    class UClothingAssetCustomData* CustomData;

};

class UClothLODDataCommon_Legacy : public UObject
{
    class UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData;
    FClothPhysicalMeshData ClothPhysicalMeshData;
    FClothCollisionData CollisionData;

};

struct FClothConstraintSetup_Legacy
{
    float Stiffness;
    float StiffnessMultiplier;
    float StretchLimit;
    float CompressionLimit;

};

struct FClothConfig_Legacy
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

};

struct FClothParameterMask_Legacy
{
    FName MaskName;
    EWeightMapTargetCommon CurrentTarget;
    float MaxValue;
    float MinValue;
    TArray<float> Values;
    bool bEnabled;

};

#endif
