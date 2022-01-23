#ifndef UE4SS_SDK_DatasmithContent_HPP
#define UE4SS_SDK_DatasmithContent_HPP

#include "DatasmithContent_enums.hpp"

class UDatasmithObjectTemplate : public UObject
{
};

class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
    TSet<FName> Layers;
    TSet<FName> Tags;
};

class UDatasmithAdditionalData : public UObject
{
};

class ADatasmithAreaLightActor : public AActor
{
    EDatasmithAreaLightActorType LightType;
    EDatasmithAreaLightActorShape LightShape;
    FVector2D Dimensions;
    float Intensity;
    ELightUnits IntensityUnits;
    FLinearColor Color;
    float Temperature;
    class UTextureLightProfile* IESTexture;
    bool bUseIESBrightness;
    float IESBrightnessScale;
    FRotator Rotation;
    float SourceRadius;
    float SourceLength;
    float AttenuationRadius;
    float SpotlightInnerAngle;
    float SpotlightOuterAngle;
};

class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
    EDatasmithAreaLightActorType LightType;
    EDatasmithAreaLightActorShape LightShape;
    FVector2D Dimensions;
    FLinearColor Color;
    float Intensity;
    ELightUnits IntensityUnits;
    float Temperature;
    TSoftObjectPtr<UTextureLightProfile> IESTexture;
    bool bUseIESBrightness;
    float IESBrightnessScale;
    FRotator Rotation;
    float SourceRadius;
    float SourceLength;
    float AttenuationRadius;
};

class UDatasmithAssetImportData : public UAssetImportData
{
};

class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
};

class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
};

class UDatasmithSceneImportData : public UAssetImportData
{
};

class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{
};

class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
};

class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
};

class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
    FString Generator;
    float Version;
    FString Author;
    FString License;
    FString Source;
};

class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
    FString SourceMeshName;
};

class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
    bool bGenerateLightmapUVs;
    FString TexturesDir;
    uint8 IntermediateSerialization;
    bool bColorizeMaterials;
};

class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
};

class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{
    bool bMergeNodes;
    bool bOptimizeDuplicatedNodes;
    bool bRemoveInvisibleNodes;
    bool bSimplifyNodeHierarchy;
    bool bImportVar;
    FString VarPath;
    bool bImportPos;
    FString PosPath;
    bool bImportTml;
    FString TmlPath;
};

class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
};

class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{
    bool bMergeNodes;
    bool bOptimizeDuplicatedNodes;
    bool bImportMats;
    FString MatsPath;
    bool bImportVar;
    bool bCleanVar;
    FString VarPath;
    bool bImportLightInfo;
    FString LightInfoPath;
    bool bImportClipInfo;
    FString ClipInfoPath;
};

class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{
};

class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{
    FString SourceGlobalId;
};

class UDatasmithAssetUserData : public UAssetUserData
{
    TMap<class FName, class FString> MetaData;
};

struct FDatasmithCameraLookatTrackingSettingsTemplate
{
    uint8 bEnableLookAtTracking;
    uint8 bAllowRoll;
    TSoftObjectPtr<AActor> ActorToTrack;
};

class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
    FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;
};

struct FDatasmithCameraFilmbackSettingsTemplate
{
    float SensorWidth;
    float SensorHeight;
};

struct FDatasmithCameraLensSettingsTemplate
{
    float MaxFStop;
};

struct FDatasmithCameraFocusSettingsTemplate
{
    ECameraFocusMethod FocusMethod;
    float ManualFocusDistance;
};

struct FDatasmithPostProcessSettingsTemplate
{
    uint8 bOverride_WhiteTemp;
    uint8 bOverride_ColorSaturation;
    uint8 bOverride_VignetteIntensity;
    uint8 bOverride_FilmWhitePoint;
    uint8 bOverride_AutoExposureMethod;
    uint8 bOverride_CameraISO;
    uint8 bOverride_CameraShutterSpeed;
    uint8 bOverride_DepthOfFieldFstop;
    float WhiteTemp;
    float VignetteIntensity;
    FLinearColor FilmWhitePoint;
    FVector4 ColorSaturation;
    TEnumAsByte<EAutoExposureMethod> AutoExposureMethod;
    float CameraISO;
    float CameraShutterSpeed;
    float DepthOfFieldFstop;
};

class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
    FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;
    FDatasmithCameraLensSettingsTemplate LensSettings;
    FDatasmithCameraFocusSettingsTemplate FocusSettings;
    float CurrentFocalLength;
    float CurrentAperture;
    FDatasmithPostProcessSettingsTemplate PostProcessSettings;
};

class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FString GetDatasmithUserDataValueForKey(class UObject* Object, FName Key);
    void GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, FString StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues);
    class UDatasmithAssetUserData* GetDatasmithUserData(class UObject* Object);
};

class UDatasmithCustomActionBase : public UObject
{
};

class ADatasmithImportedSequencesActor : public AActor
{
    TArray<class ULevelSequence*> ImportedSequences;

    void PlayLevelSequence(class ULevelSequence* SequenceToPlay);
};

class UDatasmithOptionsBase : public UObject
{
};

struct FDatasmithTessellationOptions
{
    float ChordTolerance;
    float MaxEdgeLength;
    float NormalTolerance;
    EDatasmithCADStitchingTechnique StitchingTechnique;
};

class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{
    FDatasmithTessellationOptions options;
};

struct FDatasmithAssetImportOptions
{
    FName PackagePath;
};

struct FDatasmithStaticMeshImportOptions
{
    EDatasmithImportLightmapMin MinLightmapResolution;
    EDatasmithImportLightmapMax MaxLightmapResolution;
    bool bGenerateLightmapUVs;
    bool bRemoveDegenerates;
};

struct FDatasmithImportBaseOptions
{
    EDatasmithImportScene SceneHandling;
    bool bIncludeGeometry;
    bool bIncludeMaterial;
    bool bIncludeLight;
    bool bIncludeCamera;
    bool bIncludeAnimation;
    FDatasmithAssetImportOptions AssetOptions;
    FDatasmithStaticMeshImportOptions StaticMeshOptions;
};

struct FDatasmithReimportOptions
{
    bool bUpdateActors;
    bool bRespawnDeletedActors;
};

class UDatasmithImportOptions : public UDatasmithOptionsBase
{
    EDatasmithImportSearchPackagePolicy SearchPackagePolicy;
    EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;
    EDatasmithImportAssetConflictPolicy TextureConflictPolicy;
    EDatasmithImportActorPolicy StaticMeshActorImportPolicy;
    EDatasmithImportActorPolicy LightImportPolicy;
    EDatasmithImportActorPolicy CameraImportPolicy;
    EDatasmithImportActorPolicy OtherActorImportPolicy;
    EDatasmithImportMaterialQuality MaterialQuality;
    FDatasmithImportBaseOptions BaseOptions;
    FDatasmithReimportOptions ReimportOptions;
    FString Filename;
    FString FilePath;
};

class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
    class UMaterialInterface* LandscapeMaterial;
    int32 StaticLightingLOD;
};

class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
    uint8 bVisible;
    uint8 CastShadows;
    uint8 bUseTemperature;
    uint8 bUseIESBrightness;
    float Intensity;
    float Temperature;
    float IESBrightnessScale;
    FLinearColor LightColor;
    class UMaterialInterface* LightFunctionMaterial;
    class UTextureLightProfile* IESTexture;
};

struct FDatasmithStaticParameterSetTemplate
{
    TMap<class FName, class bool> StaticSwitchParameters;
};

class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
    TSoftObjectPtr<UMaterialInterface> ParentMaterial;
    TMap<FName, float> ScalarParameterValues;
    TMap<class FName, class FLinearColor> VectorParameterValues;
    TMap<class FName, class TSoftObjectPtr<UTexture>> TextureParameterValues;
    FDatasmithStaticParameterSetTemplate StaticParameters;
};

class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
    ELightUnits IntensityUnits;
    float SourceRadius;
    float SourceLength;
    float AttenuationRadius;
};

class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
    FDatasmithPostProcessSettingsTemplate Settings;
    uint8 bEnabled;
    uint8 bUnbound;
};

class UDatasmithScene : public UObject
{
};

class ADatasmithSceneActor : public AActor
{
    class UDatasmithScene* Scene;
    TMap<class FName, class TSoftObjectPtr<AActor>> RelatedActors;
};

class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
    FTransform RelativeTransform;
    TEnumAsByte<EComponentMobility::Type> Mobility;
    TSoftObjectPtr<USceneComponent> AttachParent;
    TSet<FName> Tags;
};

class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
    TEnumAsByte<ESkyLightSourceType> SourceType;
    int32 CubemapResolution;
    class UTextureCube* Cubemap;
};

class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
    float InnerConeAngle;
    float OuterConeAngle;
};

class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
    class UStaticMesh* StaticMesh;
    TArray<class UMaterialInterface*> OverrideMaterials;
};

struct FDatasmithMeshSectionInfoTemplate
{
    int32 MaterialIndex;
};

struct FDatasmithMeshSectionInfoMapTemplate
{
    TMap<uint32, FDatasmithMeshSectionInfoTemplate> Map;
};

struct FDatasmithMeshBuildSettingsTemplate
{
    uint8 bUseMikkTSpace;
    uint8 bRecomputeNormals;
    uint8 bRecomputeTangents;
    uint8 bRemoveDegenerates;
    uint8 bBuildAdjacencyBuffer;
    uint8 bUseHighPrecisionTangentBasis;
    uint8 bUseFullPrecisionUVs;
    uint8 bGenerateLightmapUVs;
    int32 MinLightmapResolution;
    int32 SrcLightmapIndex;
    int32 DstLightmapIndex;
};

struct FDatasmithStaticMaterialTemplate
{
    FName MaterialSlotName;
    class UMaterialInterface* MaterialInterface;
};

class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
    FDatasmithMeshSectionInfoMapTemplate SectionInfoMap;
    int32 LightMapCoordinateIndex;
    int32 LightMapResolution;
    TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings;
    TArray<FDatasmithStaticMaterialTemplate> StaticMaterials;
};

#endif
