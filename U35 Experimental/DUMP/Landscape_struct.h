// Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8 {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2
};

// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8 {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4
};

// Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8 {
	Clear_Weightmap = 1,
	Clear_Heightmap = 2,
	Clear_All = 3,
	Clear_MAX = 4
};

// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8 {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3
};

// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8 {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3
};

// Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4
};

// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8 {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2
};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8 {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8 {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4
};

// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8 {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2
};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8 {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2
};

// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8 {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3
};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8 {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5
};

// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8 {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4
};

// ScriptStruct Landscape.LandscapeLayer
// Size: 0x88 (Inherited: 0x00)
struct FLandscapeLayer {
	FGuid Guid; // 0x00(0x10)
	FName Name; // 0x10(0x08)
	bool bVisible; // 0x18(0x01)
	bool bLocked; // 0x19(0x01)
	float HeightmapAlpha; // 0x1c(0x04)
	float WeightmapAlpha; // 0x20(0x04)
	enum class ELandscapeBlendMode BlendMode; // 0x24(0x01)
	TArray<FLandscapeLayerBrush> Brushes; // 0x28(0x10)
	TMap<ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x38(0x50)
};

// ScriptStruct Landscape.LandscapeLayerBrush
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeLayerBrush {
};

// ScriptStruct Landscape.LandscapeLayerComponentData
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x00(0x08)
	FWeightmapData WeightmapData; // 0x08(0x30)
};

// ScriptStruct Landscape.WeightmapData
// Size: 0x30 (Inherited: 0x00)
struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x00(0x10)
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10(0x10)
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20(0x10)
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// Size: 0x10 (Inherited: 0x00)
struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x00(0x08)
	char WeightmapTextureIndex; // 0x08(0x01)
	char WeightmapTextureChannel; // 0x09(0x01)
};

// ScriptStruct Landscape.HeightmapData
// Size: 0x08 (Inherited: 0x00)
struct FHeightmapData {
	UTexture2D* Texture; // 0x00(0x08)
};

// ScriptStruct Landscape.LandscapeComponentMaterialOverride
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x00(0x04)
	UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Landscape.LandscapeEditToolRenderData
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeEditToolRenderData {
	UMaterialInterface* ToolMaterial; // 0x00(0x08)
	UMaterialInterface* GizmoMaterial; // 0x08(0x08)
	int32_t SelectedType; // 0x10(0x04)
	int32_t DebugChannelR; // 0x14(0x04)
	int32_t DebugChannelG; // 0x18(0x04)
	int32_t DebugChannelB; // 0x1c(0x04)
	UTexture2D* DataTexture; // 0x20(0x08)
	UTexture2D* LayerContributionTexture; // 0x28(0x08)
	UTexture2D* DirtyTexture; // 0x30(0x08)
};

// ScriptStruct Landscape.GizmoSelectData
// Size: 0x50 (Inherited: 0x00)
struct FGizmoSelectData {
};

// ScriptStruct Landscape.GrassVariety
// Size: 0x48 (Inherited: 0x00)
struct FGrassVariety {
	UStaticMesh* GrassMesh; // 0x00(0x08)
	FPerPlatformFloat GrassDensity; // 0x08(0x04)
	bool bUseGrid; // 0x0c(0x01)
	float PlacementJitter; // 0x10(0x04)
	FPerPlatformInt StartCullDistance; // 0x14(0x04)
	FPerPlatformInt EndCullDistance; // 0x18(0x04)
	int32_t MinLOD; // 0x1c(0x04)
	enum class EGrassScaling Scaling; // 0x20(0x01)
	FFloatInterval ScaleX; // 0x24(0x08)
	FFloatInterval ScaleY; // 0x2c(0x08)
	FFloatInterval ScaleZ; // 0x34(0x08)
	bool RandomRotation; // 0x3c(0x01)
	bool AlignToSurface; // 0x3d(0x01)
	bool bUseLandscapeLightmap; // 0x3e(0x01)
	FLightingChannels LightingChannels; // 0x3f(0x01)
	bool bReceivesDecals; // 0x40(0x01)
	bool bCastDynamicShadow; // 0x41(0x01)
	bool bKeepInstanceBufferCPUCopy; // 0x42(0x01)
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x00(0x08)
	FName LayerName; // 0x08(0x08)
};

// ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
// Size: 0x0c (Inherited: 0x00)
struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x00(0x08)
	float TexelFactor; // 0x08(0x04)
};

// ScriptStruct Landscape.LandscapeProxyMaterialOverride
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x00(0x04)
	UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeImportLayerInfo {
};

// ScriptStruct Landscape.LandscapeLayerStruct
// Size: 0x08 (Inherited: 0x00)
struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x00(0x08)
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeEditorLayerSettings {
};

// ScriptStruct Landscape.LandscapeSplineConnection
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x00(0x08)
	char End : 1; // 0x08(0x01)
};

// ScriptStruct Landscape.ForeignWorldSplineData
// Size: 0x01 (Inherited: 0x00)
struct FForeignWorldSplineData {
};

// ScriptStruct Landscape.ForeignSplineSegmentData
// Size: 0x01 (Inherited: 0x00)
struct FForeignSplineSegmentData {
};

// ScriptStruct Landscape.ForeignControlPointData
// Size: 0x01 (Inherited: 0x00)
struct FForeignControlPointData {
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeSplineMeshEntry {
	UStaticMesh* Mesh; // 0x00(0x08)
	TArray<UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	char bCenterH : 1; // 0x18(0x01)
	FVector2D CenterAdjust; // 0x1c(0x08)
	char bScaleToWidth : 1; // 0x24(0x01)
	FVector Scale; // 0x28(0x0c)
	enum class LandscapeSplineMeshOrientation Orientation; // 0x34(0x01)
	enum class ESplineMeshAxis ForwardAxis; // 0x35(0x01)
	enum class ESplineMeshAxis UpAxis; // 0x36(0x01)
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// Size: 0x18 (Inherited: 0x00)
struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x00(0x08)
	float TangentLen; // 0x08(0x04)
	FName SocketName; // 0x0c(0x08)
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// Size: 0x70 (Inherited: 0x00)
struct FLandscapeSplineInterpPoint {
	FVector Center; // 0x00(0x0c)
	FVector Left; // 0x0c(0x0c)
	FVector Right; // 0x18(0x0c)
	FVector FalloffLeft; // 0x24(0x0c)
	FVector FalloffRight; // 0x30(0x0c)
	FVector LayerLeft; // 0x3c(0x0c)
	FVector LayerRight; // 0x48(0x0c)
	FVector LayerFalloffLeft; // 0x54(0x0c)
	FVector LayerFalloffRight; // 0x60(0x0c)
	float StartEndFalloff; // 0x6c(0x04)
};

// ScriptStruct Landscape.GrassInput
// Size: 0x28 (Inherited: 0x00)
struct FGrassInput {
	FName Name; // 0x00(0x08)
	ULandscapeGrassType* GrassType; // 0x08(0x08)
	FExpressionInput Input; // 0x10(0x0c)
};

// ScriptStruct Landscape.LayerBlendInput
// Size: 0x48 (Inherited: 0x00)
struct FLayerBlendInput {
	FName LayerName; // 0x00(0x08)
	enum class ELandscapeLayerBlendType BlendType; // 0x08(0x01)
	FExpressionInput LayerInput; // 0x0c(0x0c)
	FExpressionInput HeightInput; // 0x20(0x0c)
	float PreviewWeight; // 0x34(0x04)
	FVector ConstLayerInput; // 0x38(0x0c)
	float ConstHeightInput; // 0x44(0x04)
};

