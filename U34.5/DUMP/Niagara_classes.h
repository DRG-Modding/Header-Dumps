// Class Niagara.MovieSceneNiagaraTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class Niagara.MovieSceneNiagaraParameterTrack
// Size: 0x90 (Inherited: 0x68)
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	FNiagaraVariable Parameter; // 0x68(0x28)
};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0xf0 (Inherited: 0xe0)
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe0(0x04)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xe4(0x04)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xe8(0x04)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0xec(0x01)
};

// Class Niagara.MovieSceneNiagaraSystemTrack
// Size: 0x68 (Inherited: 0x68)
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack {
};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	int32_t ChannelsUsed; // 0x90(0x04)
};

// Class Niagara.NiagaraActor
// Size: 0x230 (Inherited: 0x220)
struct ANiagaraActor : AActor {
	UNiagaraComponent* NiagaraComponent; // 0x220(0x08)
	char bDestroyOnSystemFinish : 1; // 0x228(0x01)

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
	void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);
};

// Class Niagara.NiagaraComponent
// Size: 0x5a0 (Inherited: 0x3f0)
struct UNiagaraComponent : UFXSystemComponent {
	UNiagaraSystem* Asset; // 0x3f0(0x08)
	enum class ENiagaraTickBehavior TickBehavior; // 0x3f8(0x01)
	FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x400(0x108)
	char bForceSolo : 1; // 0x508(0x01)
	char bAutoDestroy : 1; // 0x534(0x01)
	char bRenderingEnabled : 1; // 0x534(0x01)
	char bAutoManageAttachment : 1; // 0x534(0x01)
	char bAutoAttachWeldSimulatedBodies : 1; // 0x534(0x01)
	float MaxTimeBeforeForceUpdateTransform; // 0x538(0x04)
	FMulticastInlineDelegate OnSystemFinished; // 0x540(0x10)
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x550(0x08)
	FName AutoAttachSocketName; // 0x558(0x08)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x560(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x561(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x562(0x01)

	void SetVariableVec4(FName InVariableName, FVector4 InValue);
	void SetVariableVec3(FName InVariableName, FVector InValue);
	void SetVariableVec2(FName InVariableName, FVector2D InValue);
	void SetVariableQuat(FName InVariableName, FQuat InValue);
	void SetVariableObject(FName InVariableName, UObject* Object);
	void SetVariableMaterial(FName InVariableName, UMaterialInterface* Object);
	void SetVariableLinearColor(FName InVariableName, FLinearColor InValue);
	void SetVariableInt(FName InVariableName, int32_t InValue);
	void SetVariableFloat(FName InVariableName, float InValue);
	void SetVariableBool(FName InVariableName, bool InValue);
	void SetVariableActor(FName InVariableName, AActor* Actor);
	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(FString InVariableName, FVector4 InValue);
	void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);
	void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);
	void SetNiagaraVariableQuat(FString InVariableName, FQuat InValue);
	void SetNiagaraVariableObject(FString InVariableName, UObject* Object);
	void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor InValue);
	void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);
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
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	float GetSeekDelta();
	bool GetPreviewLODDistanceEnabled();
	int32_t GetPreviewLODDistance();
	TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);
	TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);
	float GetMaxSimTime();
	bool GetForceSolo();
	float GetDesiredAge();
	UNiagaraDataInterface* GetDataInterface(FString Name);
	UNiagaraSystem* GetAsset();
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);
};

// Class Niagara.NiagaraComponentPool
// Size: 0x80 (Inherited: 0x28)
struct UNiagaraComponentPool : UObject {
	TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools; // 0x28(0x50)
};

// Class Niagara.NiagaraConvertInPlaceUtilityBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraConvertInPlaceUtilityBase : UObject {
};

// Class Niagara.NiagaraDataInterface
// Size: 0x30 (Inherited: 0x28)
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase {
};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	USoundSubmix* Submix; // 0x30(0x08)
};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	USoundSubmix* Submix; // 0x30(0x08)
	int32_t Resolution; // 0x38(0x04)
	float ScopeInMilliseconds; // 0x3c(0x04)
};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; // 0x38(0x04)
	float MinimumFrequency; // 0x3c(0x04)
	float MaximumFrequency; // 0x40(0x04)
	float NoiseFloorDb; // 0x44(0x04)
};

// Class Niagara.NiagaraDataInterfaceCamera
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x30(0x04)
};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x58 (Inherited: 0x30)
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	TArray<float> ShaderLUT; // 0x30(0x10)
	float LUTMinTime; // 0x40(0x04)
	float LUTMaxTime; // 0x44(0x04)
	float LUTInvTimeRange; // 0x48(0x04)
	float LUTNumSamplesMinusOne; // 0x4c(0x04)
	char bUseLUT : 1; // 0x50(0x01)
};

// Class Niagara.NiagaraDataInterfaceColorCurve
// Size: 0x258 (Inherited: 0x58)
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve RedCurve; // 0x58(0x80)
	FRichCurve GreenCurve; // 0xd8(0x80)
	FRichCurve BlueCurve; // 0x158(0x80)
	FRichCurve AlphaCurve; // 0x1d8(0x80)
};

// Class Niagara.NiagaraDataInterfaceCurlNoise
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x30(0x04)
};

// Class Niagara.NiagaraDataInterfaceCurve
// Size: 0xd8 (Inherited: 0x58)
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve Curve; // 0x58(0x80)
};

// Class Niagara.NiagaraParticleCallbackHandler
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraParticleCallbackHandler : UInterface {

	void ReceiveParticleData(TArray<FBasicParticleData> Data, UNiagaraSystem* NiagaraSystem);
};

// Class Niagara.NiagaraDataInterfaceExport
// Size: 0x58 (Inherited: 0x30)
struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x30(0x28)
};

// Class Niagara.NiagaraDataInterfaceRWBase
// Size: 0xd0 (Inherited: 0x30)
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	TSet<int32_t> OutputShaderStages; // 0x30(0x50)
	TSet<int32_t> IterationShaderStages; // 0x80(0x50)
};

// Class Niagara.NiagaraDataInterfaceGrid2D
// Size: 0xf0 (Inherited: 0xd0)
struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0xd0(0x04)
	int32_t NumCellsY; // 0xd4(0x04)
	int32_t NumCellsMaxAxis; // 0xd8(0x04)
	int32_t NumAttributes; // 0xdc(0x04)
	bool SetGridFromMaxAxis; // 0xe0(0x01)
	FVector2D WorldBBoxSize; // 0xe4(0x08)
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// Size: 0x140 (Inherited: 0xf0)
struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {

	void GetTextureSize(UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY);
	void GetRawTextureSize(UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY);
	bool FillTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t AttributeIndex);
	bool FillRawTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t TilesX, int32_t TilesY);
};

// Class Niagara.NiagaraDataInterfaceGrid3D
// Size: 0xf0 (Inherited: 0xd0)
struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	FIntVector NumVoxels; // 0xd0(0x0c)
	float VoxelSize; // 0xdc(0x04)
	bool SetGridFromVoxelSize; // 0xe0(0x01)
	FVector WorldBBoxSize; // 0xe4(0x0c)
};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// Size: 0xf8 (Inherited: 0xf0)
struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerVoxel; // 0xf0(0x04)
};

// Class Niagara.NiagaraDataInterfaceOcclusion
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceParticleRead
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterface {
	FString EmitterName; // 0x30(0x10)
};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0xb8 (Inherited: 0x30)
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	AActor* Source; // 0x30(0x08)
	FNiagaraUserParameterBinding MeshUserParameter; // 0x38(0x28)
	USkeletalMeshComponent* SourceComponent; // 0x60(0x08)
	enum class ENDISkeletalMesh_SkinningMode SkinningMode; // 0x68(0x01)
	TArray<FName> SamplingRegions; // 0x70(0x10)
	int32_t WholeMeshLOD; // 0x80(0x04)
	TArray<FName> FilteredBones; // 0x88(0x10)
	TArray<FName> FilteredSockets; // 0x98(0x10)
	FName ExcludeBoneName; // 0xa8(0x08)
	char bExcludeBone : 1; // 0xb0(0x01)
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	AActor* Source; // 0x30(0x08)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x60 (Inherited: 0x30)
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	UStaticMesh* DefaultMesh; // 0x30(0x08)
	AActor* Source; // 0x38(0x08)
	UStaticMeshComponent* SourceComponent; // 0x40(0x08)
	FNDIStaticMeshSectionFilter SectionFilter; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceTexture
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	UTexture* Texture; // 0x30(0x08)
};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size: 0x158 (Inherited: 0x58)
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x58(0x80)
	FRichCurve YCurve; // 0xd8(0x80)
};

// Class Niagara.NiagaraDataInterfaceVector4Curve
// Size: 0x258 (Inherited: 0x58)
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x58(0x80)
	FRichCurve YCurve; // 0xd8(0x80)
	FRichCurve ZCurve; // 0x158(0x80)
	FRichCurve WCurve; // 0x1d8(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorCurve
// Size: 0x1d8 (Inherited: 0x58)
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x58(0x80)
	FRichCurve YCurve; // 0xd8(0x80)
	FRichCurve ZCurve; // 0x158(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorField
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	UVectorField* Field; // 0x30(0x08)
	bool bTileX; // 0x38(0x01)
	bool bTileY; // 0x39(0x01)
	bool bTileZ; // 0x3a(0x01)
};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	UVolumeTexture* Texture; // 0x30(0x08)
};

// Class Niagara.NiagaraEditorDataBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEditorDataBase : UObject {
};

// Class Niagara.NiagaraEffectType
// Size: 0x100 (Inherited: 0x28)
struct UNiagaraEffectType : UObject {
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28(0x04)
	enum class ENiagaraCullReaction CullReaction; // 0x2c(0x04)
	TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x30(0x10)
	FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x40(0x10)
	FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x50(0x10)
};

// Class Niagara.NiagaraEmitter
// Size: 0x2b0 (Inherited: 0x28)
struct UNiagaraEmitter : UObject {
	bool bLocalSpace; // 0x28(0x01)
	bool bDeterminism; // 0x29(0x01)
	int32_t RandomSeed; // 0x2c(0x04)
	enum class EParticleAllocationMode AllocationMode; // 0x30(0x01)
	int32_t PreAllocationCount; // 0x34(0x04)
	FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x38(0x28)
	FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x60(0x28)
	FNiagaraEmitterScriptProperties EmitterSpawnScriptProps; // 0x88(0x28)
	FNiagaraEmitterScriptProperties EmitterUpdateScriptProps; // 0xb0(0x28)
	enum class ENiagaraSimTarget SimTarget; // 0xd8(0x01)
	FBox FixedBounds; // 0xdc(0x1c)
	int32_t MinDetailLevel; // 0xf8(0x04)
	int32_t MaxDetailLevel; // 0xfc(0x04)
	FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0x100(0x14)
	FNiagaraPlatformSet Platforms; // 0x118(0x20)
	FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0x138(0x10)
	char bInterpolatedSpawning : 1; // 0x148(0x01)
	char bFixedBounds : 1; // 0x148(0x01)
	char bUseMinDetailLevel : 1; // 0x148(0x01)
	char bUseMaxDetailLevel : 1; // 0x148(0x01)
	char bOverrideGlobalSpawnCountScale : 1; // 0x148(0x01)
	char bRequiresPersistentIDs : 1; // 0x148(0x01)
	float MaxDeltaTimePerTick; // 0x14c(0x04)
	uint32_t DefaultShaderStageIndex; // 0x150(0x04)
	uint32_t MaxUpdateIterations; // 0x154(0x04)
	TSet<uint32_t> SpawnStages; // 0x158(0x50)
	char bSimulationStagesEnabled : 1; // 0x1a8(0x01)
	char bDeprecatedShaderStagesEnabled : 1; // 0x1a8(0x01)
	char pad_199_0 : 2; // 0x199(0x01)
	char bLimitDeltaTime : 1; // 0x1a8(0x01)
	FString UniqueEmitterName; // 0x1b0(0x10)
	TArray<UNiagaraRendererProperties*> RendererProperties; // 0x1c0(0x10)
	TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x1d0(0x10)
	TArray<UNiagaraSimulationStageBase*> SimulationStages; // 0x1e0(0x10)
	UNiagaraScript* GPUComputeScript; // 0x1f0(0x08)
	TArray<FName> SharedEventGeneratorIds; // 0x1f8(0x10)
};

// Class Niagara.NiagaraEventReceiverEmitterAction
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction : UObject {
};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size: 0x30 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x28(0x04)
};

// Class Niagara.NiagaraFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary {

	UNiagaraComponent* SpawnSystemAttached(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	UNiagaraComponent* SpawnSystemAtLocation(UObject* WorldContextObject, UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	void SetVolumeTextureObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UVolumeTexture* Texture);
	void SetTextureObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UTexture* Texture);
	void OverrideSystemUserVariableStaticMeshComponent(UNiagaraComponent* NiagaraSystem, FString OverrideName, UStaticMeshComponent* StaticMeshComponent);
	void OverrideSystemUserVariableStaticMesh(UNiagaraComponent* NiagaraSystem, FString OverrideName, UStaticMesh* StaticMesh);
	void OverrideSystemUserVariableSkeletalMeshComponent(UNiagaraComponent* NiagaraSystem, FString OverrideName, USkeletalMeshComponent* SkeletalMeshComponent);
	UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(UObject* WorldContextObject, UNiagaraParameterCollection* Collection);
};

// Class Niagara.NiagaraRendererProperties
// Size: 0x50 (Inherited: 0x28)
struct UNiagaraRendererProperties : UNiagaraMergeable {
	int32_t SortOrderHint; // 0x28(0x04)
	bool bIsEnabled; // 0x2c(0x01)
	bool bMotionBlurEnabled; // 0x2d(0x01)
};

// Class Niagara.NiagaraLightRendererProperties
// Size: 0x338 (Inherited: 0x50)
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0x50(0x01)
	char bAffectsTranslucency : 1; // 0x50(0x01)
	char bOverrideRenderingEnabled : 1; // 0x50(0x01)
	float RadiusScale; // 0x54(0x04)
	FVector ColorAdd; // 0x58(0x0c)
	FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x68(0x78)
	FNiagaraVariableAttributeBinding LightExponentBinding; // 0xe0(0x78)
	FNiagaraVariableAttributeBinding PositionBinding; // 0x158(0x78)
	FNiagaraVariableAttributeBinding ColorBinding; // 0x1d0(0x78)
	FNiagaraVariableAttributeBinding RadiusBinding; // 0x248(0x78)
	FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x2c0(0x78)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x728 (Inherited: 0x50)
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	UStaticMesh* ParticleMesh; // 0x50(0x08)
	enum class ENiagaraSortMode SortMode; // 0x58(0x01)
	char bOverrideMaterials : 1; // 0x5c(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0x5c(0x01)
	TArray<FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x60(0x10)
	FVector2D SubImageSize; // 0x70(0x08)
	char bSubImageBlend : 1; // 0x78(0x01)
	enum class ENiagaraMeshFacingMode FacingMode; // 0x7c(0x01)
	char bLockedAxisEnable : 1; // 0x80(0x01)
	FVector LockedAxis; // 0x84(0x0c)
	enum class ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0x90(0x01)
	FNiagaraVariableAttributeBinding PositionBinding; // 0x98(0x78)
	FNiagaraVariableAttributeBinding ColorBinding; // 0x110(0x78)
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x188(0x78)
	FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x200(0x78)
	FNiagaraVariableAttributeBinding ScaleBinding; // 0x278(0x78)
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x2f0(0x78)
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x368(0x78)
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x3e0(0x78)
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x458(0x78)
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4d0(0x78)
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x548(0x78)
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x5c0(0x78)
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x638(0x78)
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x6b0(0x78)
};

// Class Niagara.NiagaraParameterCollectionInstance
// Size: 0xf8 (Inherited: 0x28)
struct UNiagaraParameterCollectionInstance : UObject {
	UNiagaraParameterCollection* Collection; // 0x28(0x08)
	TArray<FNiagaraVariable> OverridenParameters; // 0x30(0x10)
	FNiagaraParameterStore ParameterStorage; // 0x40(0xb8)

	void SetVectorParameter(FString InVariableName, FVector InValue);
	void SetVector4Parameter(FString InVariableName, FVector4 InValue);
	void SetVector2DParameter(FString InVariableName, FVector2D InValue);
	void SetQuatParameter(FString InVariableName, FQuat InValue);
	void SetIntParameter(FString InVariableName, int32_t InValue);
	void SetFloatParameter(FString InVariableName, float InValue);
	void SetColorParameter(FString InVariableName, FLinearColor InValue);
	void SetBoolParameter(FString InVariableName, bool InValue);
	FVector GetVectorParameter(FString InVariableName);
	FVector4 GetVector4Parameter(FString InVariableName);
	FVector2D GetVector2DParameter(FString InVariableName);
	FQuat GetQuatParameter(FString InVariableName);
	int32_t GetIntParameter(FString InVariableName);
	float GetFloatParameter(FString InVariableName);
	FLinearColor GetColorParameter(FString InVariableName);
	bool GetBoolParameter(FString InVariableName);
};

// Class Niagara.NiagaraParameterCollection
// Size: 0x58 (Inherited: 0x28)
struct UNiagaraParameterCollection : UObject {
	FName Namespace; // 0x28(0x08)
	TArray<FNiagaraVariable> Parameters; // 0x30(0x10)
	UNiagaraParameterCollectionInstance* DefaultInstance; // 0x40(0x08)
	FGuid CompileId; // 0x48(0x10)
};

// Class Niagara.NiagaraPrecompileContainer
// Size: 0x40 (Inherited: 0x28)
struct UNiagaraPrecompileContainer : UObject {
	TArray<UNiagaraScript*> Scripts; // 0x28(0x10)
	UNiagaraSystem* System; // 0x38(0x08)
};

// Class Niagara.NiagaraPreviewBase
// Size: 0x220 (Inherited: 0x220)
struct ANiagaraPreviewBase : AActor {

	void SetSystem(UNiagaraSystem* InSystem);
	void SetLabelText(FText InXAxisText, FText InYAxisText);
};

// Class Niagara.NiagaraPreviewAxis
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraPreviewAxis : UObject {

	int32_t Num();
	void ApplyToPreview(UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString OutLabelText);
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	FName Param; // 0x28(0x08)
	int32_t count; // 0x30(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t Min; // 0x38(0x04)
	int32_t Max; // 0x3c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float Min; // 0x38(0x04)
	float Max; // 0x3c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	FVector2D Min; // 0x38(0x08)
	FVector2D Max; // 0x40(0x08)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	FVector Min; // 0x38(0x0c)
	FVector Max; // 0x44(0x0c)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	FVector4 Min; // 0x40(0x10)
	FVector4 Max; // 0x50(0x10)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	FLinearColor Min; // 0x38(0x10)
	FLinearColor Max; // 0x48(0x10)
};

// Class Niagara.NiagaraPreviewGrid
// Size: 0x270 (Inherited: 0x220)
struct ANiagaraPreviewGrid : AActor {
	UNiagaraSystem* System; // 0x220(0x08)
	enum class ENiagaraPreviewGridResetMode ResetMode; // 0x228(0x01)
	UNiagaraPreviewAxis* PreviewAxisX; // 0x230(0x08)
	UNiagaraPreviewAxis* PreviewAxisY; // 0x238(0x08)
	ANiagaraPreviewBase* PreviewClass; // 0x240(0x08)
	float SpacingX; // 0x248(0x04)
	float SpacingY; // 0x24c(0x04)
	int32_t NumX; // 0x250(0x04)
	int32_t NumY; // 0x254(0x04)
	TArray<UChildActorComponent*> PreviewComponents; // 0x258(0x10)

	void SetPaused(bool bPaused);
	void GetPreviews(TArray<UNiagaraComponent*> OutPreviews);
	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x760 (Inherited: 0x50)
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	UMaterialInterface* Material; // 0x50(0x08)
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x58(0x28)
	enum class ENiagaraRibbonFacingMode FacingMode; // 0x80(0x01)
	float UV0TilingDistance; // 0x84(0x04)
	FVector2D UV0Scale; // 0x88(0x08)
	FVector2D UV0Offset; // 0x90(0x08)
	enum class ENiagaraRibbonAgeOffsetMode UV0AgeOffsetMode; // 0x98(0x01)
	float UV1TilingDistance; // 0x9c(0x04)
	FVector2D UV1Scale; // 0xa0(0x08)
	FVector2D UV1Offset; // 0xa8(0x08)
	enum class ENiagaraRibbonAgeOffsetMode UV1AgeOffsetMode; // 0xb0(0x01)
	enum class ENiagaraRibbonDrawDirection DrawDirection; // 0xb1(0x01)
	float CurveTension; // 0xb4(0x04)
	enum class ENiagaraRibbonTessellationMode TessellationMode; // 0xb8(0x01)
	int32_t TessellationFactor; // 0xbc(0x04)
	bool bUseConstantFactor; // 0xc0(0x01)
	float TessellationAngle; // 0xc4(0x04)
	bool bScreenSpaceTessellation; // 0xc8(0x01)
	FNiagaraVariableAttributeBinding PositionBinding; // 0xd0(0x78)
	FNiagaraVariableAttributeBinding ColorBinding; // 0x148(0x78)
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x1c0(0x78)
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x238(0x78)
	FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x2b0(0x78)
	FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x328(0x78)
	FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x3a0(0x78)
	FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x418(0x78)
	FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x490(0x78)
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x508(0x78)
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x580(0x78)
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x5f8(0x78)
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x670(0x78)
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x6e8(0x78)
};

// Class Niagara.NiagaraScript
// Size: 0x520 (Inherited: 0x28)
struct UNiagaraScript : UObject {
	enum class ENiagaraScriptUsage Usage; // 0x28(0x01)
	int32_t UsageIndex; // 0x2c(0x04)
	FGuid UsageId; // 0x30(0x10)
	FNiagaraParameterStore RapidIterationParameters; // 0x40(0xb8)
	FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xf8(0xd8)
	TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x1d0(0x10)
	FNiagaraVMExecutableDataId CachedScriptVMId; // 0x1e0(0x48)
	FNiagaraVMExecutableData CachedScriptVM; // 0x3d8(0x128)
	TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x500(0x10)
	TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x510(0x10)

	void RaiseOnGPUCompilationComplete();
};

// Class Niagara.NiagaraScriptSourceBase
// Size: 0x48 (Inherited: 0x28)
struct UNiagaraScriptSourceBase : UObject {
};

// Class Niagara.NiagaraSettings
// Size: 0x98 (Inherited: 0x38)
struct UNiagaraSettings : UDeveloperSettings {
	TArray<FSoftObjectPath> AdditionalParameterTypes; // 0x38(0x10)
	TArray<FSoftObjectPath> AdditionalPayloadTypes; // 0x48(0x10)
	TArray<FSoftObjectPath> AdditionalParameterEnums; // 0x58(0x10)
	FSoftObjectPath DefaultEffectType; // 0x68(0x18)
	TArray<FText> QualityLevels; // 0x80(0x10)
	UNiagaraEffectType* DefaultEffectTypePtr; // 0x90(0x08)
};

// Class Niagara.NiagaraSimulationStageBase
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	UNiagaraScript* Script; // 0x28(0x08)
	FName SimulationStageName; // 0x30(0x08)
};

// Class Niagara.NiagaraSimulationStageGeneric
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	enum class ENiagaraIterationSource IterationSource; // 0x38(0x01)
	int32_t Iterations; // 0x3c(0x04)
	char bSpawnOnly : 1; // 0x40(0x01)
	FNiagaraVariableDataInterfaceBinding DataInterface; // 0x48(0x28)
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0x8b0 (Inherited: 0x50)
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	UMaterialInterface* Material; // 0x50(0x08)
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x58(0x28)
	enum class ENiagaraSpriteAlignment Alignment; // 0x80(0x01)
	enum class ENiagaraSpriteFacingMode FacingMode; // 0x81(0x01)
	FVector2D PivotInUVSpace; // 0x84(0x08)
	enum class ENiagaraSortMode SortMode; // 0x8c(0x01)
	FVector2D SubImageSize; // 0x90(0x08)
	char bSubImageBlend : 1; // 0x98(0x01)
	char bRemoveHMDRollInVR : 1; // 0x98(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0x98(0x01)
	float MinFacingCameraBlendDistance; // 0x9c(0x04)
	float MaxFacingCameraBlendDistance; // 0xa0(0x04)
	FNiagaraVariableAttributeBinding PositionBinding; // 0xa8(0x78)
	FNiagaraVariableAttributeBinding ColorBinding; // 0x120(0x78)
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x198(0x78)
	FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x210(0x78)
	FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x288(0x78)
	FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x300(0x78)
	FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x378(0x78)
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x3f0(0x78)
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x468(0x78)
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x4e0(0x78)
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x558(0x78)
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x5d0(0x78)
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x648(0x78)
	FNiagaraVariableAttributeBinding UVScaleBinding; // 0x6c0(0x78)
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x738(0x78)
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x7b0(0x78)
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x828(0x78)
};

// Class Niagara.NiagaraSystem
// Size: 0x478 (Inherited: 0x30)
struct UNiagaraSystem : UFXSystemAsset {
	bool bDumpDebugSystemInfo; // 0x31(0x01)
	bool bDumpDebugEmitterInfo; // 0x32(0x01)
	char bFixedBounds : 1; // 0x34(0x01)
	UNiagaraEffectType* EffectType; // 0x38(0x08)
	bool bOverrideScalabilitySettings; // 0x40(0x01)
	TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x48(0x10)
	FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x58(0x10)
	TArray<FNiagaraEmitterHandle> EmitterHandles; // 0x68(0x10)
	TArray<UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x78(0x10)
	UNiagaraScript* SystemSpawnScript; // 0x88(0x08)
	UNiagaraScript* SystemUpdateScript; // 0x90(0x08)
	FNiagaraSystemCompiledData SystemCompiledData; // 0xa8(0x258)
	FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x300(0x108)
	FBox FixedBounds; // 0x408(0x1c)
	bool bAutoDeactivate; // 0x424(0x01)
	float WarmupTime; // 0x428(0x04)
	int32_t WarmupTickCount; // 0x42c(0x04)
	float WarmupTickDelta; // 0x430(0x04)
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x434(0x01)
	TArray<FName> UserDINamesReadInSystemScripts; // 0x438(0x10)
};

