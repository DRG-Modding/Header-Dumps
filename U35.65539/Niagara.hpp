#ifndef UE4SS_SDK_Niagara_HPP
#define UE4SS_SDK_Niagara_HPP

#include "Niagara_enums.hpp"

class UMovieSceneNiagaraTrack : UMovieSceneNameableTrack
{
    TArray<UMovieSceneSection*> Sections;
}

class UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack
{
    FNiagaraVariable Parameter;
}

class UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack
{
}

class UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack
{
}

class UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack
{
}

class UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack
{
}

class UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection
{
    ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;
    ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;
    ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;
    ENiagaraAgeUpdateMode AgeUpdateMode;
}

class UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack
{
}

class UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack
{
    int32 ChannelsUsed;
}

class ANiagaraActor : AActor
{
    UNiagaraComponent* NiagaraComponent;
    uint8 bDestroyOnSystemFinish;

    void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
    void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);
}

class UNiagaraComponent : UFXSystemComponent
{
    UNiagaraSystem* Asset;
    ENiagaraTickBehavior TickBehavior;
    FNiagaraUserRedirectionParameterStore OverrideParameters;
    uint8 bForceSolo;
    uint8 bAutoDestroy;
    uint8 bRenderingEnabled;
    uint8 bAutoManageAttachment;
    uint8 bAutoAttachWeldSimulatedBodies;
    float MaxTimeBeforeForceUpdateTransform;
    FNiagaraComponentOnSystemFinished OnSystemFinished;
    void OnNiagaraSystemFinished(UNiagaraComponent* PSystem);
    TWeakObjectPtr<USceneComponent> AutoAttachParent;
    FName AutoAttachSocketName;
    EAttachmentRule AutoAttachLocationRule;
    EAttachmentRule AutoAttachRotationRule;
    EAttachmentRule AutoAttachScaleRule;

    void SetVariableVec4(FName InVariableName, const FVector4& InValue);
    void SetVariableVec3(FName InVariableName, FVector InValue);
    void SetVariableVec2(FName InVariableName, FVector2D InValue);
    void SetVariableQuat(FName InVariableName, const FQuat& InValue);
    void SetVariableObject(FName InVariableName, UObject* Object);
    void SetVariableMaterial(FName InVariableName, UMaterialInterface* Object);
    void SetVariableLinearColor(FName InVariableName, const FLinearColor& InValue);
    void SetVariableInt(FName InVariableName, int32 InValue);
    void SetVariableFloat(FName InVariableName, float InValue);
    void SetVariableBool(FName InVariableName, bool InValue);
    void SetVariableActor(FName InVariableName, AActor* Actor);
    void SetSeekDelta(float InSeekDelta);
    void SetRenderingEnabled(bool bInRenderingEnabled);
    void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
    void SetPaused(bool bInPaused);
    void SetNiagaraVariableVec4(FString InVariableName, const FVector4& InValue);
    void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);
    void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);
    void SetNiagaraVariableQuat(FString InVariableName, const FQuat& InValue);
    void SetNiagaraVariableObject(FString InVariableName, UObject* Object);
    void SetNiagaraVariableLinearColor(FString InVariableName, const FLinearColor& InValue);
    void SetNiagaraVariableInt(FString InVariableName, int32 InValue);
    void SetNiagaraVariableFloat(FString InVariableName, float InValue);
    void SetNiagaraVariableBool(FString InVariableName, bool InValue);
    void SetNiagaraVariableActor(FString InVariableName, AActor* Actor);
    void SetMaxSimTime(float InMaxTime);
    void SetForceSolo(bool bInForceSolo);
    void SetDesiredAge(float InDesiredAge);
    void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
    void SetAutoDestroy(bool bInAutoDestroy);
    void SetAsset(UNiagaraSystem* InAsset);
    void SetAllowScalability(bool bAllow);
    void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
    void SeekToDesiredAge(float InDesiredAge);
    void ResetSystem();
    void ReinitializeSystem();
    bool IsPaused();
    float GetSeekDelta();
    bool GetPreviewLODDistanceEnabled();
    int32 GetPreviewLODDistance();
    TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);
    TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);
    TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);
    float GetMaxSimTime();
    bool GetForceSolo();
    float GetDesiredAge();
    UNiagaraDataInterface* GetDataInterface(FString Name);
    UNiagaraSystem* GetAsset();
    ENiagaraAgeUpdateMode GetAgeUpdateMode();
    void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
    void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
}

class UNiagaraComponentPool : UObject
{
    TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools;
}

class UNiagaraConvertInPlaceUtilityBase : UObject
{
}

class UNiagaraDataInterface : UNiagaraDataInterfaceBase
{
}

class UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface
{
    USoundSubmix* Submix;
}

class UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface
{
    USoundSubmix* Submix;
    int32 Resolution;
    float ScopeInMilliseconds;
}

class UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix
{
    int32 Resolution;
    float MinimumFrequency;
    float MaximumFrequency;
    float NoiseFloorDb;
}

class UNiagaraDataInterfaceCamera : UNiagaraDataInterface
{
    int32 PlayerControllerIndex;
}

class UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface
{
}

class UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface
{
    TArray<float> ShaderLUT;
    float LUTMinTime;
    float LUTMaxTime;
    float LUTInvTimeRange;
    float LUTNumSamplesMinusOne;
    uint8 bUseLUT;
}

class UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase
{
    FRichCurve RedCurve;
    FRichCurve GreenCurve;
    FRichCurve BlueCurve;
    FRichCurve AlphaCurve;
}

class UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface
{
    uint32 Seed;
}

class UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase
{
    FRichCurve Curve;
}

class UNiagaraParticleCallbackHandler : UInterface
{

    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem);
}

class UNiagaraDataInterfaceExport : UNiagaraDataInterface
{
    FNiagaraUserParameterBinding CallbackHandlerParameter;
}

class UNiagaraDataInterfaceRWBase : UNiagaraDataInterface
{
    TSet<int32> OutputShaderStages;
    TSet<int32> IterationShaderStages;
}

class UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase
{
    int32 NumCellsX;
    int32 NumCellsY;
    int32 NumCellsMaxAxis;
    int32 NumAttributes;
    bool SetGridFromMaxAxis;
    FVector2D WorldBBoxSize;
}

class UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D
{

    void GetTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    void GetRawTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    bool FillTexture2D(const UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32 AttributeIndex);
    bool FillRawTexture2D(const UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32& TilesX, int32& TilesY);
}

class UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase
{
    FIntVector NumVoxels;
    float VoxelSize;
    bool SetGridFromVoxelSize;
    FVector WorldBBoxSize;
}

class UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D
{
    uint32 MaxNeighborsPerVoxel;
}

class UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface
{
}

class UNiagaraDataInterfaceParticleRead : UNiagaraDataInterface
{
    FString EmitterName;
}

class UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface
{
}

class UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface
{
    AActor* Source;
    FNiagaraUserParameterBinding MeshUserParameter;
    USkeletalMeshComponent* SourceComponent;
    ENDISkeletalMesh_SkinningMode SkinningMode;
    TArray<FName> SamplingRegions;
    int32 WholeMeshLOD;
    TArray<FName> FilteredBones;
    TArray<FName> FilteredSockets;
    FName ExcludeBoneName;
    uint8 bExcludeBone;
}

class UNiagaraDataInterfaceSpline : UNiagaraDataInterface
{
    AActor* Source;
}

class UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface
{
    UStaticMesh* DefaultMesh;
    AActor* Source;
    UStaticMeshComponent* SourceComponent;
    FNDIStaticMeshSectionFilter SectionFilter;
}

class UNiagaraDataInterfaceTexture : UNiagaraDataInterface
{
    UTexture* Texture;
}

class UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;
    FRichCurve YCurve;
}

class UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;
    FRichCurve YCurve;
    FRichCurve ZCurve;
    FRichCurve WCurve;
}

class UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;
    FRichCurve YCurve;
    FRichCurve ZCurve;
}

class UNiagaraDataInterfaceVectorField : UNiagaraDataInterface
{
    UVectorField* Field;
    bool bTileX;
    bool bTileY;
    bool bTileZ;
}

class UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface
{
    UVolumeTexture* Texture;
}

class UNiagaraEditorDataBase : UObject
{
}

class UNiagaraEffectType : UObject
{
    ENiagaraScalabilityUpdateFrequency UpdateFrequency;
    ENiagaraCullReaction CullReaction;
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;
}

class UNiagaraEmitter : UObject
{
    bool bLocalSpace;
    bool bDeterminism;
    int32 RandomSeed;
    EParticleAllocationMode AllocationMode;
    int32 PreAllocationCount;
    FNiagaraEmitterScriptProperties UpdateScriptProps;
    FNiagaraEmitterScriptProperties SpawnScriptProps;
    FNiagaraEmitterScriptProperties EmitterSpawnScriptProps;
    FNiagaraEmitterScriptProperties EmitterUpdateScriptProps;
    ENiagaraSimTarget SimTarget;
    FBox FixedBounds;
    int32 MinDetailLevel;
    int32 MaxDetailLevel;
    FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides;
    FNiagaraPlatformSet Platforms;
    FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;
    uint8 bInterpolatedSpawning;
    uint8 bFixedBounds;
    uint8 bUseMinDetailLevel;
    uint8 bUseMaxDetailLevel;
    uint8 bOverrideGlobalSpawnCountScale;
    uint8 bRequiresPersistentIDs;
    float MaxDeltaTimePerTick;
    uint32 DefaultShaderStageIndex;
    uint32 MaxUpdateIterations;
    TSet<uint32> SpawnStages;
    uint8 bSimulationStagesEnabled;
    uint8 bDeprecatedShaderStagesEnabled;
    uint8 bLimitDeltaTime;
    FString UniqueEmitterName;
    TArray<UNiagaraRendererProperties*> RendererProperties;
    TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps;
    TArray<UNiagaraSimulationStageBase*> SimulationStages;
    UNiagaraScript* GPUComputeScript;
    TArray<FName> SharedEventGeneratorIds;
}

class UNiagaraEventReceiverEmitterAction : UObject
{
}

class UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction
{
    uint32 NumParticles;
}

class UNiagaraFunctionLibrary : UBlueprintFunctionLibrary
{

    UNiagaraComponent* SpawnSystemAttached(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, uint8 LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    UNiagaraComponent* SpawnSystemAtLocation(const UObject* WorldContextObject, UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    void SetVolumeTextureObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UVolumeTexture* Texture);
    void SetTextureObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UTexture* Texture);
    void OverrideSystemUserVariableStaticMeshComponent(UNiagaraComponent* NiagaraSystem, FString OverrideName, UStaticMeshComponent* StaticMeshComponent);
    void OverrideSystemUserVariableStaticMesh(UNiagaraComponent* NiagaraSystem, FString OverrideName, UStaticMesh* StaticMesh);
    void OverrideSystemUserVariableSkeletalMeshComponent(UNiagaraComponent* NiagaraSystem, FString OverrideName, USkeletalMeshComponent* SkeletalMeshComponent);
    UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(UObject* WorldContextObject, UNiagaraParameterCollection* Collection);
}

class UNiagaraRendererProperties : UNiagaraMergeable
{
    int32 SortOrderHint;
    bool bIsEnabled;
    bool bMotionBlurEnabled;
}

class UNiagaraLightRendererProperties : UNiagaraRendererProperties
{
    uint8 bUseInverseSquaredFalloff;
    uint8 bAffectsTranslucency;
    uint8 bOverrideRenderingEnabled;
    float RadiusScale;
    FVector ColorAdd;
    FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;
    FNiagaraVariableAttributeBinding LightExponentBinding;
    FNiagaraVariableAttributeBinding PositionBinding;
    FNiagaraVariableAttributeBinding ColorBinding;
    FNiagaraVariableAttributeBinding RadiusBinding;
    FNiagaraVariableAttributeBinding VolumetricScatteringBinding;
}

class UNiagaraMeshRendererProperties : UNiagaraRendererProperties
{
    UStaticMesh* ParticleMesh;
    ENiagaraSortMode SortMode;
    uint8 bOverrideMaterials;
    uint8 bSortOnlyWhenTranslucent;
    TArray<FNiagaraMeshMaterialOverride> OverrideMaterials;
    FVector2D SubImageSize;
    uint8 bSubImageBlend;
    ENiagaraMeshFacingMode FacingMode;
    uint8 bLockedAxisEnable;
    FVector LockedAxis;
    ENiagaraMeshLockedAxisSpace LockedAxisSpace;
    FNiagaraVariableAttributeBinding PositionBinding;
    FNiagaraVariableAttributeBinding ColorBinding;
    FNiagaraVariableAttributeBinding VelocityBinding;
    FNiagaraVariableAttributeBinding MeshOrientationBinding;
    FNiagaraVariableAttributeBinding ScaleBinding;
    FNiagaraVariableAttributeBinding SubImageIndexBinding;
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    FNiagaraVariableAttributeBinding CustomSortingBinding;
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
    FNiagaraVariableAttributeBinding CameraOffsetBinding;
}

class UNiagaraParameterCollectionInstance : UObject
{
    UNiagaraParameterCollection* Collection;
    TArray<FNiagaraVariable> OverridenParameters;
    FNiagaraParameterStore ParameterStorage;

    void SetVectorParameter(FString InVariableName, FVector InValue);
    void SetVector4Parameter(FString InVariableName, const FVector4& InValue);
    void SetVector2DParameter(FString InVariableName, FVector2D InValue);
    void SetQuatParameter(FString InVariableName, const FQuat& InValue);
    void SetIntParameter(FString InVariableName, int32 InValue);
    void SetFloatParameter(FString InVariableName, float InValue);
    void SetColorParameter(FString InVariableName, FLinearColor InValue);
    void SetBoolParameter(FString InVariableName, bool InValue);
    FVector GetVectorParameter(FString InVariableName);
    FVector4 GetVector4Parameter(FString InVariableName);
    FVector2D GetVector2DParameter(FString InVariableName);
    FQuat GetQuatParameter(FString InVariableName);
    int32 GetIntParameter(FString InVariableName);
    float GetFloatParameter(FString InVariableName);
    FLinearColor GetColorParameter(FString InVariableName);
    bool GetBoolParameter(FString InVariableName);
}

class UNiagaraParameterCollection : UObject
{
    FName Namespace;
    TArray<FNiagaraVariable> Parameters;
    UNiagaraParameterCollectionInstance* DefaultInstance;
    FGuid CompileId;
}

class UNiagaraPrecompileContainer : UObject
{
    TArray<UNiagaraScript*> Scripts;
    UNiagaraSystem* System;
}

class ANiagaraPreviewBase : AActor
{

    void SetSystem(UNiagaraSystem* InSystem);
    void SetLabelText(const FText& InXAxisText, const FText& InYAxisText);
}

class UNiagaraPreviewAxis : UObject
{

    int32 Num();
    void ApplyToPreview(UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, FString& OutLabelText);
}

class UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis
{
    FName Param;
    int32 count;
}

class UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase
{
    int32 Min;
    int32 Max;
}

class UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase
{
    float Min;
    float Max;
}

class UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase
{
    FVector2D Min;
    FVector2D Max;
}

class UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase
{
    FVector Min;
    FVector Max;
}

class UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase
{
    FVector4 Min;
    FVector4 Max;
}

class UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase
{
    FLinearColor Min;
    FLinearColor Max;
}

class ANiagaraPreviewGrid : AActor
{
    UNiagaraSystem* System;
    ENiagaraPreviewGridResetMode ResetMode;
    UNiagaraPreviewAxis* PreviewAxisX;
    UNiagaraPreviewAxis* PreviewAxisY;
    TSubclassOf<ANiagaraPreviewBase> PreviewClass;
    float SpacingX;
    float SpacingY;
    int32 NumX;
    int32 NumY;
    TArray<UChildActorComponent*> PreviewComponents;

    void SetPaused(bool bPaused);
    void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);
    void DeactivatePreviews();
    void ActivatePreviews(bool bReset);
}

class UNiagaraRibbonRendererProperties : UNiagaraRendererProperties
{
    UMaterialInterface* Material;
    FNiagaraUserParameterBinding MaterialUserParamBinding;
    ENiagaraRibbonFacingMode FacingMode;
    float UV0TilingDistance;
    FVector2D UV0Scale;
    FVector2D UV0Offset;
    ENiagaraRibbonAgeOffsetMode UV0AgeOffsetMode;
    float UV1TilingDistance;
    FVector2D UV1Scale;
    FVector2D UV1Offset;
    ENiagaraRibbonAgeOffsetMode UV1AgeOffsetMode;
    ENiagaraRibbonDrawDirection DrawDirection;
    float CurveTension;
    ENiagaraRibbonTessellationMode TessellationMode;
    int32 TessellationFactor;
    bool bUseConstantFactor;
    float TessellationAngle;
    bool bScreenSpaceTessellation;
    FNiagaraVariableAttributeBinding PositionBinding;
    FNiagaraVariableAttributeBinding ColorBinding;
    FNiagaraVariableAttributeBinding VelocityBinding;
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
    FNiagaraVariableAttributeBinding RibbonTwistBinding;
    FNiagaraVariableAttributeBinding RibbonWidthBinding;
    FNiagaraVariableAttributeBinding RibbonFacingBinding;
    FNiagaraVariableAttributeBinding RibbonIdBinding;
    FNiagaraVariableAttributeBinding RibbonLinkOrderBinding;
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;
}

class UNiagaraScript : UObject
{
    ENiagaraScriptUsage Usage;
    int32 UsageIndex;
    FGuid UsageId;
    FNiagaraParameterStore RapidIterationParameters;
    FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;
    TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters;
    FNiagaraVMExecutableDataId CachedScriptVMId;
    FNiagaraVMExecutableData CachedScriptVM;
    TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences;
    TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;

    void RaiseOnGPUCompilationComplete();
}

class UNiagaraScriptSourceBase : UObject
{
}

class UNiagaraSettings : UDeveloperSettings
{
    TArray<FSoftObjectPath> AdditionalParameterTypes;
    TArray<FSoftObjectPath> AdditionalPayloadTypes;
    TArray<FSoftObjectPath> AdditionalParameterEnums;
    FSoftObjectPath DefaultEffectType;
    TArray<FText> QualityLevels;
    UNiagaraEffectType* DefaultEffectTypePtr;
}

class UNiagaraSimulationStageBase : UNiagaraMergeable
{
    UNiagaraScript* Script;
    FName SimulationStageName;
}

class UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase
{
    ENiagaraIterationSource IterationSource;
    int32 Iterations;
    uint8 bSpawnOnly;
    FNiagaraVariableDataInterfaceBinding DataInterface;
}

class UNiagaraSpriteRendererProperties : UNiagaraRendererProperties
{
    UMaterialInterface* Material;
    FNiagaraUserParameterBinding MaterialUserParamBinding;
    ENiagaraSpriteAlignment Alignment;
    ENiagaraSpriteFacingMode FacingMode;
    FVector2D PivotInUVSpace;
    ENiagaraSortMode SortMode;
    FVector2D SubImageSize;
    uint8 bSubImageBlend;
    uint8 bRemoveHMDRollInVR;
    uint8 bSortOnlyWhenTranslucent;
    float MinFacingCameraBlendDistance;
    float MaxFacingCameraBlendDistance;
    FNiagaraVariableAttributeBinding PositionBinding;
    FNiagaraVariableAttributeBinding ColorBinding;
    FNiagaraVariableAttributeBinding VelocityBinding;
    FNiagaraVariableAttributeBinding SpriteRotationBinding;
    FNiagaraVariableAttributeBinding SpriteSizeBinding;
    FNiagaraVariableAttributeBinding SpriteFacingBinding;
    FNiagaraVariableAttributeBinding SpriteAlignmentBinding;
    FNiagaraVariableAttributeBinding SubImageIndexBinding;
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;
    FNiagaraVariableAttributeBinding CameraOffsetBinding;
    FNiagaraVariableAttributeBinding UVScaleBinding;
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    FNiagaraVariableAttributeBinding CustomSortingBinding;
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
}

class UNiagaraSystem : UFXSystemAsset
{
    bool bDumpDebugSystemInfo;
    bool bDumpDebugEmitterInfo;
    uint8 bFixedBounds;
    UNiagaraEffectType* EffectType;
    bool bOverrideScalabilitySettings;
    TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides;
    FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides;
    TArray<FNiagaraEmitterHandle> EmitterHandles;
    TArray<UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;
    UNiagaraScript* SystemSpawnScript;
    UNiagaraScript* SystemUpdateScript;
    FNiagaraSystemCompiledData SystemCompiledData;
    FNiagaraUserRedirectionParameterStore ExposedParameters;
    FBox FixedBounds;
    bool bAutoDeactivate;
    float WarmupTime;
    int32 WarmupTickCount;
    float WarmupTickDelta;
    bool bHasSystemScriptDIsWithPerInstanceData;
    TArray<FName> UserDINamesReadInSystemScripts;
}

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
{
    FNiagaraVariable Parameter;
}

struct FNiagaraVariableBase
{
    FName Name;
    FNiagaraTypeDefinition TypeDef;
}

struct FNiagaraTypeDefinition
{
    UObject* ClassStructOrEnum;
    uint16 UnderlyingType;
}

struct FNiagaraVariable : FNiagaraVariableBase
{
    TArray<uint8> VarData;
}

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneBoolChannel BoolChannel;
}

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel RedChannel;
    FMovieSceneFloatChannel GreenChannel;
    FMovieSceneFloatChannel BlueChannel;
    FMovieSceneFloatChannel AlphaChannel;
}

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel FloatChannel;
}

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneIntegerChannel IntegerChannel;
}

struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{
    FFrameNumber SpawnSectionStartFrame;
    FFrameNumber SpawnSectionEndFrame;
    ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;
    ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;
    ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;
    ENiagaraAgeUpdateMode AgeUpdateMode;
}

struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
{
}

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel VectorChannels;
    int32 ChannelsUsed;
}

struct FNiagaraRandInfo
{
    int32 Seed1;
    int32 Seed2;
    int32 Seed3;
}

struct FNiagaraUserParameterBinding
{
    FNiagaraVariable Parameter;
}

struct FNiagaraScriptVariableBinding
{
    FName Name;
}

struct FNiagaraVariableDataInterfaceBinding
{
    FNiagaraVariable BoundVariable;
}

struct FNiagaraVariableAttributeBinding
{
    FNiagaraVariable BoundVariable;
    FNiagaraVariable DataSetVariable;
    FNiagaraVariable DefaultValueIfNonExistent;
}

struct FNiagaraVariableInfo
{
    FNiagaraVariable Variable;
    FText Definition;
    UNiagaraDataInterface* DataInterface;
}

struct FNiagaraSystemUpdateContext
{
    TArray<UNiagaraComponent*> ComponentsToReset;
    TArray<UNiagaraComponent*> ComponentsToReInit;
    TArray<UNiagaraSystem*> SystemSimsToDestroy;
}

struct FVMExternalFunctionBindingInfo
{
    FName Name;
    FName OwnerName;
    TArray<bool> InputParamLocations;
    int32 NumOutputs;
    TArray<FVMFunctionSpecifier> FunctionSpecifiers;
}

struct FVMFunctionSpecifier
{
    FName Key;
    FName Value;
}

struct FNiagaraStatScope
{
    FName FullName;
    FName FriendlyName;
}

struct FNiagaraScriptDataInterfaceCompileInfo
{
    FName Name;
    int32 UserPtrIdx;
    FNiagaraTypeDefinition Type;
    FName RegisteredParameterMapRead;
    FName RegisteredParameterMapWrite;
    bool bIsPlaceholder;
}

struct FNiagaraScriptDataInterfaceInfo
{
    UNiagaraDataInterface* DataInterface;
    FName Name;
    int32 UserPtrIdx;
    FNiagaraTypeDefinition Type;
    FName RegisteredParameterMapRead;
    FName RegisteredParameterMapWrite;
}

struct FNiagaraFunctionSignature
{
    FName Name;
    TArray<FNiagaraVariable> Inputs;
    TArray<FNiagaraVariable> Outputs;
    FName OwnerName;
    uint8 bRequiresContext;
    uint8 bMemberFunction;
    uint8 bExperimental;
    uint8 bSupportsCPU;
    uint8 bSupportsGPU;
    uint8 bWriteFunction;
    TMap<FName, FName> FunctionSpecifiers;
}

struct FNiagaraScriptDataUsageInfo
{
    bool bReadsAttributeData;
}

struct FNiagaraDataSetProperties
{
    FNiagaraDataSetID ID;
    TArray<FNiagaraVariable> Variables;
}

struct FNiagaraDataSetID
{
    FName Name;
    ENiagaraDataSetType Type;
}

struct FNCPool
{
    TArray<FNCPoolElement> FreeElements;
    TArray<UNiagaraComponent*> InUseComponents_Auto;
    TArray<UNiagaraComponent*> InUseComponents_Manual;
}

struct FNCPoolElement
{
    UNiagaraComponent* Component;
}

struct FBasicParticleData
{
    FVector Position;
    float Size;
    FVector Velocity;
}

struct FMeshTriCoordinate
{
    int32 Tri;
    FVector BaryCoord;
}

struct FNDIStaticMeshSectionFilter
{
    TArray<int32> AllowedMaterialSlots;
}

struct FNiagaraDataSetCompiledData
{
    TArray<FNiagaraVariable> Variables;
    TArray<FNiagaraVariableLayoutInfo> VariableLayouts;
    uint32 TotalFloatComponents;
    uint32 TotalInt32Components;
    uint8 bRequiresPersistentIDs;
    FNiagaraDataSetID ID;
    ENiagaraSimTarget SimTarget;
}

struct FNiagaraVariableLayoutInfo
{
    uint32 FloatComponentStart;
    uint32 Int32ComponentStart;
    FNiagaraTypeLayoutInfo LayoutInfo;
}

struct FNiagaraTypeLayoutInfo
{
    TArray<uint32> FloatComponentByteOffsets;
    TArray<uint32> FloatComponentRegisterOffsets;
    TArray<uint32> Int32ComponentByteOffsets;
    TArray<uint32> Int32ComponentRegisterOffsets;
}

struct FNiagaraGraphViewSettings
{
    FVector2D Location;
    float Zoom;
    bool bIsValid;
}

struct FNiagaraEmitterScalabilityOverrides
{
    TArray<FNiagaraEmitterScalabilityOverride> Overrides;
}

struct FNiagaraEmitterScalabilitySettings
{
    FNiagaraPlatformSet Platforms;
    uint8 bScaleSpawnCount;
    float SpawnCountScale;
}

struct FNiagaraPlatformSet
{
    int32 QualityLevelMask;
    TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates;
}

struct FNiagaraDeviceProfileStateEntry
{
    FName ProfileName;
    uint32 QualityLevelMask;
    uint32 SetQualityLevelMask;
}

struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
{
    uint8 bOverrideSpawnCountScale;
}

struct FNiagaraEmitterScalabilitySettingsArray
{
    TArray<FNiagaraEmitterScalabilitySettings> Settings;
}

struct FNiagaraSystemScalabilityOverrides
{
    TArray<FNiagaraSystemScalabilityOverride> Overrides;
}

struct FNiagaraSystemScalabilitySettings
{
    FNiagaraPlatformSet Platforms;
    uint8 bCullByDistance;
    uint8 bCullMaxInstanceCount;
    uint8 bCullByMaxTimeWithoutRender;
    float MaxDistance;
    float MaxInstances;
    float MaxTimeWithoutRender;
}

struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{
    uint8 bOverrideDistanceSettings;
    uint8 bOverrideInstanceCountSettings;
    uint8 bOverrideTimeSinceRendererSettings;
}

struct FNiagaraSystemScalabilitySettingsArray
{
    TArray<FNiagaraSystemScalabilitySettings> Settings;
}

struct FNiagaraDetailsLevelScaleOverrides
{
    float Low;
    float Medium;
    float High;
    float Epic;
    float Cine;
}

struct FNiagaraEmitterScriptProperties
{
    UNiagaraScript* Script;
    TArray<FNiagaraEventReceiverProperties> EventReceivers;
    TArray<FNiagaraEventGeneratorProperties> EventGenerators;
}

struct FNiagaraEventGeneratorProperties
{
    int32 MaxEventsPerFrame;
    FName ID;
    FNiagaraDataSetCompiledData DataSetCompiledData;
}

struct FNiagaraEventReceiverProperties
{
    FName Name;
    FName SourceEventGenerator;
    FName SourceEmitter;
}

struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{
    EScriptExecutionMode ExecutionMode;
    uint32 SpawnNumber;
    uint32 MaxEventsPerFrame;
    FGuid SourceEmitterID;
    FName SourceEventName;
    bool bRandomSpawnNumber;
    uint32 MinSpawnNumber;
}

struct FNiagaraEmitterHandle
{
    FGuid ID;
    FName IdName;
    bool bIsEnabled;
    FName Name;
    UNiagaraEmitter* instance;
}

struct FNiagaraCollisionEventPayload
{
    FVector CollisionPos;
    FVector CollisionNormal;
    FVector CollisionVelocity;
    int32 ParticleIndex;
    int32 PhysicalMaterialIndex;
}

struct FNiagaraMeshMaterialOverride
{
    UMaterialInterface* ExplicitMat;
    FNiagaraUserParameterBinding UserParamBinding;
}

struct FNiagaraParameters
{
    TArray<FNiagaraVariable> Parameters;
}

struct FNiagaraParameterStore
{
    UObject* Owner;
    TArray<FNiagaraVariableWithOffset> SortedParameterOffsets;
    TArray<uint8> ParameterData;
    TArray<UNiagaraDataInterface*> DataInterfaces;
    TArray<UObject*> UObjects;
}

struct FNiagaraVariableWithOffset : FNiagaraVariableBase
{
    int32 Offset;
}

struct FNiagaraBoundParameter
{
    FNiagaraVariable Parameter;
    int32 SrcOffset;
    int32 DestOffset;
}

struct FNiagaraPlatformSetConflictInfo
{
    int32 SetAIndex;
    int32 SetBIndex;
    TArray<FNiagaraPlatformSetConflictEntry> Conflicts;
}

struct FNiagaraPlatformSetConflictEntry
{
    FName ProfileName;
    int32 QualityLevelMask;
}

struct FNiagaraScalabilityManager
{
    UNiagaraEffectType* EffectType;
    TArray<UNiagaraComponent*> ManagedComponents;
}

struct FNiagaraVMExecutableData
{
    TArray<uint8> ByteCode;
    TArray<uint8> OptimizedByteCode;
    int32 NumTempRegisters;
    int32 NumUserPtrs;
    FNiagaraParameters Parameters;
    FNiagaraParameters InternalParameters;
    TMap<FName, FNiagaraParameters> DataSetToParameters;
    TArray<FNiagaraVariable> Attributes;
    FNiagaraScriptDataUsageInfo DataUsage;
    TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;
    TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;
    TArray<FNiagaraDataSetID> ReadDataSets;
    TArray<FNiagaraDataSetProperties> WriteDataSets;
    TArray<FNiagaraStatScope> StatScopes;
    TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo;
    ENiagaraScriptCompileStatus LastCompileStatus;
    TArray<FSimulationStageMetaData> SimulationStageMetaData;
}

struct FSimulationStageMetaData
{
    FName IterationSource;
    uint8 bSpawnOnly;
    uint8 bWritesParticles;
    TArray<FName> OutputDestinations;
    int32 MinStage;
    int32 MaxStage;
}

struct FNiagaraVMExecutableDataId
{
    FGuid CompilerVersionID;
    ENiagaraScriptUsage ScriptUsageType;
    FGuid ScriptUsageTypeID;
    uint8 bUsesRapidIterationParams;
    uint8 bInterpolatedSpawn;
    uint8 bRequiresPersistentIDs;
    FGuid BaseScriptID;
    FNiagaraCompileHash BaseScriptCompileHash;
}

struct FNiagaraModuleDependency
{
    FName ID;
    ENiagaraModuleDependencyType Type;
    ENiagaraModuleDependencyScriptConstraint ScriptConstraint;
    FText Description;
}

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{
    int32 ParameterSize;
    uint32 PaddedParameterSize;
    TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo;
    uint8 bInitialized;
}

struct FNiagaraScriptExecutionPaddingInfo
{
    uint16 SrcOffset;
    uint16 DestOffset;
    uint16 SrcSize;
    uint16 DestSize;
}

struct FNiagaraScriptHighlight
{
    FLinearColor Color;
    FText DisplayName;
}

struct FNiagaraSystemCompileRequest
{
    TArray<UObject*> RootObjects;
}

struct FEmitterCompiledScriptPair
{
}

struct FNiagaraSystemCompiledData
{
    FNiagaraParameterStore InstanceParamStore;
    FNiagaraDataSetCompiledData DataSetCompiledData;
    FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;
    FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;
    FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;
    FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;
    FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;
    TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;
    FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;
    FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;
    FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;
    TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;
}

struct FNiagaraParameterDataSetBindingCollection
{
    TArray<FNiagaraParameterDataSetBinding> FloatOffsets;
    TArray<FNiagaraParameterDataSetBinding> Int32Offsets;
}

struct FNiagaraParameterDataSetBinding
{
    int32 ParameterOffset;
    int32 DataSetComponentOffset;
}

struct FNiagaraEmitterCompiledData
{
    TArray<FName> SpawnAttributes;
    FNiagaraVariable EmitterSpawnIntervalVar;
    FNiagaraVariable EmitterInterpSpawnStartDTVar;
    FNiagaraVariable EmitterSpawnGroupVar;
    FNiagaraVariable EmitterAgeVar;
    FNiagaraVariable EmitterRandomSeedVar;
    FNiagaraVariable EmitterTotalSpawnedParticlesVar;
    FNiagaraDataSetCompiledData DataSetCompiledData;
}

struct FNiagaraVariableMetaData
{
    FText Description;
    FText CategoryName;
    bool bAdvancedDisplay;
    int32 EditorSortPriority;
    bool bInlineEditConditionToggle;
    FNiagaraInputConditionMetadata EditCondition;
    FNiagaraInputConditionMetadata VisibleCondition;
    TMap<FName, FString> PropertyMetaData;
    FName ScopeName;
    ENiagaraScriptParameterUsage Usage;
    bool bIsStaticSwitch;
    int32 StaticSwitchDefaultValue;
    bool bAddedToNodeGraphDeepCopy;
    bool bOutputIsPersistent;
    FName CachedNamespacelessVariableName;
    bool bCreatedInSystemEditor;
    bool bUseLegacyNameString;
}

struct FNiagaraInputConditionMetadata
{
    FName InputName;
    TArray<FString> TargetValues;
}

struct FNiagaraParameterScopeInfo
{
    ENiagaraParameterScope Scope;
    FString NamespaceString;
}

struct FNiagaraCompileHashVisitorDebugInfo
{
    FString Object;
    TArray<FString> PropertyKeys;
    TArray<FString> PropertyValues;
}

struct FNiagaraID
{
    int32 Index;
    int32 AcquireTag;
}

struct FNiagaraSpawnInfo
{
    int32 count;
    float InterpStartDt;
    float IntervalDt;
    int32 SpawnGroup;
}

struct FNiagaraMatrix
{
    FVector4 Row0;
    FVector4 Row1;
    FVector4 Row2;
    FVector4 Row3;
}

struct FNiagaraTestStruct
{
    FVector Vector1;
    FVector Vector2;
    FNiagaraTestStructInner InnerStruct1;
    FNiagaraTestStructInner InnerStruct2;
}

struct FNiagaraTestStructInner
{
    FVector InnerVector1;
    FVector InnerVector2;
}

struct FNiagaraParameterMap
{
}

struct FNiagaraNumeric
{
}

struct FNiagaraBool
{
    int32 Value;
}

struct FNiagaraInt32
{
    int32 Value;
}

struct FNiagaraFloat
{
    float Value;
}

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
{
    TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects;
}

struct FNiagaraVariant
{
    UObject* Object;
    UNiagaraDataInterface* DataInterface;
    TArray<uint8> Bytes;
    ENiagaraVariantMode CurrentMode;
}

struct FNiagaraWorldManagerTickFunction : FTickFunction
{
}

#endif
