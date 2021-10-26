// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8 {
	Perspective = 0,
	Orthographic = 1,
	ELiveLinkCameraProjectionMode_MAX = 2
};

// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8 {
	Latest = 0,
	EngineTime = 1,
	Timecode = 2,
	ELiveLinkSourceMode_MAX = 3
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// Size: 0x18 (Inherited: 0x00)
struct FLiveLinkSourceHandle {
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
// Size: 0x08 (Inherited: 0x00)
struct FLiveLinkBaseBlueprintData {
};

// ScriptStruct LiveLinkInterface.SubjectFrameHandle
// Size: 0x18 (Inherited: 0x08)
struct FSubjectFrameHandle : FLiveLinkBaseBlueprintData {
};

// ScriptStruct LiveLinkInterface.LiveLinkTransform
// Size: 0x20 (Inherited: 0x00)
struct FLiveLinkTransform {
};

// ScriptStruct LiveLinkInterface.CachedSubjectFrame
// Size: 0x160 (Inherited: 0x00)
struct FCachedSubjectFrame {
};

// ScriptStruct LiveLinkInterface.SubjectMetadata
// Size: 0x70 (Inherited: 0x00)
struct FSubjectMetadata {
	UPROPERTY(BlueprintReadWrite) TMap<FName, FString> StringMetadata; 
	UPROPERTY(BlueprintReadWrite) FTimecode SceneTimecode; 
	UPROPERTY(BlueprintReadWrite) FFrameRate SceneFramerate; 
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
// Size: 0xa0 (Inherited: 0x00)
struct FLiveLinkBaseFrameData {
	UPROPERTY(BlueprintReadWrite) FLiveLinkWorldTime WorldTime; 
	UPROPERTY(BlueprintReadWrite) FLiveLinkMetaData MetaData; 
	UPROPERTY(BlueprintReadWrite) TArray<float> PropertyValues; 
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// Size: 0x60 (Inherited: 0x00)
struct FLiveLinkMetaData {
	UPROPERTY(BlueprintReadWrite) TMap<FName, FString> StringMetadata; 
	UPROPERTY(BlueprintReadWrite) FQualifiedFrameTime SceneTime; 
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkWorldTime {
	UPROPERTY(BlueprintReadWrite) double Time; 
	UPROPERTY(BlueprintReadWrite) double Offset; 
};

// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
// Size: 0xb0 (Inherited: 0xa0)
struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	UPROPERTY(BlueprintReadWrite) TArray<FTransform> Transforms; 
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkBaseStaticData {
	UPROPERTY(BlueprintReadWrite) TArray<FName> PropertyNames; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
// Size: 0x30 (Inherited: 0x10)
struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	UPROPERTY(BlueprintReadWrite) TArray<FName> BoneNames; 
	UPROPERTY(BlueprintReadWrite) TArray<int32_t> BoneParents; 
};

// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
// Size: 0xb8 (Inherited: 0x08)
struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	UPROPERTY(BlueprintReadWrite) FLiveLinkBaseStaticData StaticData; 
	UPROPERTY(BlueprintReadWrite) FLiveLinkBaseFrameData FrameData; 
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
// Size: 0x120 (Inherited: 0x08)
struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	UPROPERTY(BlueprintReadWrite) FLiveLinkCameraStaticData StaticData; 
	UPROPERTY(BlueprintReadWrite) FLiveLinkCameraFrameData FrameData; 
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
// Size: 0xd0 (Inherited: 0xa0)
struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	UPROPERTY(BlueprintReadWrite) FTransform Transform; 
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
// Size: 0xf0 (Inherited: 0xd0)
struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	UPROPERTY(BlueprintReadWrite) float FieldOfView; 
	UPROPERTY(BlueprintReadWrite) float AspectRatio; 
	UPROPERTY(BlueprintReadWrite) float FocalLength; 
	UPROPERTY(BlueprintReadWrite) float Aperture; 
	UPROPERTY(BlueprintReadWrite) float FocusDistance; 
	UPROPERTY(BlueprintReadWrite) enum class ELiveLinkCameraProjectionMode ProjectionMode; 
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
// Size: 0x10 (Inherited: 0x10)
struct FLiveLinkTransformStaticData : FLiveLinkBaseStaticData {
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
// Size: 0x20 (Inherited: 0x10)
struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData {
	UPROPERTY(BlueprintReadWrite) bool bIsFieldOfViewSupported; 
	UPROPERTY(BlueprintReadWrite) bool bIsAspectRatioSupported; 
	UPROPERTY(BlueprintReadWrite) bool bIsFocalLengthSupported; 
	UPROPERTY(BlueprintReadWrite) bool bIsProjectionModeSupported; 
	UPROPERTY(BlueprintReadWrite) float FilmBackWidth; 
	UPROPERTY(BlueprintReadWrite) float FilmBackHeight; 
	UPROPERTY(BlueprintReadWrite) bool bIsApertureSupported; 
	UPROPERTY(BlueprintReadWrite) bool bIsFocusDistanceSupported; 
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// Size: 0x50 (Inherited: 0x00)
struct FLiveLinkCurveConversionSettings {
	UPROPERTY(BlueprintReadWrite) TMap<FString, FSoftObjectPath> CurveConversionAssetMap; 
};

// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
// Size: 0x130 (Inherited: 0x08)
struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	UPROPERTY(BlueprintReadWrite) FLiveLinkLightStaticData StaticData; 
	UPROPERTY(BlueprintReadWrite) FLiveLinkLightFrameData FrameData; 
};

// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
// Size: 0x100 (Inherited: 0xd0)
struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData {
	UPROPERTY(BlueprintReadWrite) float Temperature; 
	UPROPERTY(BlueprintReadWrite) float Intensity; 
	UPROPERTY(BlueprintReadWrite) FColor LightColor; 
	UPROPERTY(BlueprintReadWrite) float InnerConeAngle; 
	UPROPERTY(BlueprintReadWrite) float OuterConeAngle; 
	UPROPERTY(BlueprintReadWrite) float AttenuationRadius; 
	UPROPERTY(BlueprintReadWrite) float SourceRadius; 
	UPROPERTY(BlueprintReadWrite) float SoftSourceRadius; 
	UPROPERTY(BlueprintReadWrite) float SourceLength; 
};

// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
// Size: 0x20 (Inherited: 0x10)
struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData {
	UPROPERTY(BlueprintReadWrite) bool bIsTemperatureSupported; 
	UPROPERTY(BlueprintReadWrite) bool bIsIntensitySupported; 
	UPROPERTY(BlueprintReadWrite) bool bIsLightColorSupported; 
	UPROPERTY(BlueprintReadWrite) bool bIsInnerConeAngleSupported; 
	UPROPERTY(BlueprintReadWrite) bool bIsOuterConeAngleSupported; 
	UPROPERTY(BlueprintReadWrite) bool bIsAttenuationRadiusSupported; 
	UPROPERTY(BlueprintReadWrite) bool bIsSourceLenghtSupported; 
	UPROPERTY(BlueprintReadWrite) bool bIsSourceRadiusSupported; 
	UPROPERTY(BlueprintReadWrite) bool bIsSoftSourceRadiusSupported; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
// Size: 0x38 (Inherited: 0x00)
struct FLiveLinkSubjectPreset {
	UPROPERTY(BlueprintReadWrite) FLiveLinkSubjectKey Key; 
	UPROPERTY(BlueprintReadWrite) ULiveLinkRole* Role; 
	UPROPERTY(BlueprintReadWrite) ULiveLinkSubjectSettings* Settings; 
	UPROPERTY(BlueprintReadWrite) ULiveLinkVirtualSubject* VirtualSubject; 
	UPROPERTY(BlueprintReadWrite) bool bEnabled; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
// Size: 0x18 (Inherited: 0x00)
struct FLiveLinkSubjectKey {
	UPROPERTY(BlueprintReadWrite) FGuid Source; 
	UPROPERTY(BlueprintReadWrite) FLiveLinkSubjectName SubjectName; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// Size: 0x08 (Inherited: 0x00)
struct FLiveLinkSubjectName {
	UPROPERTY(BlueprintReadWrite) FName Name; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
// Size: 0x30 (Inherited: 0x00)
struct FLiveLinkSourcePreset {
	UPROPERTY(BlueprintReadWrite) FGuid Guid; 
	UPROPERTY(BlueprintReadWrite) ULiveLinkSourceSettings* Settings; 
	UPROPERTY(BlueprintReadWrite) FText SourceType; 
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// Size: 0x20 (Inherited: 0x00)
struct FLiveLinkRefSkeleton {
	UPROPERTY(BlueprintReadWrite) TArray<FName> BoneNames; 
	UPROPERTY(BlueprintReadWrite) TArray<int32_t> BoneParents; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkSubjectRepresentation {
	UPROPERTY(BlueprintReadWrite) FLiveLinkSubjectName Subject; 
	UPROPERTY(BlueprintReadWrite) ULiveLinkRole* Role; 
};

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// Size: 0x08 (Inherited: 0x00)
struct FLiveLinkInterpolationSettings {
	UPROPERTY(BlueprintReadWrite) bool bUseInterpolation; 
	UPROPERTY(BlueprintReadWrite) float InterpolationOffset; 
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// Size: 0x0c (Inherited: 0x00)
struct FLiveLinkTimeSynchronizationSettings {
	UPROPERTY(BlueprintReadWrite) FFrameRate FrameRate; 
	UPROPERTY(BlueprintReadWrite) FFrameNumber FrameOffset; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkSourceDebugInfo {
	UPROPERTY(BlueprintReadWrite) FLiveLinkSubjectName SubjectName; 
	UPROPERTY(BlueprintReadWrite) int32_t SnapshotIndex; 
	UPROPERTY(BlueprintReadWrite) int32_t NumberOfBufferAtSnapshot; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// Size: 0x50 (Inherited: 0x00)
struct FLiveLinkSourceBufferManagementSettings {
	UPROPERTY(BlueprintReadWrite) bool bValidEngineTimeEnabled; 
	UPROPERTY(BlueprintReadWrite) float ValidEngineTime; 
	UPROPERTY(BlueprintReadWrite) float EngineTimeOffset; 
	UPROPERTY(BlueprintReadWrite) double EngineTimeClockOffset; 
	UPROPERTY(BlueprintReadWrite) FFrameRate TimecodeFrameRate; 
	UPROPERTY(BlueprintReadWrite) bool bGenerateSubFrame; 
	UPROPERTY(BlueprintReadWrite) bool bUseTimecodeSmoothLatest; 
	UPROPERTY(BlueprintReadWrite) FFrameRate SourceTimecodeFrameRate; 
	UPROPERTY(BlueprintReadWrite) bool bValidTimecodeFrameEnabled; 
	UPROPERTY(BlueprintReadWrite) int32_t ValidTimecodeFrame; 
	UPROPERTY(BlueprintReadWrite) float TimecodeFrameOffset; 
	UPROPERTY(BlueprintReadWrite) double TimecodeClockOffset; 
	UPROPERTY(BlueprintReadWrite) int32_t LatestOffset; 
	UPROPERTY(BlueprintReadWrite) int32_t MaxNumberOfFrameToBuffered; 
	UPROPERTY(BlueprintReadWrite) bool bKeepAtLeastOneFrame; 
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
// Size: 0xf0 (Inherited: 0x08)
struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	UPROPERTY(BlueprintReadWrite) FLiveLinkTransformStaticData StaticData; 
	UPROPERTY(BlueprintReadWrite) FLiveLinkTransformFrameData FrameData; 
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// Size: 0x90 (Inherited: 0x00)
struct FLiveLinkFrameData {
	UPROPERTY(BlueprintReadWrite) TArray<FTransform> Transforms; 
	UPROPERTY(BlueprintReadWrite) TArray<FLiveLinkCurveElement> CurveElements; 
	UPROPERTY(BlueprintReadWrite) FLiveLinkWorldTime WorldTime; 
	UPROPERTY(BlueprintReadWrite) FLiveLinkMetaData MetaData; 
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// Size: 0x0c (Inherited: 0x00)
struct FLiveLinkCurveElement {
	UPROPERTY(BlueprintReadWrite) FName CurveName; 
	UPROPERTY(BlueprintReadWrite) float CurveValue; 
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkTimeCode_Base_DEPRECATED {
	UPROPERTY(BlueprintReadWrite) int32_t Seconds; 
	UPROPERTY(BlueprintReadWrite) int32_t Frames; 
	UPROPERTY(BlueprintReadWrite) FLiveLinkFrameRate FrameRate; 
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// Size: 0x08 (Inherited: 0x08)
struct FLiveLinkFrameRate : FFrameRate {
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// Size: 0x10 (Inherited: 0x10)
struct FLiveLinkTimeCode : FLiveLinkTimeCode_Base_DEPRECATED {
};

// ScriptStruct LiveLinkInterface.LiveLinkTime
// Size: 0x18 (Inherited: 0x00)
struct FLiveLinkTime {
	UPROPERTY(BlueprintReadWrite) double WorldTime; 
	UPROPERTY(BlueprintReadWrite) FQualifiedFrameTime SceneTime; 
};

