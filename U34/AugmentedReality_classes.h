// Class AugmentedReality.ARSessionConfig
// Size: 0xa8 (Inherited: 0x30)
struct UARSessionConfig : UDataAsset {
	bool bGenerateMeshDataFromTrackedGeometry; // 0x30(0x01)
	bool bGenerateCollisionForMeshData; // 0x31(0x01)
	bool bGenerateNavMeshForMeshData; // 0x32(0x01)
	bool bUseMeshDataForOcclusion; // 0x33(0x01)
	bool bRenderMeshDataInWireframe; // 0x34(0x01)
	bool bTrackSceneObjects; // 0x35(0x01)
	bool bUsePersonSegmentationForOcclusion; // 0x36(0x01)
	enum class EARWorldAlignment WorldAlignment; // 0x37(0x01)
	enum class EARSessionType SessionType; // 0x38(0x01)
	enum class EARPlaneDetectionMode PlaneDetectionMode; // 0x39(0x01)
	bool bHorizontalPlaneDetection; // 0x3a(0x01)
	bool bVerticalPlaneDetection; // 0x3b(0x01)
	bool bEnableAutoFocus; // 0x3c(0x01)
	enum class EARLightEstimationMode LightEstimationMode; // 0x3d(0x01)
	enum class EARFrameSyncMode FrameSyncMode; // 0x3e(0x01)
	bool bEnableAutomaticCameraOverlay; // 0x3f(0x01)
	bool bEnableAutomaticCameraTracking; // 0x40(0x01)
	bool bResetCameraTracking; // 0x41(0x01)
	bool bResetTrackedObjects; // 0x42(0x01)
	char UnknownData_43[0x5]; // 0x43(0x05)
	struct TArray<struct UARCandidateImage*> CandidateImages; // 0x48(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x58(0x04)
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
	struct TArray<char> WorldMapData; // 0x60(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects; // 0x70(0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x80(0x0c)
	enum class EARFaceTrackingDirection FaceTrackingDirection; // 0x8c(0x01)
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8d(0x01)
	char UnknownData_8E[0x2]; // 0x8e(0x02)
	struct TArray<char> SerializedARCandidateImageDatabase; // 0x90(0x10)
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)

	bool ShouldResetTrackedObjects(); // Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	bool ShouldResetCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	bool ShouldRenderCameraOverlay(); // Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	bool ShouldEnableCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	bool ShouldEnableAutoFocus(); // Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	void SetWorldMapData(struct TArray<char> WorldMapData); // Function AugmentedReality.ARSessionConfig.SetWorldMapData
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature); // Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	void SetResetTrackedObjects(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	void SetResetCameraTracking(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	void SetEnableAutoFocus(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat); // Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	void SetCandidateObjectList(struct TArray<struct UARCandidateObject*> InCandidateObjects); // Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
	struct TArray<char> GetWorldMapData(); // Function AugmentedReality.ARSessionConfig.GetWorldMapData
	enum class EARWorldAlignment GetWorldAlignment(); // Function AugmentedReality.ARSessionConfig.GetWorldAlignment
	enum class EARSessionType GetSessionType(); // Function AugmentedReality.ARSessionConfig.GetSessionType
	enum class EARPlaneDetectionMode GetPlaneDetectionMode(); // Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	int32_t GetMaxNumSimultaneousImagesTracked(); // Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	enum class EARLightEstimationMode GetLightEstimationMode(); // Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
	enum class EARFrameSyncMode GetFrameSyncMode(); // Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	enum class EARFaceTrackingDirection GetFaceTrackingDirection(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType(); // Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature(); // Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	struct FARVideoFormat GetDesiredVideoFormat(); // Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	struct TArray<struct UARCandidateObject*> GetCandidateObjectList(); // Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
	struct TArray<struct UARCandidateImage*> GetCandidateImageList(); // Function AugmentedReality.ARSessionConfig.GetCandidateImageList
	void AddCandidateObject(struct UARCandidateObject* CandidateObject); // Function AugmentedReality.ARSessionConfig.AddCandidateObject
	void AddCandidateImage(struct UARCandidateImage* NewCandidateImage); // Function AugmentedReality.ARSessionConfig.AddCandidateImage
};

// Class AugmentedReality.ARLightEstimate
// Size: 0x28 (Inherited: 0x28)
struct UARLightEstimate : UObject {
};

// Class AugmentedReality.ARBasicLightEstimate
// Size: 0x40 (Inherited: 0x28)
struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x28(0x04)
	float AmbientColorTemperatureKelvin; // 0x2c(0x04)
	struct FLinearColor AmbientColor; // 0x30(0x10)

	float GetAmbientIntensityLumens(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	float GetAmbientColorTemperatureKelvin(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	struct FLinearColor GetAmbientColor(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
};

// Class AugmentedReality.ARCandidateImage
// Size: 0x58 (Inherited: 0x30)
struct UARCandidateImage : UDataAsset {
	struct UTexture2D* CandidateTexture; // 0x30(0x08)
	struct FString FriendlyName; // 0x38(0x10)
	float Width; // 0x48(0x04)
	float Height; // 0x4c(0x04)
	enum class EARCandidateImageOrientation Orientation; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)

	float GetPhysicalWidth(); // Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
	float GetPhysicalHeight(); // Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
	enum class EARCandidateImageOrientation GetOrientation(); // Function AugmentedReality.ARCandidateImage.GetOrientation
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateImage.GetFriendlyName
	struct UTexture2D* GetCandidateTexture(); // Function AugmentedReality.ARCandidateImage.GetCandidateTexture
};

// Class AugmentedReality.ARBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARBlueprintLibrary : UBlueprintFunctionLibrary {

	void UnpinComponent(struct USceneComponent* ComponentToUnpin); // Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
	void StopARSession(); // Function AugmentedReality.ARBlueprintLibrary.StopARSession
	void StartARSession(struct UARSessionConfig* SessionConfig); // Function AugmentedReality.ARBlueprintLibrary.StartARSession
	void SetAlignmentTransform(struct FTransform InAlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	void RemovePin(struct UARPin* PinToRemove); // Function AugmentedReality.ARBlueprintLibrary.RemovePin
	struct UARPin* PinComponentToTraceResult(struct USceneComponent* ComponentToPin, struct FARTraceResult TraceResult, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	struct UARPin* PinComponent(struct USceneComponent* ComponentToPin, struct FTransform PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponent
	void PauseARSession(); // Function AugmentedReality.ARBlueprintLibrary.PauseARSession
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	bool IsSessionTypeSupported(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	bool IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	bool IsARSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARSupported
	enum class EARWorldMappingState GetWorldMappingStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	enum class EARTrackingQualityReason GetTrackingQualityReason(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	enum class EARTrackingQuality GetTrackingQuality(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	struct UARSessionConfig* GetSessionConfig(); // Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	struct TArray<struct FVector> GetPointCloud(); // Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
	struct UARTextureCameraImage* GetPersonSegmentationImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	struct UARTextureCameraImage* GetPersonSegmentationDepthImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	struct UARLightEstimate* GetCurrentLightEstimate(); // Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	struct UARTextureCameraImage* GetCameraImage(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
	struct UARTextureCameraDepth* GetCameraDepth(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	struct FARSessionStatus GetARSessionStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	struct TArray<struct UARTrackedPose*> GetAllTrackedPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	struct TArray<struct UARTrackedPoint*> GetAllTrackedPoints(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	struct TArray<struct UARPlaneGeometry*> GetAllTrackedPlanes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	struct TArray<struct UARTrackedImage*> GetAllTrackedImages(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	struct TArray<struct UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	struct TArray<struct FARPose2D> GetAllTracked2DPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	struct TArray<struct UARPin*> GetAllPins(); // Function AugmentedReality.ARBlueprintLibrary.GetAllPins
	struct TArray<struct UARTrackedGeometry*> GetAllGeometries(); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	void DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	void DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	struct UARCandidateImage* AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth); // Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	bool AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
};

// Class AugmentedReality.ARTraceResultLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultLibrary : UBlueprintFunctionLibrary {

	struct UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	enum class EARLineTraceChannels GetTraceChannel(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	float GetDistanceFromCamera(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size: 0x50 (Inherited: 0x30)
struct UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase {
	char UnknownData_30[0x20]; // 0x30(0x20)
};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x80 (Inherited: 0x50)
struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	char UnknownData_70[0x10]; // 0x70(0x10)

	struct UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(struct UObject* WorldContextObject); // Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0x98 (Inherited: 0x50)
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	char UnknownData_70[0x28]; // 0x70(0x28)

	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
};

// Class AugmentedReality.AROriginActor
// Size: 0x220 (Inherited: 0x220)
struct AAROriginActor : AActor {
};

// Class AugmentedReality.ARPin
// Size: 0xf0 (Inherited: 0x28)
struct UARPin : UObject {
	struct UARTrackedGeometry* TrackedGeometry; // 0x28(0x08)
	struct USceneComponent* PinnedComponent; // 0x30(0x08)
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char UnknownData_A1[0x1f]; // 0xa1(0x1f)
	struct FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnARTransformUpdated; // 0xd0(0x10)
	char UnknownData_E0[0x10]; // 0xe0(0x10)

	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARPin.GetTrackingState
	struct UARTrackedGeometry* GetTrackedGeometry(); // Function AugmentedReality.ARPin.GetTrackedGeometry
	struct USceneComponent* GetPinnedComponent(); // Function AugmentedReality.ARPin.GetPinnedComponent
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARPin.GetLocalToWorldTransform
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARPin.GetLocalToTrackingTransform
	struct FName GetDebugName(); // Function AugmentedReality.ARPin.GetDebugName
	void DebugDraw(struct UWorld* World, struct FLinearColor Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARPin.DebugDraw
};

// Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x370 (Inherited: 0x308)
struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x308(0x04)
	char UnknownData_30C[0x64]; // 0x30c(0x64)

	void SetPreviewImageData(struct TArray<char> ImageData); // Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	void SetARWorldSharingIsReady(); // Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	void SetARSharedWorldData(struct TArray<char> ARWorldData); // Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	struct AARSharedWorldGameState* GetARSharedWorldGameState(); // Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
};

// Class AugmentedReality.ARSharedWorldGameState
// Size: 0x2c8 (Inherited: 0x290)
struct AARSharedWorldGameState : AGameState {
	struct TArray<char> PreviewImageData; // 0x290(0x10)
	struct TArray<char> ARWorldData; // 0x2a0(0x10)
	int32_t PreviewImageBytesTotal; // 0x2b0(0x04)
	int32_t ARWorldBytesTotal; // 0x2b4(0x04)
	int32_t PreviewImageBytesDelivered; // 0x2b8(0x04)
	int32_t ARWorldBytesDelivered; // 0x2bc(0x04)
	char UnknownData_2C0[0x8]; // 0x2c0(0x08)

	void K2_OnARWorldMapIsReady(); // Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
};

// Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x578 (Inherited: 0x570)
struct AARSharedWorldPlayerController : APlayerController {
	char UnknownData_570[0x8]; // 0x570(0x08)

	void ServerMarkReadyForReceiving(); // Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	void ClientUpdatePreviewImageData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	void ClientUpdateARWorldData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize); // Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
};

// Class AugmentedReality.ARSkyLight
// Size: 0x240 (Inherited: 0x230)
struct AARSkyLight : ASkyLight {
	struct UAREnvironmentCaptureProbe* CaptureProbe; // 0x230(0x08)
	char UnknownData_238[0x8]; // 0x238(0x08)

	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe); // Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
};

// Class AugmentedReality.ARTexture
// Size: 0xd8 (Inherited: 0xb8)
struct UARTexture : UTexture {
	enum class EARTextureType TextureType; // 0xb8(0x01)
	char UnknownData_B9[0x3]; // 0xb9(0x03)
	float Timestamp; // 0xbc(0x04)
	struct FGuid ExternalTextureGuid; // 0xc0(0x10)
	struct FVector2D Size; // 0xd0(0x08)
};

// Class AugmentedReality.ARTextureCameraImage
// Size: 0xd8 (Inherited: 0xd8)
struct UARTextureCameraImage : UARTexture {
};

// Class AugmentedReality.ARTextureCameraDepth
// Size: 0xe0 (Inherited: 0xd8)
struct UARTextureCameraDepth : UARTexture {
	enum class EARDepthQuality DepthQuality; // 0xd8(0x01)
	enum class EARDepthAccuracy DepthAccuracy; // 0xd9(0x01)
	bool bIsTemporallySmoothed; // 0xda(0x01)
	char UnknownData_DB[0x5]; // 0xdb(0x05)
};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x130 (Inherited: 0x110)
struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	enum class EARTextureType TextureType; // 0x110(0x01)
	char UnknownData_111[0x3]; // 0x111(0x03)
	float Timestamp; // 0x114(0x04)
	struct FGuid ExternalTextureGuid; // 0x118(0x10)
	struct FVector2D Size; // 0x128(0x08)
};

// Class AugmentedReality.ARTraceResultDummy
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultDummy : UObject {
};

// Class AugmentedReality.ARTrackedGeometry
// Size: 0xf0 (Inherited: 0x28)
struct UARTrackedGeometry : UObject {
	struct FGuid UniqueId; // 0x28(0x10)
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char UnknownData_A1[0xf]; // 0xa1(0x0f)
	struct UMRMeshComponent* UnderlyingMesh; // 0xb0(0x08)
	enum class EARObjectClassification ObjectClassification; // 0xb8(0x01)
	char UnknownData_B9[0x17]; // 0xb9(0x17)
	int32_t LastUpdateFrameNumber; // 0xd0(0x04)
	char UnknownData_D4[0xc]; // 0xd4(0x0c)
	struct FName DebugName; // 0xe0(0x08)
	char UnknownData_E8[0x8]; // 0xe8(0x08)

	bool IsTracked(); // Function AugmentedReality.ARTrackedGeometry.IsTracked
	struct UMRMeshComponent* GetUnderlyingMesh(); // Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARTrackedGeometry.GetTrackingState
	enum class EARObjectClassification GetObjectClassification(); // Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	float GetLastUpdateTimestamp(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	int32_t GetLastUpdateFrameNumber(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	struct FName GetDebugName(); // Function AugmentedReality.ARTrackedGeometry.GetDebugName
};

// Class AugmentedReality.ARPlaneGeometry
// Size: 0x120 (Inherited: 0xf0)
struct UARPlaneGeometry : UARTrackedGeometry {
	enum class EARPlaneOrientation Orientation; // 0xe8(0x01)
	struct FVector Center; // 0xec(0x0c)
	struct FVector Extent; // 0xf8(0x0c)
	char UnknownData_109[0xf]; // 0x109(0x0f)
	struct UARPlaneGeometry* SubsumedBy; // 0x118(0x08)

	struct UARPlaneGeometry* GetSubsumedBy(); // Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	enum class EARPlaneOrientation GetOrientation(); // Function AugmentedReality.ARPlaneGeometry.GetOrientation
	struct FVector GetExtent(); // Function AugmentedReality.ARPlaneGeometry.GetExtent
	struct FVector GetCenter(); // Function AugmentedReality.ARPlaneGeometry.GetCenter
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace(); // Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
};

// Class AugmentedReality.ARTrackedPoint
// Size: 0xf0 (Inherited: 0xf0)
struct UARTrackedPoint : UARTrackedGeometry {
};

// Class AugmentedReality.ARTrackedImage
// Size: 0x100 (Inherited: 0xf0)
struct UARTrackedImage : UARTrackedGeometry {
	struct UARCandidateImage* DetectedImage; // 0xe8(0x08)
	struct FVector2D EstimatedSize; // 0xf0(0x08)

	struct FVector2D GetEstimateSize(); // Function AugmentedReality.ARTrackedImage.GetEstimateSize
	struct UARCandidateImage* GetDetectedImage(); // Function AugmentedReality.ARTrackedImage.GetDetectedImage
};

// Class AugmentedReality.ARTrackedQRCode
// Size: 0x110 (Inherited: 0x100)
struct UARTrackedQRCode : UARTrackedImage {
	struct FString QRCode; // 0xf8(0x10)
	int32_t Version; // 0x108(0x04)
};

// Class AugmentedReality.ARFaceGeometry
// Size: 0x1e0 (Inherited: 0xf0)
struct UARFaceGeometry : UARTrackedGeometry {
	struct FVector LookAtTarget; // 0xe8(0x0c)
	bool bIsTracked; // 0xf4(0x01)
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes; // 0xf8(0x50)
	char UnknownData_14D[0x93]; // 0x14d(0x93)

	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape); // Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	struct TMap<enum class EARFaceBlendShape, float> GetBlendShapes(); // Function AugmentedReality.ARFaceGeometry.GetBlendShapes
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x100 (Inherited: 0xf0)
struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	char UnknownData_F0[0x8]; // 0xf0(0x08)
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0xf8(0x08)

	struct FVector GetExtent(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	struct UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
};

// Class AugmentedReality.ARTrackedObject
// Size: 0xf0 (Inherited: 0xf0)
struct UARTrackedObject : UARTrackedGeometry {
	struct UARCandidateObject* DetectedObject; // 0xe8(0x08)

	struct UARCandidateObject* GetDetectedObject(); // Function AugmentedReality.ARTrackedObject.GetDetectedObject
};

// Class AugmentedReality.ARTrackedPose
// Size: 0x140 (Inherited: 0xf0)
struct UARTrackedPose : UARTrackedGeometry {
	char UnknownData_F0[0x50]; // 0xf0(0x50)

	struct FARPose3D GetTrackedPoseData(); // Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
};

// Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x200 (Inherited: 0xb0)
struct UARTrackableNotifyComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAddTrackedGeometry; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPlane; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x100(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPoint; // 0x110(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x120(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x130(0x10)
	struct FMulticastInlineDelegate OnAddTrackedImage; // 0x140(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedImage; // 0x150(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedImage; // 0x160(0x10)
	struct FMulticastInlineDelegate OnAddTrackedFace; // 0x170(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedFace; // 0x180(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedFace; // 0x190(0x10)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1c0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedObject; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedObject; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedObject; // 0x1f0(0x10)
};

// Class AugmentedReality.ARTypesDummyClass
// Size: 0x28 (Inherited: 0x28)
struct UARTypesDummyClass : UObject {
};

// Class AugmentedReality.ARCandidateObject
// Size: 0x70 (Inherited: 0x30)
struct UARCandidateObject : UDataAsset {
	struct TArray<char> CandidateObjectData; // 0x30(0x10)
	struct FString FriendlyName; // 0x40(0x10)
	struct FBox BoundingBox; // 0x50(0x1c)
	char UnknownData_6C[0x4]; // 0x6c(0x04)

	void SetFriendlyName(struct FString NewName); // Function AugmentedReality.ARCandidateObject.SetFriendlyName
	void SetCandidateObjectData(struct TArray<char> InCandidateObject); // Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
	void SetBoundingBox(struct FBox InBoundingBox); // Function AugmentedReality.ARCandidateObject.SetBoundingBox
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateObject.GetFriendlyName
	struct TArray<char> GetCandidateObjectData(); // Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
	struct FBox GetBoundingBox(); // Function AugmentedReality.ARCandidateObject.GetBoundingBox
};

