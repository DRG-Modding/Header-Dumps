#ifndef UE4SS_SDK_ClothingSystemRuntimeInterface_HPP
#define UE4SS_SDK_ClothingSystemRuntimeInterface_HPP

class UClothConfigBase : public UObject
{
};

class UDEPRECATED_ClothSharedSimConfigBase : public UObject
{
};

class UClothingAssetBase : public UObject
{
    FString ImportedFilePath;
    FGuid AssetGuid;

};

class UClothingSimulationFactory : public UObject
{
};

class UClothingInteractor : public UObject
{
};

class UClothingSimulationInteractor : public UObject
{
    TMap<class FName, class UClothingInteractor*> ClothingInteractors;

    void SetNumSubsteps(int32 NumSubsteps);
    void SetNumIterations(int32 NumIterations);
    void SetAnimDriveSpringStiffness(float InStiffness);
    void PhysicsAssetUpdated();
    float GetSimulationTime();
    int32 GetNumSubsteps();
    int32 GetNumKinematicParticles();
    int32 GetNumIterations();
    int32 GetNumDynamicParticles();
    int32 GetNumCloths();
    class UClothingInteractor* GetClothingInteractor(FString ClothingAssetName);
    void EnableGravityOverride(const FVector& InVector);
    void DisableGravityOverride();
    void ClothConfigUpdated();
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

struct FClothCollisionPrim_ConvexFace
{
    FPlane Plane;
    TArray<int32> Indices;

};

struct FClothCollisionPrim_Convex
{
    TArray<FClothCollisionPrim_ConvexFace> Faces;
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
