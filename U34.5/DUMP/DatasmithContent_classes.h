// Class DatasmithContent.DatasmithObjectTemplate
// Size: 0x30 (Inherited: 0x28)
struct UDatasmithObjectTemplate : UObject {
};

// Class DatasmithContent.DatasmithActorTemplate
// Size: 0xd0 (Inherited: 0x30)
struct UDatasmithActorTemplate : UDatasmithObjectTemplate {
	TSet<FName> Layers; // 0x30(0x50)
	TSet<FName> Tags; // 0x80(0x50)
};

// Class DatasmithContent.DatasmithAdditionalData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithAdditionalData : UObject {
};

// Class DatasmithContent.DatasmithAreaLightActor
// Size: 0x278 (Inherited: 0x220)
struct ADatasmithAreaLightActor : AActor {
	enum class EDatasmithAreaLightActorType LightType; // 0x220(0x01)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x221(0x01)
	FVector2D Dimensions; // 0x224(0x08)
	float Intensity; // 0x22c(0x04)
	enum class ELightUnits IntensityUnits; // 0x230(0x01)
	FLinearColor Color; // 0x234(0x10)
	float Temperature; // 0x244(0x04)
	UTextureLightProfile* IESTexture; // 0x248(0x08)
	bool bUseIESBrightness; // 0x250(0x01)
	float IESBrightnessScale; // 0x254(0x04)
	FRotator Rotation; // 0x258(0x0c)
	float SourceRadius; // 0x264(0x04)
	float SourceLength; // 0x268(0x04)
	float AttenuationRadius; // 0x26c(0x04)
	float SpotlightInnerAngle; // 0x270(0x04)
	float SpotlightOuterAngle; // 0x274(0x04)
};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
// Size: 0xa0 (Inherited: 0x30)
struct UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate {
	enum class EDatasmithAreaLightActorType LightType; // 0x30(0x01)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x31(0x01)
	FVector2D Dimensions; // 0x34(0x08)
	FLinearColor Color; // 0x3c(0x10)
	float Intensity; // 0x4c(0x04)
	enum class ELightUnits IntensityUnits; // 0x50(0x01)
	float Temperature; // 0x54(0x04)
	TSoftObjectPtr<UTextureLightProfile> IESTexture; // 0x58(0x28)
	bool bUseIESBrightness; // 0x80(0x01)
	float IESBrightnessScale; // 0x84(0x04)
	FRotator Rotation; // 0x88(0x0c)
	float SourceRadius; // 0x94(0x04)
	float SourceLength; // 0x98(0x04)
	float AttenuationRadius; // 0x9c(0x04)
};

// Class DatasmithContent.DatasmithAssetImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithAssetImportData : UAssetImportData {
};

// Class DatasmithContent.DatasmithStaticMeshImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithStaticMeshImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithStaticMeshCADImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithStaticMeshCADImportData : UDatasmithStaticMeshImportData {
};

// Class DatasmithContent.DatasmithSceneImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithSceneImportData : UAssetImportData {
};

// Class DatasmithContent.DatasmithTranslatedSceneImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithTranslatedSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithCADImportSceneData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithCADImportSceneData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithMDLSceneImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithMDLSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithGLTFSceneImportData
// Size: 0x70 (Inherited: 0x28)
struct UDatasmithGLTFSceneImportData : UDatasmithSceneImportData {
	FString Generator; // 0x28(0x10)
	float Version; // 0x38(0x04)
	FString Author; // 0x40(0x10)
	FString License; // 0x50(0x10)
	FString Source; // 0x60(0x10)
};

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// Size: 0x38 (Inherited: 0x28)
struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData {
	FString SourceMeshName; // 0x28(0x10)
};

// Class DatasmithContent.DatasmithFBXSceneImportData
// Size: 0x48 (Inherited: 0x28)
struct UDatasmithFBXSceneImportData : UDatasmithSceneImportData {
	bool bGenerateLightmapUVs; // 0x28(0x01)
	FString TexturesDir; // 0x30(0x10)
	char IntermediateSerialization; // 0x40(0x01)
	bool bColorizeMaterials; // 0x41(0x01)
};

// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithDeltaGenAssetImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// Size: 0x90 (Inherited: 0x48)
struct UDatasmithDeltaGenSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x48(0x01)
	bool bOptimizeDuplicatedNodes; // 0x49(0x01)
	bool bRemoveInvisibleNodes; // 0x4a(0x01)
	bool bSimplifyNodeHierarchy; // 0x4b(0x01)
	bool bImportVar; // 0x4c(0x01)
	FString VarPath; // 0x50(0x10)
	bool bImportPos; // 0x60(0x01)
	FString PosPath; // 0x68(0x10)
	bool bImportTml; // 0x78(0x01)
	FString TmlPath; // 0x80(0x10)
};

// Class DatasmithContent.DatasmithVREDAssetImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithVREDAssetImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithVREDSceneImportData
// Size: 0xa8 (Inherited: 0x48)
struct UDatasmithVREDSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x48(0x01)
	bool bOptimizeDuplicatedNodes; // 0x49(0x01)
	bool bImportMats; // 0x4a(0x01)
	FString MatsPath; // 0x50(0x10)
	bool bImportVar; // 0x60(0x01)
	bool bCleanVar; // 0x61(0x01)
	FString VarPath; // 0x68(0x10)
	bool bImportLightInfo; // 0x78(0x01)
	FString LightInfoPath; // 0x80(0x10)
	bool bImportClipInfo; // 0x90(0x01)
	FString ClipInfoPath; // 0x98(0x10)
};

// Class DatasmithContent.DatasmithIFCSceneImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithIFCSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// Size: 0x38 (Inherited: 0x28)
struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData {
	FString SourceGlobalId; // 0x28(0x10)
};

// Class DatasmithContent.DatasmithAssetUserData
// Size: 0x78 (Inherited: 0x28)
struct UDatasmithAssetUserData : UAssetUserData {
	TMap<FName, FString> MetaData; // 0x28(0x50)
};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
// Size: 0x60 (Inherited: 0x30)
struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate {
	FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30(0x30)
};

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// Size: 0x90 (Inherited: 0x30)
struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate {
	FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30(0x08)
	FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38(0x04)
	FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3c(0x08)
	float CurrentFocalLength; // 0x44(0x04)
	float CurrentAperture; // 0x48(0x04)
	FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50(0x40)
};

// Class DatasmithContent.DatasmithContentBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithContentBlueprintLibrary : UBlueprintFunctionLibrary {

	FString GetDatasmithUserDataValueForKey(UObject* Object, FName Key);
	void GetDatasmithUserDataKeysAndValuesForValue(UObject* Object, FString StringToMatch, TArray<FName> OutKeys, TArray<FString> OutValues);
	UDatasmithAssetUserData* GetDatasmithUserData(UObject* Object);
};

// Class DatasmithContent.DatasmithCustomActionBase
// Size: 0x30 (Inherited: 0x28)
struct UDatasmithCustomActionBase : UObject {
};

// Class DatasmithContent.DatasmithImportedSequencesActor
// Size: 0x230 (Inherited: 0x220)
struct ADatasmithImportedSequencesActor : AActor {
	TArray<ULevelSequence*> ImportedSequences; // 0x220(0x10)

	void PlayLevelSequence(ULevelSequence* SequenceToPlay);
};

// Class DatasmithContent.DatasmithOptionsBase
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithOptionsBase : UObject {
};

// Class DatasmithContent.DatasmithCommonTessellationOptions
// Size: 0x38 (Inherited: 0x28)
struct UDatasmithCommonTessellationOptions : UDatasmithOptionsBase {
	FDatasmithTessellationOptions options; // 0x28(0x10)
};

// Class DatasmithContent.DatasmithImportOptions
// Size: 0x78 (Inherited: 0x28)
struct UDatasmithImportOptions : UDatasmithOptionsBase {
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x28(0x01)
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x29(0x01)
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x2a(0x01)
	enum class EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x2b(0x01)
	enum class EDatasmithImportActorPolicy LightImportPolicy; // 0x2c(0x01)
	enum class EDatasmithImportActorPolicy CameraImportPolicy; // 0x2d(0x01)
	enum class EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x2e(0x01)
	enum class EDatasmithImportMaterialQuality MaterialQuality; // 0x2f(0x01)
	FDatasmithImportBaseOptions BaseOptions; // 0x34(0x14)
	FDatasmithReimportOptions ReimportOptions; // 0x48(0x02)
	FString Filename; // 0x50(0x10)
	FString FilePath; // 0x60(0x10)
};

// Class DatasmithContent.DatasmithLandscapeTemplate
// Size: 0x40 (Inherited: 0x30)
struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate {
	UMaterialInterface* LandscapeMaterial; // 0x30(0x08)
	int32_t StaticLightingLOD; // 0x38(0x04)
};

// Class DatasmithContent.DatasmithLightComponentTemplate
// Size: 0x68 (Inherited: 0x30)
struct UDatasmithLightComponentTemplate : UDatasmithObjectTemplate {
	char bVisible : 1; // 0x30(0x01)
	char CastShadows : 1; // 0x34(0x01)
	char bUseTemperature : 1; // 0x34(0x01)
	char bUseIESBrightness : 1; // 0x34(0x01)
	float Intensity; // 0x38(0x04)
	float Temperature; // 0x3c(0x04)
	float IESBrightnessScale; // 0x40(0x04)
	FLinearColor LightColor; // 0x44(0x10)
	UMaterialInterface* LightFunctionMaterial; // 0x58(0x08)
	UTextureLightProfile* IESTexture; // 0x60(0x08)
};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// Size: 0x198 (Inherited: 0x30)
struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate {
	TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x30(0x28)
	TMap<FName, float> ScalarParameterValues; // 0x58(0x50)
	TMap<FName, FLinearColor> VectorParameterValues; // 0xa8(0x50)
	TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues; // 0xf8(0x50)
	FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148(0x50)
};

// Class DatasmithContent.DatasmithPointLightComponentTemplate
// Size: 0x40 (Inherited: 0x30)
struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate {
	enum class ELightUnits IntensityUnits; // 0x30(0x01)
	float SourceRadius; // 0x34(0x04)
	float SourceLength; // 0x38(0x04)
	float AttenuationRadius; // 0x3c(0x04)
};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// Size: 0x80 (Inherited: 0x30)
struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate {
	FDatasmithPostProcessSettingsTemplate Settings; // 0x30(0x40)
	char bEnabled : 1; // 0x70(0x01)
	char bUnbound : 1; // 0x70(0x01)
};

// Class DatasmithContent.DatasmithScene
// Size: 0x30 (Inherited: 0x28)
struct UDatasmithScene : UObject {
};

// Class DatasmithContent.DatasmithSceneActor
// Size: 0x278 (Inherited: 0x220)
struct ADatasmithSceneActor : AActor {
	UDatasmithScene* Scene; // 0x220(0x08)
	TMap<FName, TSoftObjectPtr<AActor>> RelatedActors; // 0x228(0x50)
};

// Class DatasmithContent.DatasmithSceneComponentTemplate
// Size: 0xe0 (Inherited: 0x30)
struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate {
	FTransform RelativeTransform; // 0x30(0x30)
	enum class EComponentMobility Mobility; // 0x60(0x01)
	TSoftObjectPtr<USceneComponent> AttachParent; // 0x68(0x28)
	TSet<FName> Tags; // 0x90(0x50)
};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// Size: 0x40 (Inherited: 0x30)
struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate {
	enum class ESkyLightSourceType SourceType; // 0x30(0x01)
	int32_t CubemapResolution; // 0x34(0x04)
	UTextureCube* Cubemap; // 0x38(0x08)
};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// Size: 0x38 (Inherited: 0x30)
struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate {
	float InnerConeAngle; // 0x30(0x04)
	float OuterConeAngle; // 0x34(0x04)
};

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// Size: 0x48 (Inherited: 0x30)
struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate {
	UStaticMesh* StaticMesh; // 0x30(0x08)
	TArray<UMaterialInterface*> OverrideMaterials; // 0x38(0x10)
};

// Class DatasmithContent.DatasmithStaticMeshTemplate
// Size: 0xa8 (Inherited: 0x30)
struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate {
	FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30(0x50)
	int32_t LightMapCoordinateIndex; // 0x80(0x04)
	int32_t LightMapResolution; // 0x84(0x04)
	TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88(0x10)
	TArray<FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98(0x10)
};

