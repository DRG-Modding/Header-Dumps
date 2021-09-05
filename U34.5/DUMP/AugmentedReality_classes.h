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
	TArray<UARCandidateImage*> CandidateImages; // 0x48(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x58(0x04)
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5c(0x01)
	TArray<char> WorldMapData; // 0x60(0x10)
	TArray<UARCandidateObject*> CandidateObjects; // 0x70(0x10)
	FARVideoFormat DesiredVideoFormat; // 0x80(0x0c)
	enum class EARFaceTrackingDirection FaceTrackingDirection; // 0x8c(0x01)
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8d(0x01)
	TArray<char> SerializedARCandidateImageDatabase; // 0x90(0x10)
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa0(0x01)

	bool ShouldResetTrackedObjects();
	bool ShouldResetCameraTracking();
	bool ShouldRenderCameraOverlay();
	bool ShouldEnableCameraTracking();
	bool ShouldEnableAutoFocus();
	void SetWorldMapData(TArray<char> WorldMapData);
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature);
	void SetResetTrackedObjects(bool bNewValue);
	void SetResetCameraTracking(bool bNewValue);
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate);
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection);
	void SetEnableAutoFocus(bool bNewValue);
	void SetDesiredVideoFormat(FARVideoFormat NewFormat);
	void SetCandidateObjectList(TArray<UARCandidateObject*> InCandidateObjects);
	TArray<char> GetWorldMapData();
	enum class EARWorldAlignment GetWorldAlignment();
	enum class EARSessionType GetSessionType();
	enum class EARPlaneDetectionMode GetPlaneDetectionMode();
	int32_t GetMaxNumSimultaneousImagesTracked();
	enum class EARLightEstimationMode GetLightEstimationMode();
	enum class EARFrameSyncMode GetFrameSyncMode();
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate();
	enum class EARFaceTrackingDirection GetFaceTrackingDirection();
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
	FARVideoFormat GetDesiredVideoFormat();
	TArray<UARCandidateObject*> GetCandidateObjectList();
	TArray<UARCandidateImage*> GetCandidateImageList();
	void AddCandidateObject(UARCandidateObject* CandidateObject);
	void AddCandidateImage(UARCandidateImage* NewCandidateImage);
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
	FLinearColor AmbientColor; // 0x30(0x10)

	float GetAmbientIntensityLumens();
	float GetAmbientColorTemperatureKelvin();
	FLinearColor GetAmbientColor();
};

// Class AugmentedReality.ARCandidateImage
// Size: 0x58 (Inherited: 0x30)
struct UARCandidateImage : UDataAsset {
	UTexture2D* CandidateTexture; // 0x30(0x08)
	FString FriendlyName; // 0x38(0x10)
	float Width; // 0x48(0x04)
	float Height; // 0x4c(0x04)
	enum class EARCandidateImageOrientation Orientation; // 0x50(0x01)

	float GetPhysicalWidth();
	float GetPhysicalHeight();
	enum class EARCandidateImageOrientation GetOrientation();
	FString GetFriendlyName();
	UTexture2D* GetCandidateTexture();
};

// Class AugmentedReality.ARBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARBlueprintLibrary : UBlueprintFunctionLibrary {

	void UnpinComponent(USceneComponent* ComponentToUnpin);
	void StopARSession();
	void StartARSession(UARSessionConfig* SessionConfig);
	void SetAlignmentTransform(FTransform InAlignmentTransform);
	void RemovePin(UARPin* PinToRemove);
	UARPin* PinComponentToTraceResult(USceneComponent* ComponentToPin, FARTraceResult TraceResult, FName DebugName);
	UARPin* PinComponent(USceneComponent* ComponentToPin, FTransform PinToWorldTransform, UARTrackedGeometry* TrackedGeometry, FName DebugName);
	void PauseARSession();
	TArray<FARTraceResult> LineTraceTrackedObjects3D(FVector Start, FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	TArray<FARTraceResult> LineTraceTrackedObjects(FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	bool IsSessionTypeSupported(enum class EARSessionType SessionType);
	bool IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature);
	bool IsARSupported();
	enum class EARWorldMappingState GetWorldMappingStatus();
	enum class EARTrackingQualityReason GetTrackingQualityReason();
	enum class EARTrackingQuality GetTrackingQuality();
	TArray<FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType);
	UARSessionConfig* GetSessionConfig();
	TArray<FVector> GetPointCloud();
	UARTextureCameraImage* GetPersonSegmentationImage();
	UARTextureCameraImage* GetPersonSegmentationDepthImage();
	UARLightEstimate* GetCurrentLightEstimate();
	UARTextureCameraImage* GetCameraImage();
	UARTextureCameraDepth* GetCameraDepth();
	FARSessionStatus GetARSessionStatus();
	TArray<UARTrackedPose*> GetAllTrackedPoses();
	TArray<UARTrackedPoint*> GetAllTrackedPoints();
	TArray<UARPlaneGeometry*> GetAllTrackedPlanes();
	TArray<UARTrackedImage*> GetAllTrackedImages();
	TArray<UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
	TArray<FARPose2D> GetAllTracked2DPoses();
	TArray<UARPin*> GetAllPins();
	TArray<UARTrackedGeometry*> GetAllGeometries();
	void DebugDrawTrackedGeometry(UARTrackedGeometry* TrackedGeometry, UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds);
	void DebugDrawPin(UARPin* ARPin, UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds);
	UARCandidateImage* AddRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth);
	bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);
};

// Class AugmentedReality.ARTraceResultLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultLibrary : UBlueprintFunctionLibrary {

	UARTrackedGeometry* GetTrackedGeometry(FARTraceResult TraceResult);
	enum class EARLineTraceChannels GetTraceChannel(FARTraceResult TraceResult);
	FTransform GetLocalToWorldTransform(FARTraceResult TraceResult);
	FTransform GetLocalToTrackingTransform(FARTraceResult TraceResult);
	float GetDistanceFromCamera(FARTraceResult TraceResult);
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size: 0x50 (Inherited: 0x30)
struct UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase {
};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x80 (Inherited: 0x50)
struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	FMulticastInlineDelegate OnFailed; // 0x60(0x10)

	UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(UObject* WorldContextObject);
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0x98 (Inherited: 0x50)
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	FMulticastInlineDelegate OnFailed; // 0x60(0x10)

	UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(UObject* WorldContextObject, FVector Location, FVector Extent);
};

// Class AugmentedReality.AROriginActor
// Size: 0x220 (Inherited: 0x220)
struct AAROriginActor : AActor {
};

// Class AugmentedReality.ARPin
// Size: 0xf0 (Inherited: 0x28)
struct UARPin : UObject {
	UARTrackedGeometry* TrackedGeometry; // 0x28(0x08)
	USceneComponent* PinnedComponent; // 0x30(0x08)
	FTransform LocalToTrackingTransform; // 0x40(0x30)
	FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc0(0x10)
	FMulticastInlineDelegate OnARTransformUpdated; // 0xd0(0x10)

	enum class EARTrackingState GetTrackingState();
	UARTrackedGeometry* GetTrackedGeometry();
	USceneComponent* GetPinnedComponent();
	FTransform GetLocalToWorldTransform();
	FTransform GetLocalToTrackingTransform();
	FName GetDebugName();
	void DebugDraw(UWorld* World, FLinearColor Color, float Scale, float PersistForSeconds);
};

// Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x370 (Inherited: 0x308)
struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x308(0x04)

	void SetPreviewImageData(TArray<char> ImageData);
	void SetARWorldSharingIsReady();
	void SetARSharedWorldData(TArray<char> ARWorldData);
	AARSharedWorldGameState* GetARSharedWorldGameState();
};

// Class AugmentedReality.ARSharedWorldGameState
// Size: 0x2c8 (Inherited: 0x290)
struct AARSharedWorldGameState : AGameState {
	TArray<char> PreviewImageData; // 0x290(0x10)
	TArray<char> ARWorldData; // 0x2a0(0x10)
	int32_t PreviewImageBytesTotal; // 0x2b0(0x04)
	int32_t ARWorldBytesTotal; // 0x2b4(0x04)
	int32_t PreviewImageBytesDelivered; // 0x2b8(0x04)
	int32_t ARWorldBytesDelivered; // 0x2bc(0x04)

	void K2_OnARWorldMapIsReady();
};

// Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x578 (Inherited: 0x570)
struct AARSharedWorldPlayerController : APlayerController {

	void ServerMarkReadyForReceiving();
	void ClientUpdatePreviewImageData(int32_t Offset, TArray<char> Buffer);
	void ClientUpdateARWorldData(int32_t Offset, TArray<char> Buffer);
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize);
};

// Class AugmentedReality.ARSkyLight
// Size: 0x240 (Inherited: 0x230)
struct AARSkyLight : ASkyLight {
	UAREnvironmentCaptureProbe* CaptureProbe; // 0x230(0x08)

	void SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe);
};

// Class AugmentedReality.ARTexture
// Size: 0xd8 (Inherited: 0xb8)
struct UARTexture : UTexture {
	enum class EARTextureType TextureType; // 0xb8(0x01)
	float Timestamp; // 0xbc(0x04)
	FGuid ExternalTextureGuid; // 0xc0(0x10)
	FVector2D Size; // 0xd0(0x08)
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
};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x130 (Inherited: 0x110)
struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	enum class EARTextureType TextureType; // 0x110(0x01)
	float Timestamp; // 0x114(0x04)
	FGuid ExternalTextureGuid; // 0x118(0x10)
	FVector2D Size; // 0x128(0x08)
};

// Class AugmentedReality.ARTraceResultDummy
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultDummy : UObject {
};

// Class AugmentedReality.ARTrackedGeometry
// Size: 0xf0 (Inherited: 0x28)
struct UARTrackedGeometry : UObject {
	FGuid UniqueId; // 0x28(0x10)
	FTransform LocalToTrackingTransform; // 0x40(0x30)
	FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	UMRMeshComponent* UnderlyingMesh; // 0xb0(0x08)
	enum class EARObjectClassification ObjectClassification; // 0xb8(0x01)
	int32_t LastUpdateFrameNumber; // 0xd0(0x04)
	FName DebugName; // 0xe0(0x08)

	bool IsTracked();
	UMRMeshComponent* GetUnderlyingMesh();
	enum class EARTrackingState GetTrackingState();
	enum class EARObjectClassification GetObjectClassification();
	FTransform GetLocalToWorldTransform();
	FTransform GetLocalToTrackingTransform();
	float GetLastUpdateTimestamp();
	int32_t GetLastUpdateFrameNumber();
	FName GetDebugName();
};

// Class AugmentedReality.ARPlaneGeometry
// Size: 0x120 (Inherited: 0xf0)
struct UARPlaneGeometry : UARTrackedGeometry {
	enum class EARPlaneOrientation Orientation; // 0xe8(0x01)
	FVector Center; // 0xec(0x0c)
	FVector Extent; // 0xf8(0x0c)
	UARPlaneGeometry* SubsumedBy; // 0x118(0x08)

	UARPlaneGeometry* GetSubsumedBy();
	enum class EARPlaneOrientation GetOrientation();
	FVector GetExtent();
	FVector GetCenter();
	TArray<FVector> GetBoundaryPolygonInLocalSpace();
};

// Class AugmentedReality.ARTrackedPoint
// Size: 0xf0 (Inherited: 0xf0)
struct UARTrackedPoint : UARTrackedGeometry {
};

// Class AugmentedReality.ARTrackedImage
// Size: 0x100 (Inherited: 0xf0)
struct UARTrackedImage : UARTrackedGeometry {
	UARCandidateImage* DetectedImage; // 0xe8(0x08)
	FVector2D EstimatedSize; // 0xf0(0x08)

	FVector2D GetEstimateSize();
	UARCandidateImage* GetDetectedImage();
};

// Class AugmentedReality.ARTrackedQRCode
// Size: 0x110 (Inherited: 0x100)
struct UARTrackedQRCode : UARTrackedImage {
	FString QRCode; // 0xf8(0x10)
	int32_t Version; // 0x108(0x04)
};

// Class AugmentedReality.ARFaceGeometry
// Size: 0x1e0 (Inherited: 0xf0)
struct UARFaceGeometry : UARTrackedGeometry {
	FVector LookAtTarget; // 0xe8(0x0c)
	bool bIsTracked; // 0xf4(0x01)
	TMap<enum class EARFaceBlendShape, float> BlendShapes; // 0xf8(0x50)

	FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye);
	FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye);
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape);
	TMap<enum class EARFaceBlendShape, float> GetBlendShapes();
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x100 (Inherited: 0xf0)
struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0xf8(0x08)

	FVector GetExtent();
	UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};

// Class AugmentedReality.ARTrackedObject
// Size: 0xf0 (Inherited: 0xf0)
struct UARTrackedObject : UARTrackedGeometry {
	UARCandidateObject* DetectedObject; // 0xe8(0x08)

	UARCandidateObject* GetDetectedObject();
};

// Class AugmentedReality.ARTrackedPose
// Size: 0x140 (Inherited: 0xf0)
struct UARTrackedPose : UARTrackedGeometry {

	FARPose3D GetTrackedPoseData();
};

// Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x200 (Inherited: 0xb0)
struct UARTrackableNotifyComponent : UActorComponent {
	FMulticastInlineDelegate OnAddTrackedGeometry; // 0xb0(0x10)
	FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xc0(0x10)
	FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0xd0(0x10)
	FMulticastInlineDelegate OnAddTrackedPlane; // 0xe0(0x10)
	FMulticastInlineDelegate OnUpdateTrackedPlane; // 0xf0(0x10)
	FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x100(0x10)
	FMulticastInlineDelegate OnAddTrackedPoint; // 0x110(0x10)
	FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x120(0x10)
	FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x130(0x10)
	FMulticastInlineDelegate OnAddTrackedImage; // 0x140(0x10)
	FMulticastInlineDelegate OnUpdateTrackedImage; // 0x150(0x10)
	FMulticastInlineDelegate OnRemoveTrackedImage; // 0x160(0x10)
	FMulticastInlineDelegate OnAddTrackedFace; // 0x170(0x10)
	FMulticastInlineDelegate OnUpdateTrackedFace; // 0x180(0x10)
	FMulticastInlineDelegate OnRemoveTrackedFace; // 0x190(0x10)
	FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1a0(0x10)
	FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1b0(0x10)
	FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1c0(0x10)
	FMulticastInlineDelegate OnAddTrackedObject; // 0x1d0(0x10)
	FMulticastInlineDelegate OnUpdateTrackedObject; // 0x1e0(0x10)
	FMulticastInlineDelegate OnRemoveTrackedObject; // 0x1f0(0x10)
};

// Class AugmentedReality.ARTypesDummyClass
// Size: 0x28 (Inherited: 0x28)
struct UARTypesDummyClass : UObject {
};

// Class AugmentedReality.ARCandidateObject
// Size: 0x70 (Inherited: 0x30)
struct UARCandidateObject : UDataAsset {
	TArray<char> CandidateObjectData; // 0x30(0x10)
	FString FriendlyName; // 0x40(0x10)
	FBox BoundingBox; // 0x50(0x1c)

	void SetFriendlyName(FString NewName);
	void SetCandidateObjectData(TArray<char> InCandidateObject);
	void SetBoundingBox(FBox InBoundingBox);
	FString GetFriendlyName();
	TArray<char> GetCandidateObjectData();
	FBox GetBoundingBox();
};

