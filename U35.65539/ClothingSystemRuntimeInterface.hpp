#ifndef UE4SS_SDK_ClothingSystemRuntimeInterface_HPP
#define UE4SS_SDK_ClothingSystemRuntimeInterface_HPP

class UClothConfigBase : UObject
{
}

class UClothingSimulationFactory : UObject
{
}

class UClothingSimulationInteractor : UObject
{

    void SetAnimDriveSpringStiffness(float InStiffness);
    void PhysicsAssetUpdated();
    void EnableGravityOverride(const FVector& InVector);
    void DisableGravityOverride();
    void ClothConfigUpdated();
}

class UDEPRECATED_ClothSharedSimConfigBase : UObject
{
}

class UClothingAssetBase : UObject
{
    FString ImportedFilePath;
    FGuid AssetGuid;
}

class UClothPhysicalMeshDataBase_Legacy : UObject
{
    TArray<FVector> Vertices;
    TArray<FVector> Normals;
    TArray<uint32> Indices;
    TArray<float> InverseMasses;
    TArray<FClothVertBoneData> BoneData;
    int32 NumFixedVerts;
    int32 MaxBoneWeights;
    TArray<uint32> SelfCollisionIndices;
}

struct FClothCollisionData
{
    TArray<FClothCollisionPrim_Sphere> Spheres;
    TArray<FClothCollisionPrim_SphereConnection> SphereConnections;
    TArray<FClothCollisionPrim_Convex> Convexes;
    TArray<FClothCollisionPrim_Box> Boxes;
}

struct FClothCollisionPrim_Box
{
    FVector LocalPosition;
    FQuat LocalRotation;
    FVector HalfExtents;
    int32 BoneIndex;
}

struct FClothCollisionPrim_Convex
{
    TArray<FPlane> Planes;
    TArray<FVector> SurfacePoints;
    int32 BoneIndex;
}

struct FClothCollisionPrim_SphereConnection
{
    int32 SphereIndices;
}

struct FClothCollisionPrim_Sphere
{
    int32 BoneIndex;
    float Radius;
    FVector LocalPosition;
}

struct FClothVertBoneData
{
    int32 NumInfluences;
    uint16 BoneIndices;
    float BoneWeights;
}

#endif
