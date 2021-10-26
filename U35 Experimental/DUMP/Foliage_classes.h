// Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0x650 (Inherited: 0x620)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x618(0x10)
	FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x628(0x10)
	FGuid GenerationGuid; // 0x638(0x10)
};

// Class Foliage.FoliageStatistics
// Size: 0x28 (Inherited: 0x28)
struct UFoliageStatistics : UBlueprintFunctionLibrary {

	int32_t FoliageOverlappingSphereCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
	int32_t FoliageOverlappingBoxCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FBox Box);
};

// Class Foliage.FoliageType
// Size: 0x360 (Inherited: 0x28)
struct UFoliageType : UObject {
	FGuid UpdateGuid; // 0x28(0x10)
	float Density; // 0x38(0x04)
	float DensityAdjustmentFactor; // 0x3c(0x04)
	float Radius; // 0x40(0x04)
	bool bSingleInstanceModeOverrideRadius; // 0x44(0x01)
	float SingleInstanceModeRadius; // 0x48(0x04)
	enum class EFoliageScaling Scaling; // 0x4c(0x01)
	FFloatInterval ScaleX; // 0x50(0x08)
	FFloatInterval ScaleY; // 0x58(0x08)
	FFloatInterval ScaleZ; // 0x60(0x08)
	FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x68(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0x98(0x01)
	float VertexColorMaskThreshold; // 0x9c(0x04)
	char VertexColorMaskInvert : 1; // 0xa0(0x01)
	FFloatInterval ZOffset; // 0xa4(0x08)
	char AlignToNormal : 1; // 0xac(0x01)
	float AlignMaxAngle; // 0xb0(0x04)
	char RandomYaw : 1; // 0xb4(0x01)
	float RandomPitchAngle; // 0xb8(0x04)
	FFloatInterval GroundSlopeAngle; // 0xbc(0x08)
	FFloatInterval Height; // 0xc4(0x08)
	TArray<FName> LandscapeLayers; // 0xd0(0x10)
	float MinimumLayerWeight; // 0xe0(0x04)
	TArray<FName> ExclusionLandscapeLayers; // 0xe8(0x10)
	float MinimumExclusionLayerWeight; // 0xf8(0x04)
	FName LandscapeLayer; // 0xfc(0x08)
	char CollisionWithWorld : 1; // 0x104(0x01)
	FVector CollisionScale; // 0x108(0x0c)
	FBoxSphereBounds MeshBounds; // 0x114(0x1c)
	FVector LowBoundOriginRadius; // 0x130(0x0c)
	enum class EComponentMobility Mobility; // 0x13c(0x01)
	FInt32Interval CullDistance; // 0x140(0x08)
	char bEnableStaticLighting : 1; // 0x148(0x01)
	char CastShadow : 1; // 0x148(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x148(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x148(0x01)
	char pad_125_0 : 4; // 0x125(0x01)
	char bCastDynamicShadow : 1; // 0x148(0x01)
	char bCastStaticShadow : 1; // 0x148(0x01)
	char bCastShadowAsTwoSided : 1; // 0x148(0x01)
	char bReceivesDecals : 1; // 0x148(0x01)
	char bOverrideLightMapRes : 1; // 0x149(0x01)
	int32_t OverriddenLightMapRes; // 0x14c(0x04)
	enum class ELightmapType LightmapType; // 0x150(0x01)
	char bUseAsOccluder : 1; // 0x154(0x01)
	FBodyInstance BodyInstance; // 0x158(0x110)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x268(0x01)
	FLightingChannels LightingChannels; // 0x269(0x01)
	char bRenderCustomDepth : 1; // 0x26c(0x01)
	int32_t CustomDepthStencilValue; // 0x270(0x04)
	int32_t TranslucencySortPriority; // 0x274(0x04)
	float CollisionRadius; // 0x278(0x04)
	float ShadeRadius; // 0x27c(0x04)
	int32_t NumSteps; // 0x280(0x04)
	float InitialSeedDensity; // 0x284(0x04)
	float AverageSpreadDistance; // 0x288(0x04)
	float SpreadVariance; // 0x28c(0x04)
	int32_t SeedsPerStep; // 0x290(0x04)
	int32_t DistributionSeed; // 0x294(0x04)
	float MaxInitialSeedOffset; // 0x298(0x04)
	bool bCanGrowInShade; // 0x29c(0x01)
	bool bSpawnsInShade; // 0x29d(0x01)
	float MaxInitialAge; // 0x2a0(0x04)
	float MaxAge; // 0x2a4(0x04)
	float OverlapPriority; // 0x2a8(0x04)
	FFloatInterval ProceduralScale; // 0x2ac(0x08)
	FRuntimeFloatCurve ScaleCurve; // 0x2b8(0x88)
	int32_t ChangeCount; // 0x340(0x04)
	char ReapplyDensity : 1; // 0x344(0x01)
	char ReapplyRadius : 1; // 0x344(0x01)
	char ReapplyAlignToNormal : 1; // 0x344(0x01)
	char ReapplyRandomYaw : 1; // 0x344(0x01)
	char ReapplyScaling : 1; // 0x344(0x01)
	char pad_30C_0 : 5; // 0x30c(0x01)
	char ReapplyScaleX : 1; // 0x344(0x01)
	char ReapplyScaleY : 1; // 0x344(0x01)
	char ReapplyScaleZ : 1; // 0x344(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x345(0x01)
	char ReapplyGroundSlope : 1; // 0x345(0x01)
	char ReapplyHeight : 1; // 0x345(0x01)
	char ReapplyLandscapeLayers : 1; // 0x345(0x01)
	char ReapplyZOffset : 1; // 0x345(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x345(0x01)
	char ReapplyVertexColorMask : 1; // 0x345(0x01)
	char bEnableDensityScaling : 1; // 0x345(0x01)
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x348(0x10)
	int32_t VirtualTextureCullMips; // 0x358(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x35c(0x01)
};

// Class Foliage.FoliageType_Actor
// Size: 0x370 (Inherited: 0x360)
struct UFoliageType_Actor : UFoliageType {
	AActor* ActorClass; // 0x360(0x08)
	bool bShouldAttachToBaseComponent; // 0x368(0x01)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x380 (Inherited: 0x360)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	UStaticMesh* Mesh; // 0x360(0x08)
	TArray<UMaterialInterface*> OverrideMaterials; // 0x368(0x10)
	UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x378(0x08)
};

// Class Foliage.InstancedFoliageActor
// Size: 0x270 (Inherited: 0x220)
struct AInstancedFoliageActor : AActor {
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x290 (Inherited: 0x230)
struct AInteractiveFoliageActor : AStaticMeshActor {
	UCapsuleComponent* CapsuleComponent; // 0x230(0x08)
	FVector TouchingActorEntryPosition; // 0x238(0x0c)
	FVector FoliageVelocity; // 0x244(0x0c)
	FVector FoliageForce; // 0x250(0x0c)
	FVector FoliagePosition; // 0x25c(0x0c)
	float FoliageDamageImpulseScale; // 0x268(0x04)
	float FoliageTouchImpulseScale; // 0x26c(0x04)
	float FoliageStiffness; // 0x270(0x04)
	float FoliageStiffnessQuadratic; // 0x274(0x04)
	float FoliageDamping; // 0x278(0x04)
	float MaxDamageImpulse; // 0x27c(0x04)
	float MaxTouchImpulse; // 0x280(0x04)
	float MaxForce; // 0x284(0x04)
	float Mass; // 0x288(0x04)

	void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult OverlapInfo);
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0x490 (Inherited: 0x480)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x260 (Inherited: 0x258)
struct AProceduralFoliageBlockingVolume : AVolume {
	AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x258(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UProceduralFoliageComponent : UActorComponent {
	UProceduralFoliageSpawner* FoliageSpawner; // 0xb0(0x08)
	float TileOverlap; // 0xb8(0x04)
	AVolume* SpawningVolume; // 0xc0(0x08)
	FGuid ProceduralGuid; // 0xc8(0x10)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x68 (Inherited: 0x28)
struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x28(0x04)
	float TileSize; // 0x2c(0x04)
	int32_t NumUniqueTiles; // 0x30(0x04)
	float MinimumQuadTreeSize; // 0x34(0x04)
	TArray<FFoliageTypeObject> FoliageTypes; // 0x40(0x10)

	void Simulate(int32_t NumSteps);
};

// Class Foliage.ProceduralFoliageTile
// Size: 0x158 (Inherited: 0x28)
struct UProceduralFoliageTile : UObject {
	UProceduralFoliageSpawner* FoliageSpawner; // 0x28(0x08)
	TArray<FProceduralFoliageInstance> InstancesArray; // 0xd0(0x10)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x260 (Inherited: 0x258)
struct AProceduralFoliageVolume : AVolume {
	UProceduralFoliageComponent* ProceduralComponent; // 0x258(0x08)
};

