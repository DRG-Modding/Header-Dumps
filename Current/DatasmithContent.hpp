#ifndef UE4SS_SDK_DatasmithContent_HPP
#define UE4SS_SDK_DatasmithContent_HPP

#include "DatasmithContent_enums.hpp"

struct FDatasmithAssetImportOptions
{
    FName PackagePath;

};

struct FDatasmithCameraFilmbackSettingsTemplate
{
    float SensorWidth;
    float SensorHeight;

};

struct FDatasmithCameraFocusSettingsTemplate
{
    ECameraFocusMethod FocusMethod;
    float ManualFocusDistance;

};

struct FDatasmithCameraLensSettingsTemplate
{
    float MaxFStop;

};

struct FDatasmithCameraLookatTrackingSettingsTemplate
{
    uint8 bEnableLookAtTracking;
    uint8 bAllowRoll;
    TSoftObjectPtr<AActor> ActorToTrack;

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

struct FDatasmithMeshSectionInfoMapTemplate
{
    TMap<uint32, FDatasmithMeshSectionInfoTemplate> Map;

};

struct FDatasmithMeshSectionInfoTemplate
{
    int32 MaterialIndex;

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

struct FDatasmithReimportOptions
{
    bool bUpdateActors;
    bool bRespawnDeletedActors;

};

struct FDatasmithRetessellationOptions : public FDatasmithTessellationOptions
{
    EDatasmithCADRetessellationRule RetessellationRule;

};

struct FDatasmithStaticMaterialTemplate
{
    FName MaterialSlotName;
    class UMaterialInterface* MaterialInterface;

};

struct FDatasmithStaticMeshImportOptions
{
    EDatasmithImportLightmapMin MinLightmapResolution;
    EDatasmithImportLightmapMax MaxLightmapResolution;
    bool bGenerateLightmapUVs;
    bool bRemoveDegenerates;

};

struct FDatasmithStaticParameterSetTemplate
{
    TMap<class FName, class bool> StaticSwitchParameters;

};

struct FDatasmithTessellationOptions
{
    float ChordTolerance;
    float MaxEdgeLength;
    float NormalTolerance;
    EDatasmithCADStitchingTechnique StitchingTechnique;

};

class ADatasmithAreaLightActor : public AActor
{
    TEnumAsByte<EComponentMobility::Type> Mobility;
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

class ADatasmithImportedSequencesActor : public AActor
{
    TArray<class ULevelSequence*> ImportedSequences;

    void PlayLevelSequence(class ULevelSequence* SequenceToPlay);
};

class ADatasmithSceneActor : public AActor
{
    class UDatasmithScene* Scene;
    TMap<class FName, class TSoftObjectPtr<AActor>> RelatedActors;

};

class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
    TSet<FName> Layers;
    TSet<FName> Tags;

};

class UDatasmithAdditionalData : public UObject
{
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

class UDatasmithAssetUserData : public UAssetUserData
{
    TMap<class FName, class FString> MetaData;

};

class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
};

class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
    FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;

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

class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{
    FDatasmithTessellationOptions options;

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

class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{
    int32 SortOrder;
    FVector DecalSize;
    class UMaterialInterface* Material;

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

class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
    bool bGenerateLightmapUVs;
    FString TexturesDir;
    uint8 IntermediateSerialization;
    bool bColorizeMaterials;

};

class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
    FString Generator;
    float Version;
    FString Author;
    FString License;
    FString Source;

};

class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{
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

class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
};

class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
    TSoftObjectPtr<UMaterialInterface> ParentMaterial;
    TMap<FName, float> ScalarParameterValues;
    TMap<class FName, class FLinearColor> VectorParameterValues;
    TMap<class FName, class TSoftObjectPtr<UTexture>> TextureParameterValues;
    FDatasmithStaticParameterSetTemplate StaticParameters;

};

class UDatasmithObjectTemplate : public UObject
{
};

class UDatasmithOptionsBase : public UObject
{
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

class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
    FTransform RelativeTransform;
    TEnumAsByte<EComponentMobility::Type> Mobility;
    TSoftObjectPtr<USceneComponent> AttachParent;
    bool bVisible;
    TSet<FName> Tags;

};

class UDatasmithSceneImportData : public UAssetImportData
{
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

class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
};

class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
    class UStaticMesh* StaticMesh;
    TArray<class UMaterialInterface*> OverrideMaterials;

};

class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
    FString SourceMeshName;

};

class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{
    FString SourceGlobalId;

};

class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
};

class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
    FDatasmithMeshSectionInfoMapTemplate SectionInfoMap;
    int32 LightMapCoordinateIndex;
    int32 LightMapResolution;
    TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings;
    TArray<FDatasmithStaticMaterialTemplate> StaticMaterials;

};

class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{
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

#endif
