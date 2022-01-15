#ifndef UE4SS_SDK_Foliage_HPP
#define UE4SS_SDK_Foliage_HPP

#include "Foliage_enums.hpp"

class UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent
{
    FFoliageInstancedStaticMeshComponentOnInstanceTakePointDamage OnInstanceTakePointDamage;
    void InstancePointDamageSignature(int32 InstanceIndex, float Damage, AController* InstigatedBy, FVector HitLocation, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    FFoliageInstancedStaticMeshComponentOnInstanceTakeRadialDamage OnInstanceTakeRadialDamage;
    void InstanceRadialDamageSignature(const TArray<int32>& Instances, const TArray<float>& Damages, AController* InstigatedBy, FVector Origin, float MaxRadius, const UDamageType* DamageType, AActor* DamageCauser);
    FGuid GenerationGuid;
}

class UFoliageStatistics : UBlueprintFunctionLibrary
{

    int32 FoliageOverlappingSphereCount(UObject* WorldContextObject, const UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
    int32 FoliageOverlappingBoxCount(UObject* WorldContextObject, const UStaticMesh* StaticMesh, FBox Box);
}

class UFoliageType : UObject
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
    FBodyInstance BodyInstance;
    TEnumAsByte<EHasCustomNavigableGeometry::Type> CustomNavigableGeometry;
    FLightingChannels LightingChannels;
    uint8 bRenderCustomDepth;
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
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures;
    int32 VirtualTextureCullMips;
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;
}

class UFoliageType_Actor : UFoliageType
{
    TSubclassOf<AActor> ActorClass;
    bool bShouldAttachToBaseComponent;
}

class UFoliageType_InstancedStaticMesh : UFoliageType
{
    UStaticMesh* Mesh;
    TArray<UMaterialInterface*> OverrideMaterials;
    TSubclassOf<UFoliageInstancedStaticMeshComponent> ComponentClass;
}

class AInstancedFoliageActor : AActor
{
}

class AInteractiveFoliageActor : AStaticMeshActor
{
    UCapsuleComponent* CapsuleComponent;
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

    void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
}

class UInteractiveFoliageComponent : UStaticMeshComponent
{
}

class AProceduralFoliageBlockingVolume : UVolume
{
    AProceduralFoliageVolume* ProceduralFoliageVolume;
}

class UProceduralFoliageComponent : UActorComponent
{
    UProceduralFoliageSpawner* FoliageSpawner;
    float TileOverlap;
    AVolume* SpawningVolume;
    FGuid ProceduralGuid;
}

class UProceduralFoliageSpawner : UObject
{
    int32 RandomSeed;
    float TileSize;
    int32 NumUniqueTiles;
    float MinimumQuadTreeSize;
    TArray<FFoliageTypeObject> FoliageTypes;

    void Simulate(int32 NumSteps);
}

class UProceduralFoliageTile : UObject
{
    UProceduralFoliageSpawner* FoliageSpawner;
    TArray<FProceduralFoliageInstance> InstancesArray;
}

class AProceduralFoliageVolume : UVolume
{
    UProceduralFoliageComponent* ProceduralComponent;
}

struct UFoliageVertexColorChannelMask
{
    uint8 UseMask;
    float MaskThreshold;
    uint8 InvertMask;
}

struct UFoliageTypeObject
{
    UObject* FoliageTypeObject;
    UFoliageType* TypeInstance;
    bool bIsAsset;
    TSubclassOf<UFoliageType_InstancedStaticMesh> Type;
}

struct UProceduralFoliageInstance
{
    FVector Location;
    FQuat Rotation;
    FVector Normal;
    float Age;
    float Scale;
    UFoliageType* Type;
}

#endif
