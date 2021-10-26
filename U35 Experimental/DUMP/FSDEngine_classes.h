// Class FSDEngine.TerrainMaterialBase
// Size: 0x30 (Inherited: 0x30)
struct UTerrainMaterialBase : UPrimaryDataAsset {
};

// Class FSDEngine.TerrainMaterialCore
// Size: 0xa0 (Inherited: 0x30)
struct UTerrainMaterialCore : UTerrainMaterialBase {
	UTerrainMaterialCore* BurntMaterial; // 0x30(0x08)
	UTerrainMaterialCore* BulletBurntMaterial; // 0x38(0x08)
	char PathfinderDanger : 1; // 0x40(0x01)
	char PathfinderPreventSpawning : 1; // 0x40(0x01)
	UMaterialInterface* ScannerMaterial; // 0x48(0x08)
	TSoftObjectPtr<UMaterialInterface> RenderMaterial; // 0x50(0x28)
	TSoftObjectPtr<UMaterialInstance> ObjectMaterial; // 0x78(0x28)
};

// Class FSDEngine.CSGBake
// Size: 0x200 (Inherited: 0x30)
struct UCSGBake : UDataAsset {
	FBakeSettings BakeSettings; // 0x30(0x140)
	int32_t NumVariations; // 0x170(0x04)
	int32_t InitialSeed; // 0x174(0x04)
	TSoftClassPtr<UObject> CSG; // 0x178(0x28)
	FString Status; // 0x1a0(0x10)
	FBox CombinedAABB; // 0x1b0(0x1c)
	TArray<FBakeEntry> Entries; // 0x1d0(0x10)
	bool IsBaking; // 0x1e0(0x01)
	TArray<UBakeConfig*> CurrentBakeConfigs; // 0x1e8(0x10)
	ACSGBuilder* CDO; // 0x1f8(0x08)

	void Bake();
};

// Class FSDEngine.BuilderBase
// Size: 0x28 (Inherited: 0x28)
struct UBuilderBase : UObject {
};

// Class FSDEngine.CSGBase
// Size: 0x60 (Inherited: 0x28)
struct UCSGBase : UBuilderBase {
	FMeshBaseProperties BaseProperties; // 0x28(0x01)
	FTransform RelativeTransform; // 0x30(0x30)
};

// Class FSDEngine.CSGBakedChildInstance
// Size: 0x110 (Inherited: 0x60)
struct UCSGBakedChildInstance : UCSGBase {
	FCSGBakedChildInstanceProperties Properties; // 0x60(0x10)
	FBox ChildLocalSpaceBoundingBox; // 0x70(0x1c)
	FBox WorldSpaceBoundingBox; // 0x8c(0x1c)
	FMatrix TransformMatInv; // 0xb0(0x40)
	FDeepCSGFloatTree TempTree; // 0xf0(0x18)
};

// Class FSDEngine.CSGBuilderBaseSceneComponent
// Size: 0x1f0 (Inherited: 0x1f0)
struct UCSGBuilderBaseSceneComponent : USceneComponent {
};

// Class FSDEngine.CSGBaseComponent
// Size: 0x200 (Inherited: 0x1f0)
struct UCSGBaseComponent : UCSGBuilderBaseSceneComponent {
	FMeshBaseProperties BaseProperties; // 0x1f0(0x01)
};

// Class FSDEngine.CSGBakedChildInstanceComponent
// Size: 0x210 (Inherited: 0x200)
struct UCSGBakedChildInstanceComponent : UCSGBaseComponent {
	FCSGBakedChildInstanceProperties Properties; // 0x1f8(0x10)
};

// Class FSDEngine.CSGSingleChildBase
// Size: 0x70 (Inherited: 0x60)
struct UCSGSingleChildBase : UCSGBase {
	UCSGBase* Child; // 0x60(0x08)
};

// Class FSDEngine.CSGDuplicateSingleChildBase
// Size: 0x70 (Inherited: 0x60)
struct UCSGDuplicateSingleChildBase : UCSGBase {
	TArray<UCSGBase*> Children; // 0x60(0x10)
};

// Class FSDEngine.CSGBuilderBase
// Size: 0x3b8 (Inherited: 0x220)
struct ACSGBuilderBase : AActor {
	FBox BoundingBox; // 0x220(0x1c)
	int32_t PreviewSeed; // 0x23c(0x04)
	FBakeSettings PreviewSettings; // 0x240(0x140)
	UTerrainMaterialCore* EmptyMat; // 0x380(0x08)
	UTerrainMaterialCore* ErrorMat; // 0x388(0x08)
	UTerrainMaterialCore* SolidMat; // 0x390(0x08)
	UTerrainMaterialCore* BurnedMat; // 0x398(0x08)
	UCSGPreviewComponent* PreviewComponent; // 0x3a0(0x08)

	void PreGenerate(UBakeConfig* builder);
};

// Class FSDEngine.CSGBuilder
// Size: 0x3f0 (Inherited: 0x3b8)
struct ACSGBuilder : ACSGBuilderBase {
	UCSGGroupComponent* CSGRoot; // 0x3b8(0x08)
	TArray<UTerrainMaterialCore*> UsedMaterials; // 0x3c0(0x10)
	UCSGBase* CurrentRoot; // 0x3d0(0x08)
	UCSGBase* CurrentPreviewRoot; // 0x3d8(0x08)
	UBakeConfig* CurrentPreviewConfig; // 0x3e0(0x08)
	UCSGPreviewScene* PreviewScene; // 0x3e8(0x08)
};

// Class FSDEngine.BakeConfig
// Size: 0x1d0 (Inherited: 0x28)
struct UBakeConfig : UObject {
	FBakeSettings Settings; // 0x30(0x140)
	TMap<FName, UBuilderBase*> Objects; // 0x170(0x50)
	TArray<FString> Warnings; // 0x1c0(0x10)

	FVector GetVectorSetting(FName Name, FVector defaultVal);
	FRandomStream GetRandomStream();
	UBuilderBase* GetObject(FName Name);
	int32_t GetIntSetting(FName Name, int32_t defaultVal);
	float GetFloatSetting(FName Name, float defaultVal);
	bool GetBoolSetting(FName Name, bool defaultVal);
};

// Class FSDEngine.CSGCellNoise
// Size: 0x100 (Inherited: 0x60)
struct UCSGCellNoise : UCSGBase {
	FMeshCellNoiseProperties Properties; // 0x60(0x1c)
	FBinaryTerrainMaterialCombiner Materials; // 0x80(0x30)
	FVector ReciprocalCellSize; // 0xb0(0x0c)
	FDeepCSGFloatTree ApplyTree; // 0xc0(0x18)
	TArray<FVector> CellPositions; // 0xd8(0x10)
	TArray<FDeepCSGNode> CellLeaves; // 0xe8(0x10)
};

// Class FSDEngine.CSGCellNoiseComponent
// Size: 0x250 (Inherited: 0x200)
struct UCSGCellNoiseComponent : UCSGBaseComponent {
	FMeshCellNoiseProperties Properties; // 0x1f8(0x1c)
	FBinaryTerrainMaterialCombiner Materials; // 0x218(0x30)
};

// Class FSDEngine.CSGChildInstance
// Size: 0x2f0 (Inherited: 0x60)
struct UCSGChildInstance : UCSGBase {
	FCSGChildInstanceProperties Properties; // 0x60(0x150)
	FGeneralTerrainMaterialCombiner Materials; // 0x1b0(0x50)
	UCSGBase* CSGChildInstanceRoot; // 0x200(0x08)
	UBakeConfig* CurrentBakeConfig; // 0x208(0x08)
	FBox ChildLocalSpaceBoundingBox; // 0x210(0x1c)
	FBox WorldSpaceBoundingBox; // 0x22c(0x1c)
	FDeepCSGFloatTree BoundingTree; // 0x248(0x18)
	FMatrix TransformMatInv; // 0x260(0x40)
	FDeepCSGTree TempTree; // 0x2a0(0x48)
};

// Class FSDEngine.CSGChildInstanceComponent
// Size: 0x3a0 (Inherited: 0x200)
struct UCSGChildInstanceComponent : UCSGBaseComponent {
	FCSGChildInstanceProperties Properties; // 0x1f8(0x150)
	FGeneralTerrainMaterialCombiner Materials; // 0x348(0x50)
};

// Class FSDEngine.SimpleMeshWithCachedTree
// Size: 0xd0 (Inherited: 0x60)
struct USimpleMeshWithCachedTree : UCSGBase {
	FBinaryTerrainMaterialCombiner Materials; // 0x98(0x30)
	bool InvertCSG; // 0xc8(0x01)
};

// Class FSDEngine.ConvexMeshWithCachedTree
// Size: 0x120 (Inherited: 0xd0)
struct UConvexMeshWithCachedTree : USimpleMeshWithCachedTree {
	FConvexNoiseProperties Noise; // 0xd0(0x0c)
};

// Class FSDEngine.CSGConvexCollider
// Size: 0x140 (Inherited: 0x120)
struct UCSGConvexCollider : UConvexMeshWithCachedTree {
	FCSGConvexColliderProperties Properties; // 0x120(0x08)
};

// Class FSDEngine.SimpleMeshWithCachedTreeComponent
// Size: 0x230 (Inherited: 0x200)
struct USimpleMeshWithCachedTreeComponent : UCSGBaseComponent {
	FBinaryTerrainMaterialCombiner Materials; // 0x1f8(0x30)
	bool InvertCSG; // 0x228(0x01)
};

// Class FSDEngine.ConvexMeshWithCachedTreeComponent
// Size: 0x240 (Inherited: 0x230)
struct UConvexMeshWithCachedTreeComponent : USimpleMeshWithCachedTreeComponent {
	FConvexNoiseProperties Noise; // 0x230(0x0c)
};

// Class FSDEngine.CSGConvexColliderComponent
// Size: 0x250 (Inherited: 0x240)
struct UCSGConvexColliderComponent : UConvexMeshWithCachedTreeComponent {
	FCSGConvexColliderProperties Properties; // 0x240(0x08)
};

// Class FSDEngine.CSGGroup
// Size: 0x70 (Inherited: 0x60)
struct UCSGGroup : UCSGBase {
	TArray<UCSGBase*> Children; // 0x60(0x10)
};

// Class FSDEngine.CSGGroupComponent
// Size: 0x200 (Inherited: 0x200)
struct UCSGGroupComponent : UCSGBaseComponent {
};

// Class FSDEngine.CSGLayer
// Size: 0x1b0 (Inherited: 0x70)
struct UCSGLayer : UCSGGroup {
	FMeshLayerProperties Properties; // 0x70(0x28)
	FGeneralTerrainMaterialCombiner Materials; // 0x98(0x50)
	FBox WorldSpaceBoundingBox; // 0xe8(0x1c)
	FDeepCSGFloatTree BoundingTree; // 0x108(0x18)
	FDeepCSGTree TempTree; // 0x120(0x48)
	FMatrix TransformMatInv; // 0x170(0x40)
};

// Class FSDEngine.CSGLayerComponent
// Size: 0x270 (Inherited: 0x200)
struct UCSGLayerComponent : UCSGGroupComponent {
	FMeshLayerProperties Properties; // 0x1f8(0x28)
	FGeneralTerrainMaterialCombiner Materials; // 0x220(0x50)
};

// Class FSDEngine.CSGAddMaterialLayers
// Size: 0xb0 (Inherited: 0x70)
struct UCSGAddMaterialLayers : UCSGSingleChildBase {
	FCSGAddMaterialLayersProperties Properties; // 0x68(0x40)
};

// Class FSDEngine.CSGAddMaterialLayersComponent
// Size: 0x240 (Inherited: 0x200)
struct UCSGAddMaterialLayersComponent : UCSGBaseComponent {
	FCSGAddMaterialLayersProperties Properties; // 0x1f8(0x40)
};

// Class FSDEngine.CSGRandomizeTransform
// Size: 0xc0 (Inherited: 0x70)
struct UCSGRandomizeTransform : UCSGSingleChildBase {
	FCSGRandomizeTransformProperties Properties; // 0x68(0x54)
};

// Class FSDEngine.CSGRandomizeTransformComponent
// Size: 0x250 (Inherited: 0x200)
struct UCSGRandomizeTransformComponent : UCSGBaseComponent {
	FCSGRandomizeTransformProperties Properties; // 0x1f8(0x54)
};

// Class FSDEngine.CSGRandomDisable
// Size: 0x70 (Inherited: 0x70)
struct UCSGRandomDisable : UCSGSingleChildBase {
	FCSGRandomDisableProperties Properties; // 0x68(0x04)
};

// Class FSDEngine.CSGRandomDisableComponent
// Size: 0x200 (Inherited: 0x200)
struct UCSGRandomDisableComponent : UCSGBaseComponent {
	FCSGRandomDisableProperties Properties; // 0x1f8(0x04)
};

// Class FSDEngine.CSGGridDuplicator
// Size: 0x90 (Inherited: 0x70)
struct UCSGGridDuplicator : UCSGDuplicateSingleChildBase {
	FCSGGridDuplicatorProperties Properties; // 0x70(0x20)
};

// Class FSDEngine.CSGGridDuplicatorComponent
// Size: 0x220 (Inherited: 0x200)
struct UCSGGridDuplicatorComponent : UCSGBaseComponent {
	FCSGGridDuplicatorProperties Properties; // 0x1f8(0x20)
};

// Class FSDEngine.CSGCircleDuplicator
// Size: 0x80 (Inherited: 0x70)
struct UCSGCircleDuplicator : UCSGDuplicateSingleChildBase {
	FCSGCircleDuplicatorProperties Properties; // 0x70(0x08)
};

// Class FSDEngine.CSGCircleDuplicatorComponent
// Size: 0x200 (Inherited: 0x200)
struct UCSGCircleDuplicatorComponent : UCSGBaseComponent {
	FCSGCircleDuplicatorProperties Properties; // 0x1f8(0x08)
};

// Class FSDEngine.CSGPreviewComponent
// Size: 0x280 (Inherited: 0x1f0)
struct UCSGPreviewComponent : USceneComponent {
	ACSGBuilderBase* BaseBuilder; // 0x1f0(0x08)
	UBakeConfig* CurrentBakeConfig; // 0x1f8(0x08)
	TMap<FChunkId, UDeepProceduralMeshComponent*> Meshes; // 0x200(0x50)
	bool UsePreviewScene; // 0x250(0x01)
	int32_t ChangeCount; // 0x27c(0x04)
};

// Class FSDEngine.CSGPreviewScene
// Size: 0x188 (Inherited: 0x30)
struct UCSGPreviewScene : UDataAsset {
	ACSGBuilder* Mesh; // 0x30(0x08)
	FBakeSettings Settings; // 0x38(0x140)
	int32_t Seed; // 0x178(0x04)
	UTerrainMaterialCore* TerrainMaterial; // 0x180(0x08)
};

// Class FSDEngine.CSGPlane
// Size: 0x120 (Inherited: 0x120)
struct UCSGPlane : UConvexMeshWithCachedTree {
};

// Class FSDEngine.CSGPlaneComponent
// Size: 0x240 (Inherited: 0x240)
struct UCSGPlaneComponent : UConvexMeshWithCachedTreeComponent {
};

// Class FSDEngine.CSGBox
// Size: 0x140 (Inherited: 0x120)
struct UCSGBox : UConvexMeshWithCachedTree {
	FMeshBoxProperties Properties; // 0x120(0x14)
};

// Class FSDEngine.CSGBoxComponent
// Size: 0x260 (Inherited: 0x240)
struct UCSGBoxComponent : UConvexMeshWithCachedTreeComponent {
	FMeshBoxProperties Properties; // 0x240(0x14)
};

// Class FSDEngine.CSGCylinder
// Size: 0x130 (Inherited: 0x120)
struct UCSGCylinder : UConvexMeshWithCachedTree {
	FCSGCylinderProperties Properties; // 0x120(0x0c)
};

// Class FSDEngine.CSGCylinderComponent
// Size: 0x250 (Inherited: 0x240)
struct UCSGCylinderComponent : UConvexMeshWithCachedTreeComponent {
	FCSGCylinderProperties Properties; // 0x240(0x0c)
};

// Class FSDEngine.CSGCone
// Size: 0x130 (Inherited: 0x120)
struct UCSGCone : UConvexMeshWithCachedTree {
	FCSGConeProperties Properties; // 0x120(0x10)
};

// Class FSDEngine.CSGConeComponent
// Size: 0x250 (Inherited: 0x240)
struct UCSGConeComponent : UConvexMeshWithCachedTreeComponent {
	FCSGConeProperties Properties; // 0x240(0x10)
};

// Class FSDEngine.CSGSphere
// Size: 0x140 (Inherited: 0x120)
struct UCSGSphere : UConvexMeshWithCachedTree {
	FCSGSphereProperties Properties; // 0x120(0x14)
};

// Class FSDEngine.CSGSphereComponent
// Size: 0x260 (Inherited: 0x240)
struct UCSGSphereComponent : UConvexMeshWithCachedTreeComponent {
	FCSGSphereProperties Properties; // 0x240(0x14)
};

// Class FSDEngine.CSGRemapped
// Size: 0xf0 (Inherited: 0x70)
struct UCSGRemapped : UCSGSingleChildBase {
	FRemappedProperties Properties; // 0x68(0x01)
};

// Class FSDEngine.CSGRemappedComponent
// Size: 0x200 (Inherited: 0x200)
struct UCSGRemappedComponent : UCSGBaseComponent {
	FRemappedProperties Properties; // 0x1f8(0x01)
};

// Class FSDEngine.CSGSplineMod
// Size: 0x1d0 (Inherited: 0xf0)
struct UCSGSplineMod : UCSGRemapped {
	FSplineModProperties SplineProperties; // 0xf0(0x20)
	FSplineCurves SplineCurves; // 0x110(0x68)
	TArray<FBox> AABBs; // 0x178(0x10)
	TArray<float> Keys; // 0x188(0x10)
	TArray<FVector4> Planes; // 0x198(0x10)
	FBox TotalAABB; // 0x1a8(0x1c)
};

// Class FSDEngine.CSGSplineModComponent
// Size: 0x220 (Inherited: 0x200)
struct UCSGSplineModComponent : UCSGRemappedComponent {
	FSplineModProperties SplineProperties; // 0x200(0x20)
};

// Class FSDEngine.CSGSDFInstance
// Size: 0x340 (Inherited: 0x60)
struct UCSGSDFInstance : UCSGBase {
	FCSGSDFInstanceProperties Properties; // 0x60(0x158)
	FBinaryTerrainMaterialCombiner Materials; // 0x1b8(0x30)
	USDFBase* CSGSDFInstanceRoot; // 0x1e8(0x08)
	UBakeConfig* CurrentBakeConfig; // 0x1f0(0x08)
	FBox ChildLocalSpaceBoundingBox; // 0x1f8(0x1c)
	FBox WorldSpaceBoundingBox; // 0x214(0x1c)
	FDeepCSGFloatTree BoundingTree; // 0x230(0x18)
	FMatrix TransformMatInv; // 0x250(0x40)
};

// Class FSDEngine.CSGSDFInstanceComponent
// Size: 0x380 (Inherited: 0x200)
struct UCSGSDFInstanceComponent : UCSGBaseComponent {
	FCSGSDFInstanceProperties Properties; // 0x1f8(0x158)
	FBinaryTerrainMaterialCombiner Materials; // 0x350(0x30)
};

// Class FSDEngine.CSGModulatedSDFInstance
// Size: 0x470 (Inherited: 0x60)
struct UCSGModulatedSDFInstance : UCSGBase {
	FCSGSDFModulatedInstanceProperties Properties; // 0x60(0x2b0)
	FBinaryTerrainMaterialCombiner Materials; // 0x310(0x30)
	USDFBase* CSGSDFInstanceRoot; // 0x340(0x08)
	UBakeConfig* CurrentBakeConfig; // 0x348(0x08)
	USDFBase* CSGSDFModulatedInstanceRoot; // 0x350(0x08)
	UBakeConfig* CurrentModulatedBakeConfig; // 0x358(0x08)
	FBox ChildLocalSpaceBoundingBox; // 0x360(0x1c)
	FBox WorldSpaceBoundingBox; // 0x37c(0x1c)
	FDeepCSGFloatTree BoundingTree; // 0x398(0x18)
	FMatrix TransformMatInv; // 0x3b0(0x40)
};

// Class FSDEngine.CSGModulatedSDFInstanceComponent
// Size: 0x4e0 (Inherited: 0x200)
struct UCSGModulatedSDFInstanceComponent : UCSGBaseComponent {
	FCSGSDFModulatedInstanceProperties Properties; // 0x1f8(0x2b0)
	FBinaryTerrainMaterialCombiner Materials; // 0x4a8(0x30)
};

// Class FSDEngine.CSGVoronoi
// Size: 0xf0 (Inherited: 0xd0)
struct UCSGVoronoi : USimpleMeshWithCachedTree {
	FVoronoiProperties Properties; // 0xd0(0x1c)
};

// Class FSDEngine.CSGVoronoiComponent
// Size: 0x250 (Inherited: 0x230)
struct UCSGVoronoiComponent : USimpleMeshWithCachedTreeComponent {
	FVoronoiProperties Properties; // 0x230(0x1c)
};

// Class FSDEngine.CSGSTL
// Size: 0xe0 (Inherited: 0xd0)
struct UCSGSTL : USimpleMeshWithCachedTree {
	FCSGSTLProperties Properties; // 0xd0(0x08)
};

// Class FSDEngine.CSGSTLComponent
// Size: 0x240 (Inherited: 0x230)
struct UCSGSTLComponent : USimpleMeshWithCachedTreeComponent {
	FCSGSTLProperties Properties; // 0x230(0x08)
};

// Class FSDEngine.DeepCSGSection
// Size: 0x228 (Inherited: 0x220)
struct ADeepCSGSection : AActor {
	UDeepProceduralMeshComponent* DeepMesh; // 0x220(0x08)
};

// Class FSDEngine.DeepProceduralMeshComponent
// Size: 0x470 (Inherited: 0x420)
struct UDeepProceduralMeshComponent : UMeshComponent {
	UBodySetup* ProcMeshBodySetup; // 0x418(0x08)

	UTerrainMaterialCore* FindTerrainMaterialFromPhysicalMaterial(UPhysicalMaterial* Material);
};

// Class FSDEngine.SDFBuilder
// Size: 0x3d8 (Inherited: 0x3b8)
struct ASDFBuilder : ACSGBuilderBase {
	enum class EPreviewCellSize PreviewSize; // 0x3b8(0x01)
	UTerrainMaterialCore* PreviewMaterial; // 0x3c0(0x08)
	USDFBase* CurrentRoot; // 0x3c8(0x08)
	USDFUnionOpComponent* SDFRoot; // 0x3d0(0x08)
};

// Class FSDEngine.SDFBase
// Size: 0x60 (Inherited: 0x28)
struct USDFBase : UBuilderBase {
	FSDFBaseProperties BaseProperties; // 0x28(0x01)
	FTransform RelativeTransform; // 0x30(0x30)
};

// Class FSDEngine.SDFHeightMap
// Size: 0xc0 (Inherited: 0x60)
struct USDFHeightMap : USDFBase {
	FSDFHeightMaproperties Properties; // 0x60(0x0c)
};

// Class FSDEngine.SDFBaseComponent
// Size: 0x200 (Inherited: 0x1f0)
struct USDFBaseComponent : UCSGBuilderBaseSceneComponent {
	FSDFBaseProperties BaseProperties; // 0x1f0(0x01)
};

// Class FSDEngine.USDFHeightMapComponent
// Size: 0x210 (Inherited: 0x200)
struct UUSDFHeightMapComponent : USDFBaseComponent {
	FSDFHeightMaproperties Properties; // 0x1f8(0x0c)
	UTextureRenderTarget2D* HeightTexture; // 0x208(0x08)
};

// Class FSDEngine.SDFSingleChildBase
// Size: 0x70 (Inherited: 0x60)
struct USDFSingleChildBase : USDFBase {
	USDFBase* Child; // 0x60(0x08)
};

// Class FSDEngine.SDFModifier
// Size: 0x80 (Inherited: 0x70)
struct USDFModifier : USDFSingleChildBase {
	FSDFModifierProperties Properties; // 0x68(0x0c)
};

// Class FSDEngine.SDFModifierComponent
// Size: 0x210 (Inherited: 0x200)
struct USDFModifierComponent : USDFBaseComponent {
	FSDFModifierProperties Properties; // 0x1f8(0x0c)
};

// Class FSDEngine.SDFUnionOp
// Size: 0x80 (Inherited: 0x60)
struct USDFUnionOp : USDFBase {
	FSDFSmoothingProperties Properties; // 0x60(0x08)
	TArray<USDFBase*> Arguments; // 0x68(0x10)
};

// Class FSDEngine.SDFUnionOpComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFUnionOpComponent : USDFBaseComponent {
	FSDFSmoothingProperties Properties; // 0x1f8(0x08)
};

// Class FSDEngine.SDFIntersectOp
// Size: 0x80 (Inherited: 0x60)
struct USDFIntersectOp : USDFBase {
	FSDFSmoothingProperties Properties; // 0x60(0x08)
	TArray<USDFBase*> Arguments; // 0x68(0x10)
};

// Class FSDEngine.SDFIntersectOpComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFIntersectOpComponent : USDFBaseComponent {
	FSDFSmoothingProperties Properties; // 0x1f8(0x08)
};

// Class FSDEngine.SDFSubOp
// Size: 0x80 (Inherited: 0x60)
struct USDFSubOp : USDFBase {
	FSDFSmoothingProperties Properties; // 0x60(0x08)
	USDFBase* A; // 0x68(0x08)
	USDFBase* B; // 0x70(0x08)
};

// Class FSDEngine.SDFSubOpComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFSubOpComponent : USDFBaseComponent {
	FSDFSmoothingProperties Properties; // 0x1f8(0x08)
};

// Class FSDEngine.SDFOnion
// Size: 0x70 (Inherited: 0x60)
struct USDFOnion : USDFBase {
	FSDFOnionProperties Properties; // 0x60(0x04)
	USDFBase* Argument; // 0x68(0x08)
};

// Class FSDEngine.SDFOnionComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFOnionComponent : USDFBaseComponent {
	FSDFOnionProperties Properties; // 0x1f8(0x04)
};

// Class FSDEngine.SDFRandomizeTransform
// Size: 0xc0 (Inherited: 0x70)
struct USDFRandomizeTransform : USDFSingleChildBase {
	FSDFRandomizeTransformProperties Properties; // 0x68(0x54)
};

// Class FSDEngine.SDFRandomizeTransformComponent
// Size: 0x250 (Inherited: 0x200)
struct USDFRandomizeTransformComponent : USDFBaseComponent {
	FSDFRandomizeTransformProperties Properties; // 0x1f8(0x54)
};

// Class FSDEngine.SDFRandomDisable
// Size: 0x70 (Inherited: 0x70)
struct USDFRandomDisable : USDFSingleChildBase {
	FSDFRandomDisableProperties Properties; // 0x68(0x04)
};

// Class FSDEngine.SDFRandomDisableComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFRandomDisableComponent : USDFBaseComponent {
	FSDFRandomDisableProperties Properties; // 0x1f8(0x04)
};

// Class FSDEngine.SDFBaseWithTransform
// Size: 0x130 (Inherited: 0x60)
struct USDFBaseWithTransform : USDFBase {
};

// Class FSDEngine.SDFBaseWithTransformComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFBaseWithTransformComponent : USDFBaseComponent {
};

// Class FSDEngine.SDFSphere
// Size: 0x140 (Inherited: 0x130)
struct USDFSphere : USDFBaseWithTransform {
	FSDFSphereProperties Properties; // 0x130(0x0c)
};

// Class FSDEngine.SDFSphereComponent
// Size: 0x210 (Inherited: 0x200)
struct USDFSphereComponent : USDFBaseWithTransformComponent {
	FSDFSphereProperties Properties; // 0x1f8(0x0c)
};

// Class FSDEngine.SDFPlane
// Size: 0x130 (Inherited: 0x130)
struct USDFPlane : USDFBaseWithTransform {
};

// Class FSDEngine.SDFPlaneComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFPlaneComponent : USDFBaseWithTransformComponent {
};

// Class FSDEngine.SDFBox
// Size: 0x140 (Inherited: 0x130)
struct USDFBox : USDFBaseWithTransform {
	FSDFBoxProperties Properties; // 0x130(0x0c)
};

// Class FSDEngine.SDFBoxComponent
// Size: 0x210 (Inherited: 0x200)
struct USDFBoxComponent : USDFBaseWithTransformComponent {
	FSDFBoxProperties Properties; // 0x1f8(0x0c)
};

// Class FSDEngine.SDFCylinder
// Size: 0x140 (Inherited: 0x130)
struct USDFCylinder : USDFBaseWithTransform {
	FSDFCylinderProperties Properties; // 0x130(0x08)
};

// Class FSDEngine.SDFCylinderComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFCylinderComponent : USDFBaseWithTransformComponent {
	FSDFCylinderProperties Properties; // 0x1f8(0x08)
};

// Class FSDEngine.SDFCapsule
// Size: 0x140 (Inherited: 0x130)
struct USDFCapsule : USDFBaseWithTransform {
	FSDFCapsuleProperties Properties; // 0x130(0x08)
};

// Class FSDEngine.SDFCapsuleComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFCapsuleComponent : USDFBaseWithTransformComponent {
	FSDFCapsuleProperties Properties; // 0x1f8(0x08)
};

// Class FSDEngine.SDFTorus
// Size: 0x140 (Inherited: 0x130)
struct USDFTorus : USDFBaseWithTransform {
	FSDFTorusProperties Properties; // 0x130(0x10)
};

// Class FSDEngine.SDFTorusComponent
// Size: 0x210 (Inherited: 0x200)
struct USDFTorusComponent : USDFBaseWithTransformComponent {
	FSDFTorusProperties Properties; // 0x1f8(0x10)
};

// Class FSDEngine.StaticMeshCarver
// Size: 0xb8 (Inherited: 0x30)
struct UStaticMeshCarver : UDataAsset {
	FString Status; // 0x30(0x10)
	TSoftObjectPtr<UStaticMesh> Mesh; // 0x40(0x28)
	FBox AABB; // 0x68(0x1c)
	FDeepCSGFloatTree BSPTree; // 0x88(0x18)
	FDeepCSGFloatTreePacked BSPTreePacked; // 0xa0(0x18)

	void Generate();
	void ExportPreviewMesh();
};

