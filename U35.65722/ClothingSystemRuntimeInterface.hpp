#ifndef UE4SS_SDK_ClothingSystemRuntimeInterface_HPP
#define UE4SS_SDK_ClothingSystemRuntimeInterface_HPP

class UClothConfigBase : public UObject
{
};

class UClothingSimulationFactory : public UObject
{
};

class UClothingSimulationInteractor : public UObject
{

    void SetAnimDriveSpringStiffness(float InStiffness);
    void PhysicsAssetUpdated();
    void EnableGravityOverride(const FVector& InVector);
    void DisableGravityOverride();
    void ClothConfigUpdated();
};

class UDEPRECATED_ClothSharedSimConfigBase : public UObject
{
};

class UClothingAssetBase : public UObject
{
    FString ImportedFilePath;
    FGuid AssetGuid;
};

struct FClothVertBoneData
{
    int32 NumInfluences;
    uint16 BoneIndices;
    float BoneWeights;
};

class UClothPhysicalMeshDataBase_Legacy : public UObject
{
    TArray<FVector> Vertices;
    TArray<FVector> Normals;
    TArray<uint32> Indices;
    TArray<float> InverseMasses;
    TArray<FClothVertBoneData> BoneData;
    int32 NumFixedVerts;
    int32 MaxBoneWeights;
    TArray<uint32> SelfCollisionIndices;
};

struct FClothCollisionPrim_Sphere
{
    int32 BoneIndex;
    float Radius;
    FVector LocalPosition;
};

struct FClothCollisionPrim_SphereConnection
{
    int32 SphereIndices;
};

struct FClothCollisionPrim_Convex
{
    TArray<FPlane> Planes;
    TArray<FVector> SurfacePoints;
    int32 BoneIndex;
};

struct FClothCollisionPrim_Box
{
    FVector LocalPosition;
    FQuat LocalRotation;
    FVector HalfExtents;
    int32 BoneIndex;
};

struct FClothCollisionData
{
    TArray<FClothCollisionPrim_Sphere> Spheres;
    TArray<FClothCollisionPrim_SphereConnection> SphereConnections;
    TArray<FClothCollisionPrim_Convex> Convexes;
    TArray<FClothCollisionPrim_Box> Boxes;
};

#endif
