// Class Landscape.ControlPointMeshActor
// Size: 0x228 (Inherited: 0x220)
struct AControlPointMeshActor : AActor {
	UControlPointMeshComponent* ControlPointMeshComponent; // 0x220(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x490 (Inherited: 0x480)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x480(0x04)
};

// Class Landscape.LandscapeProxy
// Size: 0x540 (Inherited: 0x220)
struct ALandscapeProxy : AActor {
	ULandscapeSplinesComponent* SplineComponent; // 0x220(0x08)
	FGuid LandscapeGuid; // 0x228(0x10)
	FIntPoint LandscapeSectionOffset; // 0x238(0x08)
	int32_t MaxLODLevel; // 0x240(0x04)
	float LODDistanceFactor; // 0x244(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x248(0x01)
	float ComponentScreenSizeToUseSubSections; // 0x24c(0x04)
	float LOD0ScreenSize; // 0x250(0x04)
	float LOD0DistributionSetting; // 0x254(0x04)
	float LODDistributionSetting; // 0x258(0x04)
	float TessellationComponentScreenSize; // 0x25c(0x04)
	bool UseTessellationComponentScreenSizeFalloff; // 0x260(0x01)
	float TessellationComponentScreenSizeFalloff; // 0x264(0x04)
	int32_t OccluderGeometryLOD; // 0x268(0x04)
	int32_t StaticLightingLOD; // 0x26c(0x04)
	UPhysicalMaterial* DefaultPhysMaterial; // 0x270(0x08)
	float StreamingDistanceMultiplier; // 0x278(0x04)
	UMaterialInterface* LandscapeMaterial; // 0x280(0x08)
	UMaterialInterface* LandscapeHoleMaterial; // 0x2a8(0x08)
	TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2b0(0x10)
	bool bMeshHoles; // 0x2c0(0x01)
	char MeshHolesMaxLod; // 0x2c1(0x01)
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2c8(0x10)
	int32_t VirtualTextureNumLods; // 0x2d8(0x04)
	int32_t VirtualTextureLodBias; // 0x2dc(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2e0(0x01)
	float NegativeZBoundsExtension; // 0x2e4(0x04)
	float PositiveZBoundsExtension; // 0x2e8(0x04)
	TArray<ULandscapeComponent*> LandscapeComponents; // 0x2f0(0x10)
	TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x300(0x10)
	TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x310(0x10)
	bool bHasLandscapeGrass; // 0x384(0x01)
	float StaticLightingResolution; // 0x388(0x04)
	char bCastStaticShadow : 1; // 0x38c(0x01)
	char bCastShadowAsTwoSided : 1; // 0x38c(0x01)
	char bCastFarShadow : 1; // 0x38c(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x390(0x01)
	FLightingChannels LightingChannels; // 0x391(0x01)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x394(0x01)
	char bRenderCustomDepth : 1; // 0x394(0x01)
	int32_t CustomDepthStencilValue; // 0x398(0x04)
	float LDMaxDrawDistance; // 0x39c(0x04)
	FLightmassPrimitiveSettings LightmassSettings; // 0x3a0(0x18)
	int32_t CollisionMipLevel; // 0x3b8(0x04)
	int32_t SimpleCollisionMipLevel; // 0x3bc(0x04)
	float CollisionThickness; // 0x3c0(0x04)
	FBodyInstance BodyInstance; // 0x3c8(0x110)
	char bGenerateOverlapEvents : 1; // 0x4d8(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x4d8(0x01)
	int32_t ComponentSizeQuads; // 0x4dc(0x04)
	int32_t SubsectionSizeQuads; // 0x4e0(0x04)
	int32_t NumSubsections; // 0x4e4(0x04)
	char bUsedForNavigation : 1; // 0x4e8(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x4e8(0x01)
	bool bUseDynamicMaterialInstance; // 0x4ec(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x4ed(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x4ee(0x01)
	bool bHasLayersContent; // 0x4ef(0x01)
	TMap<UTexture2D*, ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x4f0(0x50)

	void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);
	void SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture* Value);
	void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);
	void EditorSetLandscapeMaterial(UMaterialInterface* NewLandscapeMaterial);
	void EditorApplySpline(USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject* PaintLayer);
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
};

// Class Landscape.Landscape
// Size: 0x540 (Inherited: 0x540)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x220 (Inherited: 0x220)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate();
	UTextureRenderTarget2D* Render(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, FName InWeightmapLayerName);
	void Initialize(FTransform InLandscapeTransform, FIntPoint InLandscapeSize, FIntPoint InLandscapeRenderTargetSize);
	void GetBlueprintRenderDependencies(TArray<UTexture2D*> OutStreamableAssets);
};

// Class Landscape.LandscapeComponent
// Size: 0x5e0 (Inherited: 0x3f0)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x3f0(0x04)
	int32_t SectionBaseY; // 0x3f4(0x04)
	int32_t ComponentSizeQuads; // 0x3f8(0x04)
	int32_t SubsectionSizeQuads; // 0x3fc(0x04)
	int32_t NumSubsections; // 0x400(0x04)
	UMaterialInterface* OverrideMaterial; // 0x408(0x08)
	UMaterialInterface* OverrideHoleMaterial; // 0x410(0x08)
	TArray<FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x418(0x10)
	TArray<UMaterialInstanceConstant*> MaterialInstances; // 0x428(0x10)
	TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x438(0x10)
	TArray<int8_t> LODIndexToMaterialIndex; // 0x448(0x10)
	TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x458(0x10)
	UTexture2D* XYOffsetmapTexture; // 0x468(0x08)
	FVector4 WeightmapScaleBias; // 0x470(0x10)
	float WeightmapSubsectionOffset; // 0x480(0x04)
	FVector4 HeightmapScaleBias; // 0x490(0x10)
	FBox CachedLocalBox; // 0x4a0(0x1c)
	LazyObjectProperty CollisionComponent; // 0x4bc(0x1c)
	UTexture2D* HeightmapTexture; // 0x4d8(0x08)
	TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x4e0(0x10)
	TArray<UTexture2D*> WeightmapTextures; // 0x4f0(0x10)
	FGuid MapBuildDataId; // 0x500(0x10)
	TArray<FGuid> IrrelevantLights; // 0x510(0x10)
	int32_t CollisionMipLevel; // 0x520(0x04)
	int32_t SimpleCollisionMipLevel; // 0x524(0x04)
	float NegativeZBoundsExtension; // 0x528(0x04)
	float PositiveZBoundsExtension; // 0x52c(0x04)
	float StaticLightingResolution; // 0x530(0x04)
	int32_t ForcedLOD; // 0x534(0x04)
	int32_t LODBias; // 0x538(0x04)
	FGuid StateId; // 0x53c(0x10)
	FGuid BakedTextureMaterialGuid; // 0x54c(0x10)
	UTexture2D* GIBakedBaseColorTexture; // 0x560(0x08)
	char MobileBlendableLayerMask; // 0x568(0x01)
	UMaterialInterface* MobileMaterialInterface; // 0x570(0x08)
	TArray<UMaterialInterface*> MobileMaterialInterfaces; // 0x578(0x10)
	TArray<UTexture2D*> MobileWeightmapTextures; // 0x588(0x10)

	UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);
	float EditorGetPaintLayerWeightByNameAtLocation(FVector InLocation, FName InPaintLayerName);
	float EditorGetPaintLayerWeightAtLocation(FVector InLocation, ULandscapeLayerInfoObject* PaintLayer);
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x220 (Inherited: 0x220)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x270 (Inherited: 0x220)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x3f0 (Inherited: 0x3f0)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x60 (Inherited: 0x28)
struct ULandscapeGrassType : UObject {
	TArray<FGrassVariety> GrassVarieties; // 0x28(0x10)
	char bEnableDensityScaling : 1; // 0x38(0x01)
	UStaticMesh* GrassMesh; // 0x40(0x08)
	float GrassDensity; // 0x48(0x04)
	float PlacementJitter; // 0x4c(0x04)
	int32_t StartCullDistance; // 0x50(0x04)
	int32_t EndCullDistance; // 0x54(0x04)
	bool RandomRotation; // 0x58(0x01)
	bool AlignToSurface; // 0x59(0x01)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x4d0 (Inherited: 0x3f0)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x3f0(0x10)
	int32_t SectionBaseX; // 0x400(0x04)
	int32_t SectionBaseY; // 0x404(0x04)
	int32_t CollisionSizeQuads; // 0x408(0x04)
	float CollisionScale; // 0x40c(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x410(0x04)
	TArray<char> CollisionQuadFlags; // 0x418(0x10)
	FGuid HeightfieldGuid; // 0x428(0x10)
	FBox CachedLocalBox; // 0x438(0x1c)
	LazyObjectProperty RenderComponent; // 0x454(0x1c)
	TArray<UPhysicalMaterial*> CookedPhysicalMaterials; // 0x480(0x10)

	ULandscapeComponent* GetRenderComponent();
};

// Class Landscape.LandscapeInfo
// Size: 0x210 (Inherited: 0x28)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28(0x1c)
	FGuid LandscapeGuid; // 0x44(0x10)
	int32_t ComponentSizeQuads; // 0x54(0x04)
	int32_t SubsectionSizeQuads; // 0x58(0x04)
	int32_t ComponentNumSubsections; // 0x5c(0x04)
	FVector DrawScale; // 0x60(0x0c)
	TArray<ALandscapeStreamingProxy*> Proxies; // 0x110(0x10)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject {
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject {
	FName LayerName; // 0x28(0x08)
	UPhysicalMaterial* PhysMaterial; // 0x30(0x08)
	float Hardness; // 0x38(0x04)
	FLinearColor LayerUsageDebugColor; // 0x3c(0x10)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x428 (Inherited: 0x410)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x410(0x10)
	char bIsLayerThumbnail : 1; // 0x420(0x01)
	char bDisableTessellation : 1; // 0x420(0x01)
	char bMobile : 1; // 0x420(0x01)
	char bEditorToolUsage : 1; // 0x420(0x01)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x4f0 (Inherited: 0x4d0)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	FGuid MeshGuid; // 0x4d0(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x228 (Inherited: 0x220)
struct ALandscapeMeshProxyActor : AActor {
	ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x220(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x4b0 (Inherited: 0x480)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	FGuid LandscapeGuid; // 0x480(0x10)
	TArray<FIntPoint> ProxyComponentBases; // 0x490(0x10)
	int8_t ProxyLOD; // 0x4a0(0x01)
};

// Class Landscape.LandscapeSettings
// Size: 0x40 (Inherited: 0x38)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x420 (Inherited: 0x3f0)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x3f0(0x10)
	TArray<ULandscapeSplineSegment*> Segments; // 0x400(0x10)
	TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x410(0x10)

	TArray<USplineMeshComponent*> GetSplineMeshComponents();
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xa8 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject {
	FVector Location; // 0x28(0x0c)
	FRotator Rotation; // 0x34(0x0c)
	float Width; // 0x40(0x04)
	float LayerWidthRatio; // 0x44(0x04)
	float SideFalloff; // 0x48(0x04)
	float LeftSideFalloffFactor; // 0x4c(0x04)
	float RightSideFalloffFactor; // 0x50(0x04)
	float LeftSideLayerFalloffFactor; // 0x54(0x04)
	float RightSideLayerFalloffFactor; // 0x58(0x04)
	float EndFalloff; // 0x5c(0x04)
	TArray<FLandscapeSplineConnection> ConnectedSegments; // 0x60(0x10)
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	FBox Bounds; // 0x80(0x1c)
	UControlPointMeshComponent* LocalMeshComponent; // 0xa0(0x08)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb0 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject {
	FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28(0x30)
	FInterpCurveVector SplineInfo; // 0x58(0x18)
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	FBox Bounds; // 0x80(0x1c)
	TArray<USplineMeshComponent*> LocalMeshComponents; // 0xa0(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x560 (Inherited: 0x540)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x540(0x1c)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x98 (Inherited: 0x30)
struct ULandscapeSubsystem : UWorldSubsystem {
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightmapUsage : UObject {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x28(0x20)
	FGuid LayerGuid; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	TArray<FGrassInput> GrassTypes; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	TArray<FLayerBlendInput> Layers; // 0x40(0x10)
	FGuid ExpressionGUID; // 0x50(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0x40(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x41(0x01)
	float MappingScale; // 0x44(0x04)
	float MappingRotation; // 0x48(0x04)
	float MappingPanU; // 0x4c(0x04)
	float MappingPanV; // 0x50(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	FName ParameterName; // 0x40(0x08)
	float PreviewWeight; // 0x48(0x04)
	FGuid ExpressionGUID; // 0x4c(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	FExpressionInput LayerUsed; // 0x40(0x0c)
	FExpressionInput LayerNotUsed; // 0x54(0x0c)
	FName ParameterName; // 0x68(0x08)
	char PreviewUsed : 1; // 0x70(0x01)
	FGuid ExpressionGUID; // 0x74(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	FExpressionInput Base; // 0x40(0x0c)
	FExpressionInput Layer; // 0x54(0x0c)
	FName ParameterName; // 0x68(0x08)
	float PreviewWeight; // 0x70(0x04)
	FVector ConstBase; // 0x74(0x0c)
	FGuid ExpressionGUID; // 0x80(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	FGuid ExpressionGUID; // 0x40(0x10)
};

