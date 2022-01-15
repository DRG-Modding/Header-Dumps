#ifndef UE4SS_SDK_DatasmithContent_HPP
#define UE4SS_SDK_DatasmithContent_HPP

#include "DatasmithContent_enums.hpp"

class UDatasmithObjectTemplate : UObject
{
}

class UDatasmithActorTemplate : UDatasmithObjectTemplate
{
    TSet<FName> Layers;
    TSet<FName> Tags;
}

class UDatasmithAdditionalData : UObject
{
}

class ADatasmithAreaLightActor : AActor
{
    EDatasmithAreaLightActorType LightType;
    EDatasmithAreaLightActorShape LightShape;
    FVector2D Dimensions;
    float Intensity;
    ELightUnits IntensityUnits;
    FLinearColor Color;
    float Temperature;
    UTextureLightProfile* IESTexture;
    bool bUseIESBrightness;
    float IESBrightnessScale;
    FRotator Rotation;
    float SourceRadius;
    float SourceLength;
    float AttenuationRadius;
    float SpotlightInnerAngle;
    float SpotlightOuterAngle;
}

class UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate
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
}

class UDatasmithAssetImportData : UAssetImportData
{
}

class UDatasmithStaticMeshImportData : UDatasmithAssetImportData
{
}

class UDatasmithStaticMeshCADImportData : UDatasmithStaticMeshImportData
{
}

class UDatasmithSceneImportData : UAssetImportData
{
}

class UDatasmithTranslatedSceneImportData : UDatasmithSceneImportData
{
}

class UDatasmithCADImportSceneData : UDatasmithSceneImportData
{
}

class UDatasmithMDLSceneImportData : UDatasmithSceneImportData
{
}

class UDatasmithGLTFSceneImportData : UDatasmithSceneImportData
{
    FString Generator;
    float Version;
    FString Author;
    FString License;
    FString Source;
}

class UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData
{
    FString SourceMeshName;
}

class UDatasmithFBXSceneImportData : UDatasmithSceneImportData
{
    bool bGenerateLightmapUVs;
    FString TexturesDir;
    uint8 IntermediateSerialization;
    bool bColorizeMaterials;
}

class UDatasmithDeltaGenAssetImportData : UDatasmithAssetImportData
{
}

class UDatasmithDeltaGenSceneImportData : UDatasmithFBXSceneImportData
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
}

class UDatasmithVREDAssetImportData : UDatasmithAssetImportData
{
}

class UDatasmithVREDSceneImportData : UDatasmithFBXSceneImportData
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
}

class UDatasmithIFCSceneImportData : UDatasmithSceneImportData
{
}

class UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData
{
    FString SourceGlobalId;
}

class UDatasmithAssetUserData : UAssetUserData
{
    TMap<FName, FString> MetaData;
}

class UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate
{
    FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;
}

class UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate
{
    FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;
    FDatasmithCameraLensSettingsTemplate LensSettings;
    FDatasmithCameraFocusSettingsTemplate FocusSettings;
    float CurrentFocalLength;
    float CurrentAperture;
    FDatasmithPostProcessSettingsTemplate PostProcessSettings;
}

class UDatasmithContentBlueprintLibrary : UBlueprintFunctionLibrary
{

    FString GetDatasmithUserDataValueForKey(UObject* Object, FName Key);
    void GetDatasmithUserDataKeysAndValuesForValue(UObject* Object, FString StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues);
    UDatasmithAssetUserData* GetDatasmithUserData(UObject* Object);
}

class UDatasmithCustomActionBase : UObject
{
}

class ADatasmithImportedSequencesActor : AActor
{
    TArray<ULevelSequence*> ImportedSequences;

    void PlayLevelSequence(ULevelSequence* SequenceToPlay);
}

class UDatasmithOptionsBase : UObject
{
}

class UDatasmithCommonTessellationOptions : UDatasmithOptionsBase
{
    FDatasmithTessellationOptions options;
}

class UDatasmithImportOptions : UDatasmithOptionsBase
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
}

class UDatasmithLandscapeTemplate : UDatasmithObjectTemplate
{
    UMaterialInterface* LandscapeMaterial;
    int32 StaticLightingLOD;
}

class UDatasmithLightComponentTemplate : UDatasmithObjectTemplate
{
    uint8 bVisible;
    uint8 CastShadows;
    uint8 bUseTemperature;
    uint8 bUseIESBrightness;
    float Intensity;
    float Temperature;
    float IESBrightnessScale;
    FLinearColor LightColor;
    UMaterialInterface* LightFunctionMaterial;
    UTextureLightProfile* IESTexture;
}

class UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate
{
    TSoftObjectPtr<UMaterialInterface> ParentMaterial;
    TMap<FName, float> ScalarParameterValues;
    TMap<FName, FLinearColor> VectorParameterValues;
    TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues;
    FDatasmithStaticParameterSetTemplate StaticParameters;
}

class UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate
{
    ELightUnits IntensityUnits;
    float SourceRadius;
    float SourceLength;
    float AttenuationRadius;
}

class UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate
{
    FDatasmithPostProcessSettingsTemplate Settings;
    uint8 bEnabled;
    uint8 bUnbound;
}

class UDatasmithScene : UObject
{
}

class ADatasmithSceneActor : AActor
{
    UDatasmithScene* Scene;
    TMap<FName, TSoftObjectPtr<AActor>> RelatedActors;
}

class UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate
{
    FTransform RelativeTransform;
    TEnumAsByte<EComponentMobility::Type> Mobility;
    TSoftObjectPtr<USceneComponent> AttachParent;
    TSet<FName> Tags;
}

class UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate
{
    TEnumAsByte<ESkyLightSourceType> SourceType;
    int32 CubemapResolution;
    UTextureCube* Cubemap;
}

class UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate
{
    float InnerConeAngle;
    float OuterConeAngle;
}

class UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate
{
    UStaticMesh* StaticMesh;
    TArray<UMaterialInterface*> OverrideMaterials;
}

class UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate
{
    FDatasmithMeshSectionInfoMapTemplate SectionInfoMap;
    int32 LightMapCoordinateIndex;
    int32 LightMapResolution;
    TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings;
    TArray<FDatasmithStaticMaterialTemplate> StaticMaterials;
}

struct UDatasmithCameraLookatTrackingSettingsTemplate
{
    uint8 bEnableLookAtTracking;
    uint8 bAllowRoll;
    TSoftObjectPtr<AActor> ActorToTrack;
}

struct UDatasmithPostProcessSettingsTemplate
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
}

struct UDatasmithCameraFocusSettingsTemplate
{
    ECameraFocusMethod FocusMethod;
    float ManualFocusDistance;
}

struct UDatasmithCameraLensSettingsTemplate
{
    float MaxFStop;
}

struct UDatasmithCameraFilmbackSettingsTemplate
{
    float SensorWidth;
    float SensorHeight;
}

struct UDatasmithTessellationOptions
{
    float ChordTolerance;
    float MaxEdgeLength;
    float NormalTolerance;
    EDatasmithCADStitchingTechnique StitchingTechnique;
}

struct UDatasmithImportBaseOptions
{
    EDatasmithImportScene SceneHandling;
    bool bIncludeGeometry;
    bool bIncludeMaterial;
    bool bIncludeLight;
    bool bIncludeCamera;
    bool bIncludeAnimation;
    FDatasmithAssetImportOptions AssetOptions;
    FDatasmithStaticMeshImportOptions StaticMeshOptions;
}

struct UDatasmithStaticMeshImportOptions
{
    EDatasmithImportLightmapMin MinLightmapResolution;
    EDatasmithImportLightmapMax MaxLightmapResolution;
    bool bGenerateLightmapUVs;
    bool bRemoveDegenerates;
}

struct UDatasmithAssetImportOptions
{
    FName PackagePath;
}

struct UDatasmithReimportOptions
{
    bool bUpdateActors;
    bool bRespawnDeletedActors;
}

struct UDatasmithStaticParameterSetTemplate
{
    TMap<FName, bool> StaticSwitchParameters;
}

struct UDatasmithMeshSectionInfoMapTemplate
{
    TMap<uint32, FDatasmithMeshSectionInfoTemplate> Map;
}

struct UDatasmithMeshSectionInfoTemplate
{
    int32 MaterialIndex;
}

struct UDatasmithStaticMaterialTemplate
{
    FName MaterialSlotName;
    UMaterialInterface* MaterialInterface;
}

struct UDatasmithMeshBuildSettingsTemplate
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
}

#endif
