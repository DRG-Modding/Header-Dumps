// Enum DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8_t {
	Point,
	Spot,
	Rect,
	EDatasmithAreaLightActorType_MAX,
};

// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8_t {
	Rectangle,
	Disc,
	Sphere,
	Cylinder,
	None,
	EDatasmithAreaLightActorShape_MAX,
};

// Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class EDatasmithCADStitchingTechnique : uint8_t {
	StitchingNone,
	StitchingHeal,
	StitchingSew,
	EDatasmithCADStitchingTechnique_MAX,
};

// Enum DatasmithContent.EDatasmithImportHierarchy
enum class EDatasmithImportHierarchy : uint8_t {
	UseMultipleActors,
	UseSingleActor,
	UseOneBlueprint,
	EDatasmithImportHierarchy_MAX,
};

// Enum DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8_t {
	NewLevel,
	CurrentLevel,
	AssetsOnly,
	EDatasmithImportScene_MAX,
};

// Enum DatasmithContent.EDatasmithImportLightmapMax
enum class EDatasmithImportLightmapMax : uint8_t {
	LIGHTMAP_65,
	LIGHTMAP_129,
	LIGHTMAP_257,
	LIGHTMAP_513,
	LIGHTMAP_1025,
	LIGHTMAP_2049,
	LIGHTMAP_4097,
	LIGHTMAP_MAX,
};

// Enum DatasmithContent.EDatasmithImportLightmapMin
enum class EDatasmithImportLightmapMin : uint8_t {
	LIGHTMAP_17,
	LIGHTMAP_33,
	LIGHTMAP_65,
	LIGHTMAP_129,
	LIGHTMAP_257,
	LIGHTMAP_513,
	LIGHTMAP_MAX,
};

// Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8_t {
	UseNoFresnelCurves,
	UseSimplifierFresnelCurves,
	UseRealFresnelCurves,
	EDatasmithImportMaterialQuality_MAX,
};

// Enum DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8_t {
	Update,
	Full,
	Ignore,
	EDatasmithImportActorPolicy_MAX,
};

// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8_t {
	Replace,
	Update,
	Use,
	Ignore,
	EDatasmithImportAssetConflictPolicy_MAX,
};

// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class EDatasmithImportSearchPackagePolicy : uint8_t {
	Current,
	All,
	EDatasmithImportSearchPackagePolicy_MAX,
};

// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
// Size: 0x30 (Inherited: 0x00)
struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x00(0x01)
	char bAllowRoll : 1; // 0x00(0x01)
	char UnknownData_0_2 : 6; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<struct AActor> ActorToTrack; // 0x08(0x28)
};

// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
// Size: 0x40 (Inherited: 0x00)
struct FDatasmithPostProcessSettingsTemplate {
	char bOverride_WhiteTemp : 1; // 0x00(0x01)
	char bOverride_ColorSaturation : 1; // 0x00(0x01)
	char bOverride_VignetteIntensity : 1; // 0x00(0x01)
	char bOverride_FilmWhitePoint : 1; // 0x00(0x01)
	char bOverride_AutoExposureMethod : 1; // 0x00(0x01)
	char bOverride_CameraISO : 1; // 0x00(0x01)
	char bOverride_CameraShutterSpeed : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	char bOverride_DepthOfFieldFstop : 1; // 0x04(0x01)
	char UnknownData_4_1 : 7; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	float WhiteTemp; // 0x08(0x04)
	float VignetteIntensity; // 0x0c(0x04)
	struct FLinearColor FilmWhitePoint; // 0x10(0x10)
	struct FVector4 ColorSaturation; // 0x20(0x10)
	char AutoExposureMethod; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float CameraISO; // 0x34(0x04)
	float CameraShutterSpeed; // 0x38(0x04)
	float DepthOfFieldFstop; // 0x3c(0x04)
};

// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
// Size: 0x08 (Inherited: 0x00)
struct FDatasmithCameraFocusSettingsTemplate {
	enum class ECameraFocusMethod FocusMethod; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float ManualFocusDistance; // 0x04(0x04)
};

// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
// Size: 0x04 (Inherited: 0x00)
struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x00(0x04)
};

// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
// Size: 0x08 (Inherited: 0x00)
struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x00(0x04)
	float SensorHeight; // 0x04(0x04)
};

// ScriptStruct DatasmithContent.DatasmithTessellationOptions
// Size: 0x10 (Inherited: 0x00)
struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x00(0x04)
	float MaxEdgeLength; // 0x04(0x04)
	float NormalTolerance; // 0x08(0x04)
	enum class EDatasmithCADStitchingTechnique StitchingTechnique; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
// Size: 0x14 (Inherited: 0x00)
struct FDatasmithImportBaseOptions {
	enum class EDatasmithImportScene SceneHandling; // 0x00(0x01)
	bool bIncludeGeometry; // 0x01(0x01)
	bool bIncludeMaterial; // 0x02(0x01)
	bool bIncludeLight; // 0x03(0x01)
	bool bIncludeCamera; // 0x04(0x01)
	bool bIncludeAnimation; // 0x05(0x01)
	char UnknownData_6[0x2]; // 0x06(0x02)
	struct FDatasmithAssetImportOptions AssetOptions; // 0x08(0x08)
	struct FDatasmithStaticMeshImportOptions StaticMeshOptions; // 0x10(0x04)
};

// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
// Size: 0x04 (Inherited: 0x00)
struct FDatasmithStaticMeshImportOptions {
	enum class EDatasmithImportLightmapMin MinLightmapResolution; // 0x00(0x01)
	enum class EDatasmithImportLightmapMax MaxLightmapResolution; // 0x01(0x01)
	bool bGenerateLightmapUVs; // 0x02(0x01)
	bool bRemoveDegenerates; // 0x03(0x01)
};

// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
// Size: 0x08 (Inherited: 0x00)
struct FDatasmithAssetImportOptions {
	struct FName PackagePath; // 0x00(0x08)
};

// ScriptStruct DatasmithContent.DatasmithReimportOptions
// Size: 0x02 (Inherited: 0x00)
struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x00(0x01)
	bool bRespawnDeletedActors; // 0x01(0x01)
};

// ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
// Size: 0x50 (Inherited: 0x00)
struct FDatasmithStaticParameterSetTemplate {
	struct TMap<struct FName, bool> StaticSwitchParameters; // 0x00(0x50)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
// Size: 0x50 (Inherited: 0x00)
struct FDatasmithMeshSectionInfoMapTemplate {
	struct TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> Map; // 0x00(0x50)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
// Size: 0x04 (Inherited: 0x00)
struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x00(0x04)
};

// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
// Size: 0x10 (Inherited: 0x00)
struct FDatasmithStaticMaterialTemplate {
	struct FName MaterialSlotName; // 0x00(0x08)
	struct UMaterialInterface* MaterialInterface; // 0x08(0x08)
};

// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
// Size: 0x10 (Inherited: 0x00)
struct FDatasmithMeshBuildSettingsTemplate {
	char bUseMikkTSpace : 1; // 0x00(0x01)
	char bRecomputeNormals : 1; // 0x00(0x01)
	char bRecomputeTangents : 1; // 0x00(0x01)
	char bRemoveDegenerates : 1; // 0x00(0x01)
	char bBuildAdjacencyBuffer : 1; // 0x00(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x00(0x01)
	char bUseFullPrecisionUVs : 1; // 0x00(0x01)
	char bGenerateLightmapUVs : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t MinLightmapResolution; // 0x04(0x04)
	int32_t SrcLightmapIndex; // 0x08(0x04)
	int32_t DstLightmapIndex; // 0x0c(0x04)
};

