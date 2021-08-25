// Class FSDEngine.TerrainMaterialBase
// Size: 0x30 (Inherited: 0x30)
struct UTerrainMaterialBase : UPrimaryDataAsset {
};

// Class FSDEngine.TerrainMaterialCore
// Size: 0xa0 (Inherited: 0x30)
struct UTerrainMaterialCore : UTerrainMaterialBase {
	struct UTerrainMaterialCore* BurntMaterial; // 0x30(0x08)
	struct UTerrainMaterialCore* BulletBurntMaterial; // 0x38(0x08)
	char PathfinderDanger : 1; // 0x40(0x01)
	char PathfinderPreventSpawning : 1; // 0x40(0x01)
	char UnknownData_40_2 : 6; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
	struct UMaterialInterface* ScannerMaterial; // 0x48(0x08)
	struct TSoftObjectPtr<struct UMaterialInterface> RenderMaterial; // 0x50(0x28)
	struct TSoftObjectPtr<struct UMaterialInstance> ObjectMaterial; // 0x78(0x28)
};

// Class FSDEngine.CSGBake
// Size: 0x200 (Inherited: 0x30)
struct UCSGBake : UDataAsset {
	struct FBakeSettings BakeSettings; // 0x30(0x140)
	int32_t NumVariations; // 0x170(0x04)
	int32_t InitialSeed; // 0x174(0x04)
	SoftClassProperty CSG; // 0x178(0x28)
	struct FString Status; // 0x1a0(0x10)
	struct FBox CombinedAABB; // 0x1b0(0x1c)
	char UnknownData_1CC[0x4]; // 0x1cc(0x04)
	struct TArray<struct FBakeEntry> Entries; // 0x1d0(0x10)
	bool IsBaking; // 0x1e0(0x01)
	char UnknownData_1E1[0x7]; // 0x1e1(0x07)
	struct TArray<struct UBakeConfig*> CurrentBakeConfigs; // 0x1e8(0x10)
	struct ACSGBuilder* CDO; // 0x1f8(0x08)

	void Bake(); // Function FSDEngine.CSGBake.Bake
};

// Class FSDEngine.BuilderBase
// Size: 0x28 (Inherited: 0x28)
struct UBuilderBase : UObject {
};

// Class FSDEngine.CSGBase
// Size: 0x60 (Inherited: 0x28)
struct UCSGBase : UBuilderBase {
	struct FMeshBaseProperties BaseProperties; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FTransform RelativeTransform; // 0x30(0x30)
};

// Class FSDEngine.CSGBakedChildInstance
// Size: 0x110 (Inherited: 0x60)
struct UCSGBakedChildInstance : UCSGBase {
	struct FCSGBakedChildInstanceProperties Properties; // 0x60(0x10)
	struct FBox ChildLocalSpaceBoundingBox; // 0x70(0x1c)
	struct FBox WorldSpaceBoundingBox; // 0x8c(0x1c)
	char UnknownData_A8[0x8]; // 0xa8(0x08)
	struct FMatrix TransformMatInv; // 0xb0(0x40)
	struct FDeepCSGFloatTree TempTree; // 0xf0(0x18)
	char UnknownData_108[0x8]; // 0x108(0x08)
};

// Class FSDEngine.CSGBuilderBaseSceneComponent
// Size: 0x1f0 (Inherited: 0x1f0)
struct UCSGBuilderBaseSceneComponent : USceneComponent {
};

// Class FSDEngine.CSGBaseComponent
// Size: 0x200 (Inherited: 0x1f0)
struct UCSGBaseComponent : UCSGBuilderBaseSceneComponent {
	struct FMeshBaseProperties BaseProperties; // 0x1f0(0x01)
	char UnknownData_1F1[0xf]; // 0x1f1(0x0f)
};

// Class FSDEngine.CSGBakedChildInstanceComponent
// Size: 0x210 (Inherited: 0x200)
struct UCSGBakedChildInstanceComponent : UCSGBaseComponent {
	struct FCSGBakedChildInstanceProperties Properties; // 0x1f8(0x10)
};

// Class FSDEngine.CSGSingleChildBase
// Size: 0x70 (Inherited: 0x60)
struct UCSGSingleChildBase : UCSGBase {
	struct UCSGBase* Child; // 0x60(0x08)
	char UnknownData_68[0x8]; // 0x68(0x08)
};

// Class FSDEngine.CSGDuplicateSingleChildBase
// Size: 0x70 (Inherited: 0x60)
struct UCSGDuplicateSingleChildBase : UCSGBase {
	struct TArray<struct UCSGBase*> Children; // 0x60(0x10)
};

// Class FSDEngine.CSGBuilderBase
// Size: 0x3b8 (Inherited: 0x220)
struct ACSGBuilderBase : AActor {
	struct FBox BoundingBox; // 0x220(0x1c)
	int32_t PreviewSeed; // 0x23c(0x04)
	struct FBakeSettings PreviewSettings; // 0x240(0x140)
	struct UTerrainMaterialCore* EmptyMat; // 0x380(0x08)
	struct UTerrainMaterialCore* ErrorMat; // 0x388(0x08)
	struct UTerrainMaterialCore* SolidMat; // 0x390(0x08)
	struct UTerrainMaterialCore* BurnedMat; // 0x398(0x08)
	struct UCSGPreviewComponent* PreviewComponent; // 0x3a0(0x08)
	char UnknownData_3A8[0x10]; // 0x3a8(0x10)

	void PreGenerate(struct UBakeConfig* builder); // Function FSDEngine.CSGBuilderBase.PreGenerate
};

// Class FSDEngine.CSGBuilder
// Size: 0x3f0 (Inherited: 0x3b8)
struct ACSGBuilder : ACSGBuilderBase {
	struct UCSGGroupComponent* CSGRoot; // 0x3b8(0x08)
	struct TArray<struct UTerrainMaterialCore*> UsedMaterials; // 0x3c0(0x10)
	struct UCSGBase* CurrentRoot; // 0x3d0(0x08)
	struct UCSGBase* CurrentPreviewRoot; // 0x3d8(0x08)
	struct UBakeConfig* CurrentPreviewConfig; // 0x3e0(0x08)
	struct UCSGPreviewScene* PreviewScene; // 0x3e8(0x08)
};

// Class FSDEngine.BakeConfig
// Size: 0x1d0 (Inherited: 0x28)
struct UBakeConfig : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FBakeSettings Settings; // 0x30(0x140)
	struct TMap<struct FName, struct UBuilderBase*> Objects; // 0x170(0x50)
	struct TArray<struct FString> Warnings; // 0x1c0(0x10)

	struct FVector GetVectorSetting(struct FName Name, struct FVector defaultVal); // Function FSDEngine.BakeConfig.GetVectorSetting
	struct FRandomStream GetRandomStream(); // Function FSDEngine.BakeConfig.GetRandomStream
	struct UBuilderBase* GetObject(struct FName Name); // Function FSDEngine.BakeConfig.GetObject
	int32_t GetIntSetting(struct FName Name, int32_t defaultVal); // Function FSDEngine.BakeConfig.GetIntSetting
	float GetFloatSetting(struct FName Name, float defaultVal); // Function FSDEngine.BakeConfig.GetFloatSetting
	bool GetBoolSetting(struct FName Name, bool defaultVal); // Function FSDEngine.BakeConfig.GetBoolSetting
};

// Class FSDEngine.CSGCellNoise
// Size: 0x100 (Inherited: 0x60)
struct UCSGCellNoise : UCSGBase {
	struct FMeshCellNoiseProperties Properties; // 0x60(0x1c)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
	struct FBinaryTerrainMaterialCombiner Materials; // 0x80(0x30)
	struct FVector ReciprocalCellSize; // 0xb0(0x0c)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
	struct FDeepCSGFloatTree ApplyTree; // 0xc0(0x18)
	struct TArray<struct FVector> CellPositions; // 0xd8(0x10)
	struct TArray<struct FDeepCSGNode> CellLeaves; // 0xe8(0x10)
	char UnknownData_F8[0x8]; // 0xf8(0x08)
};

// Class FSDEngine.CSGCellNoiseComponent
// Size: 0x250 (Inherited: 0x200)
struct UCSGCellNoiseComponent : UCSGBaseComponent {
	struct FMeshCellNoiseProperties Properties; // 0x1f8(0x1c)
	struct FBinaryTerrainMaterialCombiner Materials; // 0x218(0x30)
	char UnknownData_24C[0x4]; // 0x24c(0x04)
};

// Class FSDEngine.CSGChildInstance
// Size: 0x2f0 (Inherited: 0x60)
struct UCSGChildInstance : UCSGBase {
	struct FCSGChildInstanceProperties Properties; // 0x60(0x150)
	struct FGeneralTerrainMaterialCombiner Materials; // 0x1b0(0x50)
	struct UCSGBase* CSGChildInstanceRoot; // 0x200(0x08)
	struct UBakeConfig* CurrentBakeConfig; // 0x208(0x08)
	struct FBox ChildLocalSpaceBoundingBox; // 0x210(0x1c)
	struct FBox WorldSpaceBoundingBox; // 0x22c(0x1c)
	struct FDeepCSGFloatTree BoundingTree; // 0x248(0x18)
	struct FMatrix TransformMatInv; // 0x260(0x40)
	struct FDeepCSGTree TempTree; // 0x2a0(0x48)
	char UnknownData_2E8[0x8]; // 0x2e8(0x08)
};

// Class FSDEngine.CSGChildInstanceComponent
// Size: 0x3a0 (Inherited: 0x200)
struct UCSGChildInstanceComponent : UCSGBaseComponent {
	struct FCSGChildInstanceProperties Properties; // 0x1f8(0x150)
	struct FGeneralTerrainMaterialCombiner Materials; // 0x348(0x50)
};

// Class FSDEngine.SimpleMeshWithCachedTree
// Size: 0xd0 (Inherited: 0x60)
struct USimpleMeshWithCachedTree : UCSGBase {
	char UnknownData_60[0x38]; // 0x60(0x38)
	struct FBinaryTerrainMaterialCombiner Materials; // 0x98(0x30)
	bool InvertCSG; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
};

// Class FSDEngine.ConvexMeshWithCachedTree
// Size: 0x120 (Inherited: 0xd0)
struct UConvexMeshWithCachedTree : USimpleMeshWithCachedTree {
	struct FConvexNoiseProperties Noise; // 0xd0(0x0c)
	char UnknownData_DC[0x44]; // 0xdc(0x44)
};

// Class FSDEngine.CSGConvexCollider
// Size: 0x140 (Inherited: 0x120)
struct UCSGConvexCollider : UConvexMeshWithCachedTree {
	struct FCSGConvexColliderProperties Properties; // 0x120(0x08)
	char UnknownData_128[0x18]; // 0x128(0x18)
};

// Class FSDEngine.SimpleMeshWithCachedTreeComponent
// Size: 0x230 (Inherited: 0x200)
struct USimpleMeshWithCachedTreeComponent : UCSGBaseComponent {
	struct FBinaryTerrainMaterialCombiner Materials; // 0x1f8(0x30)
	bool InvertCSG; // 0x228(0x01)
};

// Class FSDEngine.ConvexMeshWithCachedTreeComponent
// Size: 0x240 (Inherited: 0x230)
struct UConvexMeshWithCachedTreeComponent : USimpleMeshWithCachedTreeComponent {
	struct FConvexNoiseProperties Noise; // 0x230(0x0c)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
};

// Class FSDEngine.CSGConvexColliderComponent
// Size: 0x250 (Inherited: 0x240)
struct UCSGConvexColliderComponent : UConvexMeshWithCachedTreeComponent {
	struct FCSGConvexColliderProperties Properties; // 0x240(0x08)
	char UnknownData_248[0x8]; // 0x248(0x08)
};

// Class FSDEngine.CSGGroup
// Size: 0x70 (Inherited: 0x60)
struct UCSGGroup : UCSGBase {
	struct TArray<struct UCSGBase*> Children; // 0x60(0x10)
};

// Class FSDEngine.CSGGroupComponent
// Size: 0x200 (Inherited: 0x200)
struct UCSGGroupComponent : UCSGBaseComponent {
};

// Class FSDEngine.CSGLayer
// Size: 0x1b0 (Inherited: 0x70)
struct UCSGLayer : UCSGGroup {
	struct FMeshLayerProperties Properties; // 0x70(0x28)
	struct FGeneralTerrainMaterialCombiner Materials; // 0x98(0x50)
	struct FBox WorldSpaceBoundingBox; // 0xe8(0x1c)
	char UnknownData_104[0x4]; // 0x104(0x04)
	struct FDeepCSGFloatTree BoundingTree; // 0x108(0x18)
	struct FDeepCSGTree TempTree; // 0x120(0x48)
	char UnknownData_168[0x8]; // 0x168(0x08)
	struct FMatrix TransformMatInv; // 0x170(0x40)
};

// Class FSDEngine.CSGLayerComponent
// Size: 0x270 (Inherited: 0x200)
struct UCSGLayerComponent : UCSGGroupComponent {
	struct FMeshLayerProperties Properties; // 0x1f8(0x28)
	struct FGeneralTerrainMaterialCombiner Materials; // 0x220(0x50)
};

// Class FSDEngine.CSGAddMaterialLayers
// Size: 0xb0 (Inherited: 0x70)
struct UCSGAddMaterialLayers : UCSGSingleChildBase {
	struct FCSGAddMaterialLayersProperties Properties; // 0x68(0x40)
};

// Class FSDEngine.CSGAddMaterialLayersComponent
// Size: 0x240 (Inherited: 0x200)
struct UCSGAddMaterialLayersComponent : UCSGBaseComponent {
	struct FCSGAddMaterialLayersProperties Properties; // 0x1f8(0x40)
};

// Class FSDEngine.CSGRandomizeTransform
// Size: 0xc0 (Inherited: 0x70)
struct UCSGRandomizeTransform : UCSGSingleChildBase {
	struct FCSGRandomizeTransformProperties Properties; // 0x68(0x54)
};

// Class FSDEngine.CSGRandomizeTransformComponent
// Size: 0x250 (Inherited: 0x200)
struct UCSGRandomizeTransformComponent : UCSGBaseComponent {
	struct FCSGRandomizeTransformProperties Properties; // 0x1f8(0x54)
};

// Class FSDEngine.CSGRandomDisable
// Size: 0x70 (Inherited: 0x70)
struct UCSGRandomDisable : UCSGSingleChildBase {
	struct FCSGRandomDisableProperties Properties; // 0x68(0x04)
};

// Class FSDEngine.CSGRandomDisableComponent
// Size: 0x200 (Inherited: 0x200)
struct UCSGRandomDisableComponent : UCSGBaseComponent {
	struct FCSGRandomDisableProperties Properties; // 0x1f8(0x04)
};

// Class FSDEngine.CSGGridDuplicator
// Size: 0x90 (Inherited: 0x70)
struct UCSGGridDuplicator : UCSGDuplicateSingleChildBase {
	struct FCSGGridDuplicatorProperties Properties; // 0x70(0x20)
};

// Class FSDEngine.CSGGridDuplicatorComponent
// Size: 0x220 (Inherited: 0x200)
struct UCSGGridDuplicatorComponent : UCSGBaseComponent {
	struct FCSGGridDuplicatorProperties Properties; // 0x1f8(0x20)
};

// Class FSDEngine.CSGCircleDuplicator
// Size: 0x80 (Inherited: 0x70)
struct UCSGCircleDuplicator : UCSGDuplicateSingleChildBase {
	struct FCSGCircleDuplicatorProperties Properties; // 0x70(0x08)
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class FSDEngine.CSGCircleDuplicatorComponent
// Size: 0x200 (Inherited: 0x200)
struct UCSGCircleDuplicatorComponent : UCSGBaseComponent {
	struct FCSGCircleDuplicatorProperties Properties; // 0x1f8(0x08)
};

// Class FSDEngine.CSGPreviewComponent
// Size: 0x280 (Inherited: 0x1f0)
struct UCSGPreviewComponent : USceneComponent {
	struct ACSGBuilderBase* BaseBuilder; // 0x1f0(0x08)
	struct UBakeConfig* CurrentBakeConfig; // 0x1f8(0x08)
	struct TMap<struct FChunkId, struct UDeepProceduralMeshComponent*> Meshes; // 0x200(0x50)
	bool UsePreviewScene; // 0x250(0x01)
	char UnknownData_251[0x2b]; // 0x251(0x2b)
	int32_t ChangeCount; // 0x27c(0x04)
};

// Class FSDEngine.CSGPreviewScene
// Size: 0x188 (Inherited: 0x30)
struct UCSGPreviewScene : UDataAsset {
	struct ACSGBuilder* Mesh; // 0x30(0x08)
	struct FBakeSettings Settings; // 0x38(0x140)
	int32_t Seed; // 0x178(0x04)
	char UnknownData_17C[0x4]; // 0x17c(0x04)
	struct UTerrainMaterialCore* TerrainMaterial; // 0x180(0x08)
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
	struct FMeshBoxProperties Properties; // 0x120(0x14)
	char UnknownData_134[0xc]; // 0x134(0x0c)
};

// Class FSDEngine.CSGBoxComponent
// Size: 0x260 (Inherited: 0x240)
struct UCSGBoxComponent : UConvexMeshWithCachedTreeComponent {
	struct FMeshBoxProperties Properties; // 0x240(0x14)
	char UnknownData_254[0xc]; // 0x254(0x0c)
};

// Class FSDEngine.CSGCylinder
// Size: 0x130 (Inherited: 0x120)
struct UCSGCylinder : UConvexMeshWithCachedTree {
	struct FCSGCylinderProperties Properties; // 0x120(0x0c)
	char UnknownData_12C[0x4]; // 0x12c(0x04)
};

// Class FSDEngine.CSGCylinderComponent
// Size: 0x250 (Inherited: 0x240)
struct UCSGCylinderComponent : UConvexMeshWithCachedTreeComponent {
	struct FCSGCylinderProperties Properties; // 0x240(0x0c)
	char UnknownData_24C[0x4]; // 0x24c(0x04)
};

// Class FSDEngine.CSGCone
// Size: 0x130 (Inherited: 0x120)
struct UCSGCone : UConvexMeshWithCachedTree {
	struct FCSGConeProperties Properties; // 0x120(0x10)
};

// Class FSDEngine.CSGConeComponent
// Size: 0x250 (Inherited: 0x240)
struct UCSGConeComponent : UConvexMeshWithCachedTreeComponent {
	struct FCSGConeProperties Properties; // 0x240(0x10)
};

// Class FSDEngine.CSGSphere
// Size: 0x140 (Inherited: 0x120)
struct UCSGSphere : UConvexMeshWithCachedTree {
	struct FCSGSphereProperties Properties; // 0x120(0x14)
	char UnknownData_134[0xc]; // 0x134(0x0c)
};

// Class FSDEngine.CSGSphereComponent
// Size: 0x260 (Inherited: 0x240)
struct UCSGSphereComponent : UConvexMeshWithCachedTreeComponent {
	struct FCSGSphereProperties Properties; // 0x240(0x14)
	char UnknownData_254[0xc]; // 0x254(0x0c)
};

// Class FSDEngine.CSGRemapped
// Size: 0xf0 (Inherited: 0x70)
struct UCSGRemapped : UCSGSingleChildBase {
	struct FRemappedProperties Properties; // 0x68(0x01)
	char UnknownData_71[0x7f]; // 0x71(0x7f)
};

// Class FSDEngine.CSGRemappedComponent
// Size: 0x200 (Inherited: 0x200)
struct UCSGRemappedComponent : UCSGBaseComponent {
	struct FRemappedProperties Properties; // 0x1f8(0x01)
};

// Class FSDEngine.CSGSplineMod
// Size: 0x1d0 (Inherited: 0xf0)
struct UCSGSplineMod : UCSGRemapped {
	struct FSplineModProperties SplineProperties; // 0xf0(0x20)
	struct FSplineCurves SplineCurves; // 0x110(0x68)
	struct TArray<struct FBox> AABBs; // 0x178(0x10)
	struct TArray<float> Keys; // 0x188(0x10)
	struct TArray<struct FVector4> Planes; // 0x198(0x10)
	struct FBox TotalAABB; // 0x1a8(0x1c)
	char UnknownData_1C4[0xc]; // 0x1c4(0x0c)
};

// Class FSDEngine.CSGSplineModComponent
// Size: 0x220 (Inherited: 0x200)
struct UCSGSplineModComponent : UCSGRemappedComponent {
	struct FSplineModProperties SplineProperties; // 0x200(0x20)
};

// Class FSDEngine.CSGSDFInstance
// Size: 0x340 (Inherited: 0x60)
struct UCSGSDFInstance : UCSGBase {
	struct FCSGSDFInstanceProperties Properties; // 0x60(0x158)
	struct FBinaryTerrainMaterialCombiner Materials; // 0x1b8(0x30)
	struct USDFBase* CSGSDFInstanceRoot; // 0x1e8(0x08)
	struct UBakeConfig* CurrentBakeConfig; // 0x1f0(0x08)
	struct FBox ChildLocalSpaceBoundingBox; // 0x1f8(0x1c)
	struct FBox WorldSpaceBoundingBox; // 0x214(0x1c)
	struct FDeepCSGFloatTree BoundingTree; // 0x230(0x18)
	char UnknownData_248[0x8]; // 0x248(0x08)
	struct FMatrix TransformMatInv; // 0x250(0x40)
	char UnknownData_290[0xb0]; // 0x290(0xb0)
};

// Class FSDEngine.CSGSDFInstanceComponent
// Size: 0x380 (Inherited: 0x200)
struct UCSGSDFInstanceComponent : UCSGBaseComponent {
	struct FCSGSDFInstanceProperties Properties; // 0x1f8(0x158)
	struct FBinaryTerrainMaterialCombiner Materials; // 0x350(0x30)
};

// Class FSDEngine.CSGModulatedSDFInstance
// Size: 0x470 (Inherited: 0x60)
struct UCSGModulatedSDFInstance : UCSGBase {
	struct FCSGSDFModulatedInstanceProperties Properties; // 0x60(0x2b0)
	struct FBinaryTerrainMaterialCombiner Materials; // 0x310(0x30)
	struct USDFBase* CSGSDFInstanceRoot; // 0x340(0x08)
	struct UBakeConfig* CurrentBakeConfig; // 0x348(0x08)
	struct USDFBase* CSGSDFModulatedInstanceRoot; // 0x350(0x08)
	struct UBakeConfig* CurrentModulatedBakeConfig; // 0x358(0x08)
	struct FBox ChildLocalSpaceBoundingBox; // 0x360(0x1c)
	struct FBox WorldSpaceBoundingBox; // 0x37c(0x1c)
	struct FDeepCSGFloatTree BoundingTree; // 0x398(0x18)
	struct FMatrix TransformMatInv; // 0x3b0(0x40)
	char UnknownData_3F0[0x80]; // 0x3f0(0x80)
};

// Class FSDEngine.CSGModulatedSDFInstanceComponent
// Size: 0x4e0 (Inherited: 0x200)
struct UCSGModulatedSDFInstanceComponent : UCSGBaseComponent {
	struct FCSGSDFModulatedInstanceProperties Properties; // 0x1f8(0x2b0)
	struct FBinaryTerrainMaterialCombiner Materials; // 0x4a8(0x30)
};

// Class FSDEngine.CSGVoronoi
// Size: 0xf0 (Inherited: 0xd0)
struct UCSGVoronoi : USimpleMeshWithCachedTree {
	struct FVoronoiProperties Properties; // 0xd0(0x1c)
	char UnknownData_EC[0x4]; // 0xec(0x04)
};

// Class FSDEngine.CSGVoronoiComponent
// Size: 0x250 (Inherited: 0x230)
struct UCSGVoronoiComponent : USimpleMeshWithCachedTreeComponent {
	struct FVoronoiProperties Properties; // 0x230(0x1c)
	char UnknownData_24C[0x4]; // 0x24c(0x04)
};

// Class FSDEngine.CSGSTL
// Size: 0xe0 (Inherited: 0xd0)
struct UCSGSTL : USimpleMeshWithCachedTree {
	struct FCSGSTLProperties Properties; // 0xd0(0x08)
	char UnknownData_D8[0x8]; // 0xd8(0x08)
};

// Class FSDEngine.CSGSTLComponent
// Size: 0x240 (Inherited: 0x230)
struct UCSGSTLComponent : USimpleMeshWithCachedTreeComponent {
	struct FCSGSTLProperties Properties; // 0x230(0x08)
	char UnknownData_238[0x8]; // 0x238(0x08)
};

// Class FSDEngine.DeepCSGSection
// Size: 0x228 (Inherited: 0x220)
struct ADeepCSGSection : AActor {
	struct UDeepProceduralMeshComponent* DeepMesh; // 0x220(0x08)
};

// Class FSDEngine.DeepProceduralMeshComponent
// Size: 0x470 (Inherited: 0x420)
struct UDeepProceduralMeshComponent : UMeshComponent {
	struct UBodySetup* ProcMeshBodySetup; // 0x418(0x08)
	char UnknownData_428[0x48]; // 0x428(0x48)

	struct UTerrainMaterialCore* FindTerrainMaterialFromPhysicalMaterial(struct UPhysicalMaterial* Material); // Function FSDEngine.DeepProceduralMeshComponent.FindTerrainMaterialFromPhysicalMaterial
};

// Class FSDEngine.SDFBuilder
// Size: 0x3d8 (Inherited: 0x3b8)
struct ASDFBuilder : ACSGBuilderBase {
	enum class EPreviewCellSize PreviewSize; // 0x3b8(0x01)
	char UnknownData_3B9[0x7]; // 0x3b9(0x07)
	struct UTerrainMaterialCore* PreviewMaterial; // 0x3c0(0x08)
	struct USDFBase* CurrentRoot; // 0x3c8(0x08)
	struct USDFUnionOpComponent* SDFRoot; // 0x3d0(0x08)
};

// Class FSDEngine.SDFBase
// Size: 0x60 (Inherited: 0x28)
struct USDFBase : UBuilderBase {
	struct FSDFBaseProperties BaseProperties; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FTransform RelativeTransform; // 0x30(0x30)
};

// Class FSDEngine.SDFHeightMap
// Size: 0xc0 (Inherited: 0x60)
struct USDFHeightMap : USDFBase {
	struct FSDFHeightMaproperties Properties; // 0x60(0x0c)
	char UnknownData_6C[0x54]; // 0x6c(0x54)
};

// Class FSDEngine.SDFBaseComponent
// Size: 0x200 (Inherited: 0x1f0)
struct USDFBaseComponent : UCSGBuilderBaseSceneComponent {
	struct FSDFBaseProperties BaseProperties; // 0x1f0(0x01)
	char UnknownData_1F1[0xf]; // 0x1f1(0x0f)
};

// Class FSDEngine.USDFHeightMapComponent
// Size: 0x210 (Inherited: 0x200)
struct UUSDFHeightMapComponent : USDFBaseComponent {
	struct FSDFHeightMaproperties Properties; // 0x1f8(0x0c)
	struct UTextureRenderTarget2D* HeightTexture; // 0x208(0x08)
};

// Class FSDEngine.SDFSingleChildBase
// Size: 0x70 (Inherited: 0x60)
struct USDFSingleChildBase : USDFBase {
	struct USDFBase* Child; // 0x60(0x08)
	char UnknownData_68[0x8]; // 0x68(0x08)
};

// Class FSDEngine.SDFModifier
// Size: 0x80 (Inherited: 0x70)
struct USDFModifier : USDFSingleChildBase {
	struct FSDFModifierProperties Properties; // 0x68(0x0c)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
};

// Class FSDEngine.SDFModifierComponent
// Size: 0x210 (Inherited: 0x200)
struct USDFModifierComponent : USDFBaseComponent {
	struct FSDFModifierProperties Properties; // 0x1f8(0x0c)
	char UnknownData_20C[0x4]; // 0x20c(0x04)
};

// Class FSDEngine.SDFUnionOp
// Size: 0x80 (Inherited: 0x60)
struct USDFUnionOp : USDFBase {
	struct FSDFSmoothingProperties Properties; // 0x60(0x08)
	struct TArray<struct USDFBase*> Arguments; // 0x68(0x10)
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class FSDEngine.SDFUnionOpComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFUnionOpComponent : USDFBaseComponent {
	struct FSDFSmoothingProperties Properties; // 0x1f8(0x08)
};

// Class FSDEngine.SDFIntersectOp
// Size: 0x80 (Inherited: 0x60)
struct USDFIntersectOp : USDFBase {
	struct FSDFSmoothingProperties Properties; // 0x60(0x08)
	struct TArray<struct USDFBase*> Arguments; // 0x68(0x10)
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class FSDEngine.SDFIntersectOpComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFIntersectOpComponent : USDFBaseComponent {
	struct FSDFSmoothingProperties Properties; // 0x1f8(0x08)
};

// Class FSDEngine.SDFSubOp
// Size: 0x80 (Inherited: 0x60)
struct USDFSubOp : USDFBase {
	struct FSDFSmoothingProperties Properties; // 0x60(0x08)
	struct USDFBase* A; // 0x68(0x08)
	struct USDFBase* B; // 0x70(0x08)
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class FSDEngine.SDFSubOpComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFSubOpComponent : USDFBaseComponent {
	struct FSDFSmoothingProperties Properties; // 0x1f8(0x08)
};

// Class FSDEngine.SDFOnion
// Size: 0x70 (Inherited: 0x60)
struct USDFOnion : USDFBase {
	struct FSDFOnionProperties Properties; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct USDFBase* Argument; // 0x68(0x08)
};

// Class FSDEngine.SDFOnionComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFOnionComponent : USDFBaseComponent {
	struct FSDFOnionProperties Properties; // 0x1f8(0x04)
};

// Class FSDEngine.SDFRandomizeTransform
// Size: 0xc0 (Inherited: 0x70)
struct USDFRandomizeTransform : USDFSingleChildBase {
	struct FSDFRandomizeTransformProperties Properties; // 0x68(0x54)
};

// Class FSDEngine.SDFRandomizeTransformComponent
// Size: 0x250 (Inherited: 0x200)
struct USDFRandomizeTransformComponent : USDFBaseComponent {
	struct FSDFRandomizeTransformProperties Properties; // 0x1f8(0x54)
};

// Class FSDEngine.SDFRandomDisable
// Size: 0x70 (Inherited: 0x70)
struct USDFRandomDisable : USDFSingleChildBase {
	struct FSDFRandomDisableProperties Properties; // 0x68(0x04)
};

// Class FSDEngine.SDFRandomDisableComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFRandomDisableComponent : USDFBaseComponent {
	struct FSDFRandomDisableProperties Properties; // 0x1f8(0x04)
};

// Class FSDEngine.SDFBaseWithTransform
// Size: 0x130 (Inherited: 0x60)
struct USDFBaseWithTransform : USDFBase {
	char UnknownData_60[0xd0]; // 0x60(0xd0)
};

// Class FSDEngine.SDFBaseWithTransformComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFBaseWithTransformComponent : USDFBaseComponent {
};

// Class FSDEngine.SDFSphere
// Size: 0x140 (Inherited: 0x130)
struct USDFSphere : USDFBaseWithTransform {
	struct FSDFSphereProperties Properties; // 0x130(0x0c)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
};

// Class FSDEngine.SDFSphereComponent
// Size: 0x210 (Inherited: 0x200)
struct USDFSphereComponent : USDFBaseWithTransformComponent {
	struct FSDFSphereProperties Properties; // 0x1f8(0x0c)
	char UnknownData_20C[0x4]; // 0x20c(0x04)
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
	struct FSDFBoxProperties Properties; // 0x130(0x0c)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
};

// Class FSDEngine.SDFBoxComponent
// Size: 0x210 (Inherited: 0x200)
struct USDFBoxComponent : USDFBaseWithTransformComponent {
	struct FSDFBoxProperties Properties; // 0x1f8(0x0c)
	char UnknownData_20C[0x4]; // 0x20c(0x04)
};

// Class FSDEngine.SDFCylinder
// Size: 0x140 (Inherited: 0x130)
struct USDFCylinder : USDFBaseWithTransform {
	struct FSDFCylinderProperties Properties; // 0x130(0x08)
	char UnknownData_138[0x8]; // 0x138(0x08)
};

// Class FSDEngine.SDFCylinderComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFCylinderComponent : USDFBaseWithTransformComponent {
	struct FSDFCylinderProperties Properties; // 0x1f8(0x08)
};

// Class FSDEngine.SDFCapsule
// Size: 0x140 (Inherited: 0x130)
struct USDFCapsule : USDFBaseWithTransform {
	struct FSDFCapsuleProperties Properties; // 0x130(0x08)
	char UnknownData_138[0x8]; // 0x138(0x08)
};

// Class FSDEngine.SDFCapsuleComponent
// Size: 0x200 (Inherited: 0x200)
struct USDFCapsuleComponent : USDFBaseWithTransformComponent {
	struct FSDFCapsuleProperties Properties; // 0x1f8(0x08)
};

// Class FSDEngine.SDFTorus
// Size: 0x140 (Inherited: 0x130)
struct USDFTorus : USDFBaseWithTransform {
	struct FSDFTorusProperties Properties; // 0x130(0x10)
};

// Class FSDEngine.SDFTorusComponent
// Size: 0x210 (Inherited: 0x200)
struct USDFTorusComponent : USDFBaseWithTransformComponent {
	struct FSDFTorusProperties Properties; // 0x1f8(0x10)
};

// Class FSDEngine.StaticMeshCarver
// Size: 0xb8 (Inherited: 0x30)
struct UStaticMeshCarver : UDataAsset {
	struct FString Status; // 0x30(0x10)
	struct TSoftObjectPtr<struct UStaticMesh> Mesh; // 0x40(0x28)
	struct FBox AABB; // 0x68(0x1c)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct FDeepCSGFloatTree BSPTree; // 0x88(0x18)
	struct FDeepCSGFloatTreePacked BSPTreePacked; // 0xa0(0x18)

	void Generate(); // Function FSDEngine.StaticMeshCarver.Generate
	void ExportPreviewMesh(); // Function FSDEngine.StaticMeshCarver.ExportPreviewMesh
};

