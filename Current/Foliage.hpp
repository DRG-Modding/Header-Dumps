#ifndef UE4SS_SDK_Foliage_HPP
#define UE4SS_SDK_Foliage_HPP

#include "Foliage_enums.hpp"

struct FFoliageTypeObject
{
    class UObject* FoliageTypeObject;
    class UFoliageType* TypeInstance;
    bool bIsAsset;
    TSubclassOf<class UFoliageType_InstancedStaticMesh> Type;

};

struct FFoliageVertexColorChannelMask
{
    uint8 UseMask;
    float MaskThreshold;
    uint8 InvertMask;

};

struct FProceduralFoliageInstance
{
    FQuat Rotation;
    FVector Location;
    float Age;
    FVector Normal;
    float Scale;
    class UFoliageType* Type;

};

class AInstancedFoliageActor : public AActor
{
};

class AInteractiveFoliageActor : public AStaticMeshActor
{
    class UCapsuleComponent* CapsuleComponent;
    FVector TouchingActorEntryPosition;
    FVector FoliageVelocity;
    FVector FoliageForce;
    FVector FoliagePosition;
    float FoliageDamageImpulseScale;
    float FoliageTouchImpulseScale;
    float FoliageStiffness;
    float FoliageStiffnessQuadratic;
    float FoliageDamping;
    float MaxDamageImpulse;
    float MaxTouchImpulse;
    float MaxForce;
    float Mass;

    void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
};

class AProceduralFoliageBlockingVolume : public AVolume
{
    class AProceduralFoliageVolume* ProceduralFoliageVolume;

};

class AProceduralFoliageVolume : public AVolume
{
    class UProceduralFoliageComponent* ProceduralComponent;

};

class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
    FFoliageInstancedStaticMeshComponentOnInstanceTakePointDamage OnInstanceTakePointDamage;
    void InstancePointDamageSignature(int32 InstanceIndex, float Damage, class AController* InstigatedBy, FVector HitLocation, FVector ShotFromDirection, const class UDamageType* DamageType, class AActor* DamageCauser);
    FFoliageInstancedStaticMeshComponentOnInstanceTakeRadialDamage OnInstanceTakeRadialDamage;
    void InstanceRadialDamageSignature(const TArray<int32>& Instances, const TArray<float>& Damages, class AController* InstigatedBy, FVector Origin, float MaxRadius, const class UDamageType* DamageType, class AActor* DamageCauser);
    FGuid GenerationGuid;

};

class UFoliageStatistics : public UBlueprintFunctionLibrary
{

    int32 FoliageOverlappingSphereCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
    int32 FoliageOverlappingBoxCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, FBox Box);
};

class UFoliageType : public UObject
{
    FGuid UpdateGuid;
    float Density;
    float DensityAdjustmentFactor;
    float Radius;
    bool bSingleInstanceModeOverrideRadius;
    float SingleInstanceModeRadius;
    EFoliageScaling Scaling;
    FFloatInterval ScaleX;
    FFloatInterval ScaleY;
    FFloatInterval ScaleZ;
    FFoliageVertexColorChannelMask VertexColorMaskByChannel;
    TEnumAsByte<FoliageVertexColorMask> VertexColorMask;
    float VertexColorMaskThreshold;
    uint8 VertexColorMaskInvert;
    FFloatInterval ZOffset;
    uint8 AlignToNormal;
    float AlignMaxAngle;
    uint8 RandomYaw;
    float RandomPitchAngle;
    FFloatInterval GroundSlopeAngle;
    FFloatInterval Height;
    TArray<FName> LandscapeLayers;
    float MinimumLayerWeight;
    TArray<FName> ExclusionLandscapeLayers;
    float MinimumExclusionLayerWeight;
    FName LandscapeLayer;
    uint8 CollisionWithWorld;
    FVector CollisionScale;
    FBoxSphereBounds MeshBounds;
    FVector LowBoundOriginRadius;
    TEnumAsByte<EComponentMobility::Type> Mobility;
    FInt32Interval CullDistance;
    uint8 bEnableStaticLighting;
    uint8 CastShadow;
    uint8 bAffectDynamicIndirectLighting;
    uint8 bAffectDistanceFieldLighting;
    uint8 bCastDynamicShadow;
    uint8 bCastStaticShadow;
    uint8 bCastShadowAsTwoSided;
    uint8 bReceivesDecals;
    uint8 bOverrideLightMapRes;
    int32 OverriddenLightMapRes;
    ELightmapType LightmapType;
    uint8 bUseAsOccluder;
    uint8 bVisibleInRayTracing;
    uint8 bEvaluateWorldPositionOffset;
    FBodyInstance BodyInstance;
    TEnumAsByte<EHasCustomNavigableGeometry::Type> CustomNavigableGeometry;
    FLightingChannels LightingChannels;
    uint8 bRenderCustomDepth;
    ERendererStencilMask CustomDepthStencilWriteMask;
    int32 CustomDepthStencilValue;
    int32 TranslucencySortPriority;
    float CollisionRadius;
    float ShadeRadius;
    int32 NumSteps;
    float InitialSeedDensity;
    float AverageSpreadDistance;
    float SpreadVariance;
    int32 SeedsPerStep;
    int32 DistributionSeed;
    float MaxInitialSeedOffset;
    bool bCanGrowInShade;
    bool bSpawnsInShade;
    float MaxInitialAge;
    float MaxAge;
    float OverlapPriority;
    FFloatInterval ProceduralScale;
    FRuntimeFloatCurve ScaleCurve;
    int32 ChangeCount;
    uint8 ReapplyDensity;
    uint8 ReapplyRadius;
    uint8 ReapplyAlignToNormal;
    uint8 ReapplyRandomYaw;
    uint8 ReapplyScaling;
    uint8 ReapplyScaleX;
    uint8 ReapplyScaleY;
    uint8 ReapplyScaleZ;
    uint8 ReapplyRandomPitchAngle;
    uint8 ReapplyGroundSlope;
    uint8 ReapplyHeight;
    uint8 ReapplyLandscapeLayers;
    uint8 ReapplyZOffset;
    uint8 ReapplyCollisionWithWorld;
    uint8 ReapplyVertexColorMask;
    uint8 bEnableDensityScaling;
    uint8 bEnableDiscardOnLoad;
    TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures;
    int32 VirtualTextureCullMips;
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;

};

class UFoliageType_Actor : public UFoliageType
{
    TSubclassOf<class AActor> ActorClass;
    bool bShouldAttachToBaseComponent;

};

class UFoliageType_InstancedStaticMesh : public UFoliageType
{
    class UStaticMesh* Mesh;
    TArray<class UMaterialInterface*> OverrideMaterials;
    TSubclassOf<class UFoliageInstancedStaticMeshComponent> ComponentClass;

};

class UInteractiveFoliageComponent : public UStaticMeshComponent
{
};

class UProceduralFoliageComponent : public UActorComponent
{
    class UProceduralFoliageSpawner* FoliageSpawner;
    float TileOverlap;
    class AVolume* SpawningVolume;
    FGuid ProceduralGuid;

};

class UProceduralFoliageSpawner : public UObject
{
    int32 RandomSeed;
    float TileSize;
    int32 NumUniqueTiles;
    float MinimumQuadTreeSize;
    TArray<FFoliageTypeObject> FoliageTypes;

    void Simulate(int32 NumSteps);
};

class UProceduralFoliageTile : public UObject
{
    class UProceduralFoliageSpawner* FoliageSpawner;
    TArray<FProceduralFoliageInstance> InstancesArray;

};

#endif
