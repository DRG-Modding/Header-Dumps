#ifndef UE4SS_SDK_AugmentedReality_HPP
#define UE4SS_SDK_AugmentedReality_HPP

#include "AugmentedReality_enums.hpp"

struct FARTraceResult
{
    float DistanceFromCamera;
    EARLineTraceChannels TraceChannel;
    FTransform LocalToTrackingTransform;
    class UARTrackedGeometry* TrackedGeometry;
};

struct FARVideoFormat
{
    int32 FPS;
    int32 Width;
    int32 Height;
};

struct FARSessionStatus
{
    FString AdditionalInfo;
    EARSessionStatus Status;
};

struct FARSkeletonDefinition
{
    int32 NumJoints;
    TArray<FName> JointNames;
    TArray<int32> ParentIndices;
};

struct FARPose2D
{
    FARSkeletonDefinition SkeletonDefinition;
    TArray<FVector2D> JointLocations;
    TArray<bool> IsJointTracked;
};

class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void UnpinComponent(class USceneComponent* ComponentToUnpin);
    void StopARSession();
    void StartARSession(class UARSessionConfig* SessionConfig);
    void SetAlignmentTransform(const FTransform& InAlignmentTransform);
    void RemovePin(class UARPin* PinToRemove);
    class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, const FARTraceResult& TraceResult, const FName DebugName);
    class UARPin* PinComponent(class USceneComponent* ComponentToPin, const FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const FName DebugName);
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
    class UARSessionConfig* GetSessionConfig();
    TArray<FVector> GetPointCloud();
    class UARTextureCameraImage* GetPersonSegmentationImage();
    class UARTextureCameraImage* GetPersonSegmentationDepthImage();
    class UARLightEstimate* GetCurrentLightEstimate();
    class UARTextureCameraImage* GetCameraImage();
    class UARTextureCameraDepth* GetCameraDepth();
    FARSessionStatus GetARSessionStatus();
    TArray<class UARTrackedPose*> GetAllTrackedPoses();
    TArray<class UARTrackedPoint*> GetAllTrackedPoints();
    TArray<class UARPlaneGeometry*> GetAllTrackedPlanes();
    TArray<class UARTrackedImage*> GetAllTrackedImages();
    TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
    TArray<FARPose2D> GetAllTracked2DPoses();
    TArray<class UARPin*> GetAllPins();
    TArray<class UARTrackedGeometry*> GetAllGeometries();
    void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds);
    void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds);
    class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth);
    bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);
};

class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{

    class UARTrackedGeometry* GetTrackedGeometry(const FARTraceResult& TraceResult);
    EARLineTraceChannels GetTraceChannel(const FARTraceResult& TraceResult);
    FTransform GetLocalToWorldTransform(const FARTraceResult& TraceResult);
    FTransform GetLocalToTrackingTransform(const FARTraceResult& TraceResult);
    float GetDistanceFromCamera(const FARTraceResult& TraceResult);
};

class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
};

class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FARSaveWorldAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    void ARSaveWorldPin(const TArray<uint8>& SavedWorld);
    FARSaveWorldAsyncTaskBlueprintProxyOnFailed OnFailed;
    void ARSaveWorldPin(const TArray<uint8>& SavedWorld);

    class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);
};

class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    void ARGetCandidateObjectPin(class UARCandidateObject* SavedObject);
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnFailed OnFailed;
    void ARGetCandidateObjectPin(class UARCandidateObject* SavedObject);

    class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, FVector Location, FVector Extent);
};

class UARLightEstimate : public UObject
{
};

class UARBasicLightEstimate : public UARLightEstimate
{
    float AmbientIntensityLumens;
    float AmbientColorTemperatureKelvin;
    FLinearColor AmbientColor;

    float GetAmbientIntensityLumens();
    float GetAmbientColorTemperatureKelvin();
    FLinearColor GetAmbientColor();
};

class AAROriginActor : public AActor
{
};

class UARPin : public UObject
{
    class UARTrackedGeometry* TrackedGeometry;
    class USceneComponent* PinnedComponent;
    FTransform LocalToTrackingTransform;
    FTransform LocalToAlignedTrackingTransform;
    EARTrackingState TrackingState;
    FARPinOnARTrackingStateChanged OnARTrackingStateChanged;
    void OnARTrackingStateChanged(EARTrackingState NewTrackingState);
    FARPinOnARTransformUpdated OnARTransformUpdated;
    void OnARTransformUpdated(const FTransform& OldToNewTransform);

    EARTrackingState GetTrackingState();
    class UARTrackedGeometry* GetTrackedGeometry();
    class USceneComponent* GetPinnedComponent();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    FName GetDebugName();
    void DebugDraw(class UWorld* World, const FLinearColor& Color, float Scale, float PersistForSeconds);
};

class UARSessionConfig : public UDataAsset
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
    TArray<class UARCandidateImage*> CandidateImages;
    int32 MaxNumSimultaneousImagesTracked;
    EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType;
    TArray<uint8> WorldMapData;
    TArray<class UARCandidateObject*> CandidateObjects;
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
    void SetCandidateObjectList(const TArray<class UARCandidateObject*>& InCandidateObjects);
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
    TArray<class UARCandidateObject*> GetCandidateObjectList();
    TArray<class UARCandidateImage*> GetCandidateImageList();
    void AddCandidateObject(class UARCandidateObject* CandidateObject);
    void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
};

class AARSharedWorldGameMode : public AGameMode
{
    int32 BufferSizePerChunk;

    void SetPreviewImageData(TArray<uint8> ImageData);
    void SetARWorldSharingIsReady();
    void SetARSharedWorldData(TArray<uint8> ARWorldData);
    class AARSharedWorldGameState* GetARSharedWorldGameState();
};

class AARSharedWorldGameState : public AGameState
{
    TArray<uint8> PreviewImageData;
    TArray<uint8> ARWorldData;
    int32 PreviewImageBytesTotal;
    int32 ARWorldBytesTotal;
    int32 PreviewImageBytesDelivered;
    int32 ARWorldBytesDelivered;

    void K2_OnARWorldMapIsReady();
};

class AARSharedWorldPlayerController : public APlayerController
{

    void ServerMarkReadyForReceiving();
    void ClientUpdatePreviewImageData(int32 Offset, const TArray<uint8>& Buffer);
    void ClientUpdateARWorldData(int32 Offset, const TArray<uint8>& Buffer);
    void ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize);
};

class AARSkyLight : public ASkyLight
{
    class UAREnvironmentCaptureProbe* CaptureProbe;

    void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
};

class UARTexture : public UTexture
{
    EARTextureType TextureType;
    float Timestamp;
    FGuid ExternalTextureGuid;
    FVector2D Size;
};

class UARTextureCameraImage : public UARTexture
{
};

class UARTextureCameraDepth : public UARTexture
{
    EARDepthQuality DepthQuality;
    EARDepthAccuracy DepthAccuracy;
    bool bIsTemporallySmoothed;
};

class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
    EARTextureType TextureType;
    float Timestamp;
    FGuid ExternalTextureGuid;
    FVector2D Size;
};

class UARTraceResultDummy : public UObject
{
};

class UARTrackedGeometry : public UObject
{
    FGuid UniqueId;
    FTransform LocalToTrackingTransform;
    FTransform LocalToAlignedTrackingTransform;
    EARTrackingState TrackingState;
    class UMRMeshComponent* UnderlyingMesh;
    EARObjectClassification ObjectClassification;
    int32 LastUpdateFrameNumber;
    FName DebugName;

    bool IsTracked();
    class UMRMeshComponent* GetUnderlyingMesh();
    EARTrackingState GetTrackingState();
    EARObjectClassification GetObjectClassification();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    float GetLastUpdateTimestamp();
    int32 GetLastUpdateFrameNumber();
    FName GetDebugName();
};

class UARPlaneGeometry : public UARTrackedGeometry
{
    EARPlaneOrientation Orientation;
    FVector Center;
    FVector Extent;
    class UARPlaneGeometry* SubsumedBy;

    class UARPlaneGeometry* GetSubsumedBy();
    EARPlaneOrientation GetOrientation();
    FVector GetExtent();
    FVector GetCenter();
    TArray<FVector> GetBoundaryPolygonInLocalSpace();
};

class UARTrackedPoint : public UARTrackedGeometry
{
};

class UARTrackedImage : public UARTrackedGeometry
{
    class UARCandidateImage* DetectedImage;
    FVector2D EstimatedSize;

    FVector2D GetEstimateSize();
    class UARCandidateImage* GetDetectedImage();
};

class UARTrackedQRCode : public UARTrackedImage
{
    FString QRCode;
    int32 Version;
};

class UARFaceGeometry : public UARTrackedGeometry
{
    FVector LookAtTarget;
    bool bIsTracked;
    TMap<EARFaceBlendShape, float> BlendShapes;

    FTransform GetWorldSpaceEyeTransform(EAREye eye);
    FTransform GetLocalSpaceEyeTransform(EAREye eye);
    float GetBlendShapeValue(EARFaceBlendShape BlendShape);
    TMap<EARFaceBlendShape, float> GetBlendShapes();
};

class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
    class UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;

    FVector GetExtent();
    class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};

class UARTrackedObject : public UARTrackedGeometry
{
    class UARCandidateObject* DetectedObject;

    class UARCandidateObject* GetDetectedObject();
};

struct FARPose3D
{
    FARSkeletonDefinition SkeletonDefinition;
    TArray<FTransform> JointTransforms;
    TArray<bool> IsJointTracked;
    EARJointTransformSpace JointTransformSpace;
};

class UARTrackedPose : public UARTrackedGeometry
{

    FARPose3D GetTrackedPoseData();
};

class UARTrackableNotifyComponent : public UActorComponent
{
    FARTrackableNotifyComponentOnAddTrackedGeometry OnAddTrackedGeometry;
    void TrackableDelegate(class UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnUpdateTrackedGeometry OnUpdateTrackedGeometry;
    void TrackableDelegate(class UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnRemoveTrackedGeometry OnRemoveTrackedGeometry;
    void TrackableDelegate(class UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnAddTrackedPlane OnAddTrackedPlane;
    void TrackablePlaneDelegate(class UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnUpdateTrackedPlane OnUpdateTrackedPlane;
    void TrackablePlaneDelegate(class UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnRemoveTrackedPlane OnRemoveTrackedPlane;
    void TrackablePlaneDelegate(class UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnAddTrackedPoint OnAddTrackedPoint;
    void TrackablePointDelegate(class UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnUpdateTrackedPoint OnUpdateTrackedPoint;
    void TrackablePointDelegate(class UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnRemoveTrackedPoint OnRemoveTrackedPoint;
    void TrackablePointDelegate(class UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnAddTrackedImage OnAddTrackedImage;
    void TrackableImageDelegate(class UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnUpdateTrackedImage OnUpdateTrackedImage;
    void TrackableImageDelegate(class UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnRemoveTrackedImage OnRemoveTrackedImage;
    void TrackableImageDelegate(class UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnAddTrackedFace OnAddTrackedFace;
    void TrackableFaceDelegate(class UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnUpdateTrackedFace OnUpdateTrackedFace;
    void TrackableFaceDelegate(class UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnRemoveTrackedFace OnRemoveTrackedFace;
    void TrackableFaceDelegate(class UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnAddTrackedEnvProbe OnAddTrackedEnvProbe;
    void TrackableEnvProbeDelegate(class UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnUpdateTrackedEnvProbe OnUpdateTrackedEnvProbe;
    void TrackableEnvProbeDelegate(class UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnRemoveTrackedEnvProbe OnRemoveTrackedEnvProbe;
    void TrackableEnvProbeDelegate(class UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnAddTrackedObject OnAddTrackedObject;
    void TrackableObjectDelegate(class UARTrackedObject* TrackedObject);
    FARTrackableNotifyComponentOnUpdateTrackedObject OnUpdateTrackedObject;
    void TrackableObjectDelegate(class UARTrackedObject* TrackedObject);
    FARTrackableNotifyComponentOnRemoveTrackedObject OnRemoveTrackedObject;
    void TrackableObjectDelegate(class UARTrackedObject* TrackedObject);
};

class UARTypesDummyClass : public UObject
{
};

class UARCandidateImage : public UDataAsset
{
    class UTexture2D* CandidateTexture;
    FString FriendlyName;
    float Width;
    float Height;
    EARCandidateImageOrientation Orientation;

    float GetPhysicalWidth();
    float GetPhysicalHeight();
    EARCandidateImageOrientation GetOrientation();
    FString GetFriendlyName();
    class UTexture2D* GetCandidateTexture();
};

class UARCandidateObject : public UDataAsset
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
};

struct FARSharedWorldReplicationState
{
    int32 PreviewImageOffset;
    int32 ARWorldOffset;
};

#endif
