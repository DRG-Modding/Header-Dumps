#ifndef UE4SS_SDK_AugmentedReality_HPP
#define UE4SS_SDK_AugmentedReality_HPP

#include "AugmentedReality_enums.hpp"

class UARBlueprintLibrary : UBlueprintFunctionLibrary
{

    void UnpinComponent(USceneComponent* ComponentToUnpin);
    void StopARSession();
    void StartARSession(UARSessionConfig* SessionConfig);
    void SetAlignmentTransform(const FTransform& InAlignmentTransform);
    void RemovePin(UARPin* PinToRemove);
    UARPin* PinComponentToTraceResult(USceneComponent* ComponentToPin, const FARTraceResult& TraceResult, const FName DebugName);
    UARPin* PinComponent(USceneComponent* ComponentToPin, const FTransform& PinToWorldTransform, UARTrackedGeometry* TrackedGeometry, const FName DebugName);
    void PauseARSession();
    TArray<FARTraceResult> LineTraceTrackedObjects3D(const FVector Start, const FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    TArray<FARTraceResult> LineTraceTrackedObjects(const FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    bool IsSessionTypeSupported(EARSessionType SessionType);
    bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
    bool IsARSupported();
    EARWorldMappingState GetWorldMappingStatus();
    EARTrackingQualityReason GetTrackingQualityReason();
    EARTrackingQuality GetTrackingQuality();
    TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);
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
}

class UARTraceResultLibrary : UBlueprintFunctionLibrary
{

    UARTrackedGeometry* GetTrackedGeometry(const FARTraceResult& TraceResult);
    EARLineTraceChannels GetTraceChannel(const FARTraceResult& TraceResult);
    FTransform GetLocalToWorldTransform(const FARTraceResult& TraceResult);
    FTransform GetLocalToTrackingTransform(const FARTraceResult& TraceResult);
    float GetDistanceFromCamera(const FARTraceResult& TraceResult);
}

class UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase
{
}

class UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{
    FARSaveWorldAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    void ARSaveWorldPin(const TArray<uint8>& SavedWorld);
    FARSaveWorldAsyncTaskBlueprintProxyOnFailed OnFailed;
    void ARSaveWorldPin(const TArray<uint8>& SavedWorld);

    UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(UObject* WorldContextObject);
}

class UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    void ARGetCandidateObjectPin(UARCandidateObject* SavedObject);
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnFailed OnFailed;
    void ARGetCandidateObjectPin(UARCandidateObject* SavedObject);

    UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(UObject* WorldContextObject, FVector Location, FVector Extent);
}

class UARLightEstimate : UObject
{
}

class UARBasicLightEstimate : UARLightEstimate
{
    float AmbientIntensityLumens;
    float AmbientColorTemperatureKelvin;
    FLinearColor AmbientColor;

    float GetAmbientIntensityLumens();
    float GetAmbientColorTemperatureKelvin();
    FLinearColor GetAmbientColor();
}

class AAROriginActor : AActor
{
}

class UARPin : UObject
{
    UARTrackedGeometry* TrackedGeometry;
    USceneComponent* PinnedComponent;
    FTransform LocalToTrackingTransform;
    FTransform LocalToAlignedTrackingTransform;
    EARTrackingState TrackingState;
    FARPinOnARTrackingStateChanged OnARTrackingStateChanged;
    void OnARTrackingStateChanged(EARTrackingState NewTrackingState);
    FARPinOnARTransformUpdated OnARTransformUpdated;
    void OnARTransformUpdated(const FTransform& OldToNewTransform);

    EARTrackingState GetTrackingState();
    UARTrackedGeometry* GetTrackedGeometry();
    USceneComponent* GetPinnedComponent();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    FName GetDebugName();
    void DebugDraw(UWorld* World, const FLinearColor& Color, float Scale, float PersistForSeconds);
}

class UARSessionConfig : UDataAsset
{
    bool bGenerateMeshDataFromTrackedGeometry;
    bool bGenerateCollisionForMeshData;
    bool bGenerateNavMeshForMeshData;
    bool bUseMeshDataForOcclusion;
    bool bRenderMeshDataInWireframe;
    bool bTrackSceneObjects;
    bool bUsePersonSegmentationForOcclusion;
    EARWorldAlignment WorldAlignment;
    EARSessionType SessionType;
    EARPlaneDetectionMode PlaneDetectionMode;
    bool bHorizontalPlaneDetection;
    bool bVerticalPlaneDetection;
    bool bEnableAutoFocus;
    EARLightEstimationMode LightEstimationMode;
    EARFrameSyncMode FrameSyncMode;
    bool bEnableAutomaticCameraOverlay;
    bool bEnableAutomaticCameraTracking;
    bool bResetCameraTracking;
    bool bResetTrackedObjects;
    TArray<UARCandidateImage*> CandidateImages;
    int32 MaxNumSimultaneousImagesTracked;
    EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType;
    TArray<uint8> WorldMapData;
    TArray<UARCandidateObject*> CandidateObjects;
    FARVideoFormat DesiredVideoFormat;
    EARFaceTrackingDirection FaceTrackingDirection;
    EARFaceTrackingUpdate FaceTrackingUpdate;
    TArray<uint8> SerializedARCandidateImageDatabase;
    EARSessionTrackingFeature EnabledSessionTrackingFeature;

    bool ShouldResetTrackedObjects();
    bool ShouldResetCameraTracking();
    bool ShouldRenderCameraOverlay();
    bool ShouldEnableCameraTracking();
    bool ShouldEnableAutoFocus();
    void SetWorldMapData(TArray<uint8> WorldMapData);
    void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);
    void SetResetTrackedObjects(bool bNewValue);
    void SetResetCameraTracking(bool bNewValue);
    void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);
    void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);
    void SetEnableAutoFocus(bool bNewValue);
    void SetDesiredVideoFormat(FARVideoFormat NewFormat);
    void SetCandidateObjectList(const TArray<UARCandidateObject*>& InCandidateObjects);
    TArray<uint8> GetWorldMapData();
    EARWorldAlignment GetWorldAlignment();
    EARSessionType GetSessionType();
    EARPlaneDetectionMode GetPlaneDetectionMode();
    int32 GetMaxNumSimultaneousImagesTracked();
    EARLightEstimationMode GetLightEstimationMode();
    EARFrameSyncMode GetFrameSyncMode();
    EARFaceTrackingUpdate GetFaceTrackingUpdate();
    EARFaceTrackingDirection GetFaceTrackingDirection();
    EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
    EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
    FARVideoFormat GetDesiredVideoFormat();
    TArray<UARCandidateObject*> GetCandidateObjectList();
    TArray<UARCandidateImage*> GetCandidateImageList();
    void AddCandidateObject(UARCandidateObject* CandidateObject);
    void AddCandidateImage(UARCandidateImage* NewCandidateImage);
}

class AARSharedWorldGameMode : UGameMode
{
    int32 BufferSizePerChunk;

    void SetPreviewImageData(TArray<uint8> ImageData);
    void SetARWorldSharingIsReady();
    void SetARSharedWorldData(TArray<uint8> ARWorldData);
    AARSharedWorldGameState* GetARSharedWorldGameState();
}

class AARSharedWorldGameState : UGameState
{
    TArray<uint8> PreviewImageData;
    TArray<uint8> ARWorldData;
    int32 PreviewImageBytesTotal;
    int32 ARWorldBytesTotal;
    int32 PreviewImageBytesDelivered;
    int32 ARWorldBytesDelivered;

    void K2_OnARWorldMapIsReady();
}

class AARSharedWorldPlayerController : UPlayerController
{

    void ServerMarkReadyForReceiving();
    void ClientUpdatePreviewImageData(int32 Offset, const TArray<uint8>& Buffer);
    void ClientUpdateARWorldData(int32 Offset, const TArray<uint8>& Buffer);
    void ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize);
}

class AARSkyLight : USkyLight
{
    UAREnvironmentCaptureProbe* CaptureProbe;

    void SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe);
}

class UARTexture : UTexture
{
    EARTextureType TextureType;
    float Timestamp;
    FGuid ExternalTextureGuid;
    FVector2D Size;
}

class UARTextureCameraImage : UARTexture
{
}

class UARTextureCameraDepth : UARTexture
{
    EARDepthQuality DepthQuality;
    EARDepthAccuracy DepthAccuracy;
    bool bIsTemporallySmoothed;
}

class UAREnvironmentCaptureProbeTexture : UTextureCube
{
    EARTextureType TextureType;
    float Timestamp;
    FGuid ExternalTextureGuid;
    FVector2D Size;
}

class UARTraceResultDummy : UObject
{
}

class UARTrackedGeometry : UObject
{
    FGuid UniqueId;
    FTransform LocalToTrackingTransform;
    FTransform LocalToAlignedTrackingTransform;
    EARTrackingState TrackingState;
    UMRMeshComponent* UnderlyingMesh;
    EARObjectClassification ObjectClassification;
    int32 LastUpdateFrameNumber;
    FName DebugName;

    bool IsTracked();
    UMRMeshComponent* GetUnderlyingMesh();
    EARTrackingState GetTrackingState();
    EARObjectClassification GetObjectClassification();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    float GetLastUpdateTimestamp();
    int32 GetLastUpdateFrameNumber();
    FName GetDebugName();
}

class UARPlaneGeometry : UARTrackedGeometry
{
    EARPlaneOrientation Orientation;
    FVector Center;
    FVector Extent;
    UARPlaneGeometry* SubsumedBy;

    UARPlaneGeometry* GetSubsumedBy();
    EARPlaneOrientation GetOrientation();
    FVector GetExtent();
    FVector GetCenter();
    TArray<FVector> GetBoundaryPolygonInLocalSpace();
}

class UARTrackedPoint : UARTrackedGeometry
{
}

class UARTrackedImage : UARTrackedGeometry
{
    UARCandidateImage* DetectedImage;
    FVector2D EstimatedSize;

    FVector2D GetEstimateSize();
    UARCandidateImage* GetDetectedImage();
}

class UARTrackedQRCode : UARTrackedImage
{
    FString QRCode;
    int32 Version;
}

class UARFaceGeometry : UARTrackedGeometry
{
    FVector LookAtTarget;
    bool bIsTracked;
    TMap<EARFaceBlendShape, float> BlendShapes;

    FTransform GetWorldSpaceEyeTransform(EAREye eye);
    FTransform GetLocalSpaceEyeTransform(EAREye eye);
    float GetBlendShapeValue(EARFaceBlendShape BlendShape);
    TMap<EARFaceBlendShape, float> GetBlendShapes();
}

class UAREnvironmentCaptureProbe : UARTrackedGeometry
{
    UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;

    FVector GetExtent();
    UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
}

class UARTrackedObject : UARTrackedGeometry
{
    UARCandidateObject* DetectedObject;

    UARCandidateObject* GetDetectedObject();
}

class UARTrackedPose : UARTrackedGeometry
{

    FARPose3D GetTrackedPoseData();
}

class UARTrackableNotifyComponent : UActorComponent
{
    FARTrackableNotifyComponentOnAddTrackedGeometry OnAddTrackedGeometry;
    void TrackableDelegate(UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnUpdateTrackedGeometry OnUpdateTrackedGeometry;
    void TrackableDelegate(UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnRemoveTrackedGeometry OnRemoveTrackedGeometry;
    void TrackableDelegate(UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnAddTrackedPlane OnAddTrackedPlane;
    void TrackablePlaneDelegate(UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnUpdateTrackedPlane OnUpdateTrackedPlane;
    void TrackablePlaneDelegate(UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnRemoveTrackedPlane OnRemoveTrackedPlane;
    void TrackablePlaneDelegate(UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnAddTrackedPoint OnAddTrackedPoint;
    void TrackablePointDelegate(UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnUpdateTrackedPoint OnUpdateTrackedPoint;
    void TrackablePointDelegate(UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnRemoveTrackedPoint OnRemoveTrackedPoint;
    void TrackablePointDelegate(UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnAddTrackedImage OnAddTrackedImage;
    void TrackableImageDelegate(UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnUpdateTrackedImage OnUpdateTrackedImage;
    void TrackableImageDelegate(UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnRemoveTrackedImage OnRemoveTrackedImage;
    void TrackableImageDelegate(UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnAddTrackedFace OnAddTrackedFace;
    void TrackableFaceDelegate(UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnUpdateTrackedFace OnUpdateTrackedFace;
    void TrackableFaceDelegate(UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnRemoveTrackedFace OnRemoveTrackedFace;
    void TrackableFaceDelegate(UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnAddTrackedEnvProbe OnAddTrackedEnvProbe;
    void TrackableEnvProbeDelegate(UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnUpdateTrackedEnvProbe OnUpdateTrackedEnvProbe;
    void TrackableEnvProbeDelegate(UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnRemoveTrackedEnvProbe OnRemoveTrackedEnvProbe;
    void TrackableEnvProbeDelegate(UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnAddTrackedObject OnAddTrackedObject;
    void TrackableObjectDelegate(UARTrackedObject* TrackedObject);
    FARTrackableNotifyComponentOnUpdateTrackedObject OnUpdateTrackedObject;
    void TrackableObjectDelegate(UARTrackedObject* TrackedObject);
    FARTrackableNotifyComponentOnRemoveTrackedObject OnRemoveTrackedObject;
    void TrackableObjectDelegate(UARTrackedObject* TrackedObject);
}

class UARTypesDummyClass : UObject
{
}

class UARCandidateImage : UDataAsset
{
    UTexture2D* CandidateTexture;
    FString FriendlyName;
    float Width;
    float Height;
    EARCandidateImageOrientation Orientation;

    float GetPhysicalWidth();
    float GetPhysicalHeight();
    EARCandidateImageOrientation GetOrientation();
    FString GetFriendlyName();
    UTexture2D* GetCandidateTexture();
}

class UARCandidateObject : UDataAsset
{
    TArray<uint8> CandidateObjectData;
    FString FriendlyName;
    FBox BoundingBox;

    void SetFriendlyName(FString NewName);
    void SetCandidateObjectData(const TArray<uint8>& InCandidateObject);
    void SetBoundingBox(const FBox& InBoundingBox);
    FString GetFriendlyName();
    TArray<uint8> GetCandidateObjectData();
    FBox GetBoundingBox();
}

struct UARSharedWorldReplicationState
{
    int32 PreviewImageOffset;
    int32 ARWorldOffset;
}

struct UARTraceResult
{
    float DistanceFromCamera;
    EARLineTraceChannels TraceChannel;
    FTransform LocalToTrackingTransform;
    UARTrackedGeometry* TrackedGeometry;
}

struct UARPose3D
{
    FARSkeletonDefinition SkeletonDefinition;
    TArray<FTransform> JointTransforms;
    TArray<bool> IsJointTracked;
    EARJointTransformSpace JointTransformSpace;
}

struct UARSkeletonDefinition
{
    int32 NumJoints;
    TArray<FName> JointNames;
    TArray<int32> ParentIndices;
}

struct UARPose2D
{
    FARSkeletonDefinition SkeletonDefinition;
    TArray<FVector2D> JointLocations;
    TArray<bool> IsJointTracked;
}

struct UARVideoFormat
{
    int32 FPS;
    int32 Width;
    int32 Height;
}

struct UARSessionStatus
{
    FString AdditionalInfo;
    EARSessionStatus Status;
}

#endif
