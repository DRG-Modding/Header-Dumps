#ifndef UE4SS_SDK_AugmentedReality_HPP
#define UE4SS_SDK_AugmentedReality_HPP

#include "AugmentedReality_enums.hpp"

struct FARCameraIntrinsics
{
    FIntPoint ImageResolution;
    FVector2D FocalLength;
    FVector2D PrincipalPoint;

};

struct FAREnvironmentProbeUpdatePayload
{
    FTransform WorldTransform;

};

struct FARFaceUpdatePayload
{
    FARSessionPayload SessionPayload;
    FVector LeftEyePosition;
    FVector RightEyePosition;
    FVector LookAtTarget;

};

struct FARGeoAnchorUpdatePayload
{
    FARSessionPayload SessionPayload;
    FTransform WorldTransform;
    float Longitude;
    float Latitude;
    float AltitudeMeters;
    EARAltitudeSource AltitudeSource;
    FString AnchorName;

};

struct FARImageUpdatePayload
{
    FARSessionPayload SessionPayload;
    FTransform WorldTransform;
    class UARCandidateImage* DetectedImage;
    FVector2D EstimatedSize;

};

struct FARMeshUpdatePayload
{
    FARSessionPayload SessionPayload;
    FTransform WorldTransform;
    EARObjectClassification ObjectClassification;

};

struct FARObjectUpdatePayload
{
    FTransform WorldTransform;

};

struct FARPlaneUpdatePayload
{
    FARSessionPayload SessionPayload;
    FTransform WorldTransform;
    FVector Center;
    FVector Extents;
    TArray<FVector> BoundaryVertices;
    EARObjectClassification ObjectClassification;

};

struct FARPointUpdatePayload
{
};

struct FARPose2D
{
    FARSkeletonDefinition SkeletonDefinition;
    TArray<FVector2D> JointLocations;
    TArray<bool> IsJointTracked;

};

struct FARPose3D
{
    FARSkeletonDefinition SkeletonDefinition;
    TArray<FTransform> JointTransforms;
    TArray<bool> IsJointTracked;
    EARJointTransformSpace JointTransformSpace;

};

struct FARPoseUpdatePayload
{
    FTransform WorldTransform;
    TArray<FTransform> JointTransforms;

};

struct FARQRCodeUpdatePayload
{
    FARSessionPayload SessionPayload;
    FTransform WorldTransform;
    FVector Extents;
    FString QRCode;

};

struct FARSessionPayload
{
    int32 ConfigFlags;
    class UMaterialInterface* DefaultMeshMaterial;
    class UMaterialInterface* DefaultWireframeMeshMaterial;

};

struct FARSessionStatus
{
    FString AdditionalInfo;
    EARSessionStatus Status;

};

struct FARSharedWorldReplicationState
{
    int32 PreviewImageOffset;
    int32 ARWorldOffset;

};

struct FARSkeletonDefinition
{
    int32 NumJoints;
    TArray<FName> JointNames;
    TArray<int32> ParentIndices;

};

struct FARTraceResult
{
    float DistanceFromCamera;
    EARLineTraceChannels TraceChannel;
    FTransform LocalTransform;
    class UARTrackedGeometry* TrackedGeometry;

};

struct FARVideoFormat
{
    int32 FPS;
    int32 Width;
    int32 Height;

};

struct FTrackedGeometryGroup
{
    class AARActor* ARActor;
    class UARComponent* ARComponent;
    class UARTrackedGeometry* TrackedGeometry;

};

class AARActor : public AActor
{

    class UARComponent* AddARComponent(TSubclassOf<class UARComponent> InComponentClass, const FGuid& NativeID);
};

class AAROriginActor : public AActor
{
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

class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
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

class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void UnpinComponent(class USceneComponent* ComponentToUnpin);
    bool ToggleARCapture(const bool bOnOff, const EARCaptureType CaptureType);
    void StopARSession();
    void StartARSession(class UARSessionConfig* SessionConfig);
    void SetEnabledXRCamera(bool bOnOff);
    void SetARWorldScale(float InWorldScale);
    void SetARWorldOriginLocationAndRotation(FVector OriginLocation, FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection);
    void SetAlignmentTransform(const FTransform& InAlignmentTransform);
    bool SaveARPinToLocalStore(FName InSaveName, class UARPin* InPin);
    FIntPoint ResizeXRCamera(const FIntPoint& InSize);
    void RemovePin(class UARPin* PinToRemove);
    void RemoveARPinFromLocalStore(FName InSaveName);
    void RemoveAllARPinsFromLocalStore();
    class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, const FARTraceResult& TraceResult, const FName DebugName);
    bool PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin);
    class UARPin* PinComponent(class USceneComponent* ComponentToPin, const FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const FName DebugName);
    void PauseARSession();
    TMap<class FName, class UARPin*> LoadARPinsFromLocalStore();
    TArray<FARTraceResult> LineTraceTrackedObjects3D(const FVector Start, const FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    TArray<FARTraceResult> LineTraceTrackedObjects(const FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    bool IsSessionTypeSupported(EARSessionType SessionType);
    bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
    bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod);
    bool IsARSupported();
    bool IsARPinLocalStoreSupported();
    bool IsARPinLocalStoreReady();
    EARWorldMappingState GetWorldMappingStatus();
    EARTrackingQualityReason GetTrackingQualityReason();
    EARTrackingQuality GetTrackingQuality();
    TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);
    class UARSessionConfig* GetSessionConfig();
    TArray<FVector> GetPointCloud();
    class UARTexture* GetPersonSegmentationImage();
    class UARTexture* GetPersonSegmentationDepthImage();
    bool GetObjectClassificationAtLocation(const FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff);
    int32 GetNumberOfTrackedFacesSupported();
    class UARLightEstimate* GetCurrentLightEstimate();
    bool GetCameraIntrinsics(FARCameraIntrinsics& OutCameraIntrinsics);
    class UARTextureCameraImage* GetCameraImage();
    class UARTextureCameraDepth* GetCameraDepth();
    float GetARWorldScale();
    class UARTexture* GetARTexture(EARTextureType TextureType);
    FARSessionStatus GetARSessionStatus();
    TArray<class UARTrackedPose*> GetAllTrackedPoses();
    TArray<class UARTrackedPoint*> GetAllTrackedPoints();
    TArray<class UARPlaneGeometry*> GetAllTrackedPlanes();
    TArray<class UARTrackedImage*> GetAllTrackedImages();
    TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
    TArray<FARPose2D> GetAllTracked2DPoses();
    TArray<class UARPin*> GetAllPins();
    TArray<class UARTrackedGeometry*> GetAllGeometriesByClass(TSubclassOf<class UARTrackedGeometry> GeometryClass);
    TArray<class UARTrackedGeometry*> GetAllGeometries();
    FTransform GetAlignmentTransform();
    TArray<class UARTrackedPoint*> FindTrackedPointsByName(FString PointName);
    void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds);
    void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds);
    void CalculateClosestIntersection(const TArray<FVector>& StartPoints, const TArray<FVector>& EndPoints, FVector& ClosestIntersection);
    void CalculateAlignmentTransform(const FTransform& TransformInFirstCoordinateSystem, const FTransform& TransformInSecondCoordinateSystem, FTransform& AlignmentTransform);
    bool AddTrackedPointWithName(const FTransform& WorldTransform, FString PointName, bool bDeletePointsWithSameName);
    class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth);
    bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);
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

class UARComponent : public USceneComponent
{
    FGuid NativeID;
    bool bUseDefaultReplication;
    class UMaterialInterface* DefaultMeshMaterial;
    class UMaterialInterface* DefaultWireframeMeshMaterial;
    class UMRMeshComponent* MRMeshComponent;
    class UARTrackedGeometry* MyTrackedGeometry;

    void UpdateVisualization();
    void SetNativeID(FGuid NativeID);
    void ReceiveRemove();
    void OnRep_Payload();
    class UMRMeshComponent* GetMRMesh();
};

class UARDependencyHandler : public UObject
{

    void StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo);
    void RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult);
    void InstallARService(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult);
    class UARDependencyHandler* GetARDependencyHandler();
    void CheckARServiceAvailability(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability);
};

class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
    FVector Extent;
    class UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;

    FVector GetExtent();
    class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};

class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
    EARTextureType TextureType;
    float Timestamp;
    FGuid ExternalTextureGuid;
    FVector2D Size;

};

class UAREnvironmentProbeComponent : public UARComponent
{
    FAREnvironmentProbeUpdatePayload ReplicatedPayload;

    void ServerUpdatePayload(const FAREnvironmentProbeUpdatePayload& NewPayload);
    void ReceiveUpdate(const FAREnvironmentProbeUpdatePayload& Payload);
    void ReceiveAdd(const FAREnvironmentProbeUpdatePayload& Payload);
};

class UARFaceComponent : public UARComponent
{
    EARFaceTransformMixing TransformSetting;
    bool bUpdateVertexNormal;
    bool bFaceOutOfScreen;
    FARFaceUpdatePayload ReplicatedPayload;

    void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARFaceUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARFaceUpdatePayload& Payload);
    void ReceiveAdd(const FARFaceUpdatePayload& Payload);
};

class UARFaceGeometry : public UARTrackedGeometry
{
    FVector LookAtTarget;
    bool bIsTracked;
    TMap<EARFaceBlendShape, float> BlendShapes;
    FTransform LeftEyeTransform;
    FTransform RightEyeTransform;

    FTransform GetWorldSpaceEyeTransform(EAREye eye);
    FTransform GetLocalSpaceEyeTransform(EAREye eye);
    float GetBlendShapeValue(EARFaceBlendShape BlendShape);
    TMap<EARFaceBlendShape, float> GetBlendShapes();
};

class UARGeoAnchor : public UARTrackedGeometry
{

    float GetLongitude();
    float GetLatitude();
    EARAltitudeSource GetAltitudeSource();
    float GetAltitudeMeters();
};

class UARGeoAnchorComponent : public UARComponent
{
    FARGeoAnchorUpdatePayload ReplicatedPayload;

    void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARGeoAnchorUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARGeoAnchorUpdatePayload& Payload);
    void ReceiveAdd(const FARGeoAnchorUpdatePayload& Payload);
};

class UARGeoTrackingSupport : public UObject
{

    class UARGeoTrackingSupport* GetGeoTrackingSupport();
    EARGeoTrackingStateReason GetGeoTrackingStateReason();
    EARGeoTrackingState GetGeoTrackingState();
    EARGeoTrackingAccuracy GetGeoTrackingAccuracy();
    bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, FString OptionalAnchorName);
    bool AddGeoAnchorAtLocation(float Longitude, float Latitude, FString OptionalAnchorName);
};

class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    void ARGetCandidateObjectPin(class UARCandidateObject* SavedObject);
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnFailed OnFailed;
    void ARGetCandidateObjectPin(class UARCandidateObject* SavedObject);

    class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, FVector Location, FVector Extent);
};

class UARImageComponent : public UARComponent
{
    FARImageUpdatePayload ReplicatedPayload;

    void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARImageUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARImageUpdatePayload& Payload);
    void ReceiveAdd(const FARImageUpdatePayload& Payload);
};

class UARLifeCycleComponent : public USceneComponent
{
    FARLifeCycleComponentOnARActorSpawnedDelegate OnARActorSpawnedDelegate;
    void InstanceARActorSpawnedDelegate(UClass* ComponentClass, FGuid NativeID, class AARActor* SpawnedActor);
    FARLifeCycleComponentOnARActorToBeDestroyedDelegate OnARActorToBeDestroyedDelegate;
    void InstanceARActorToBeDestroyedDelegate(class AARActor* Actor);

    void ServerSpawnARActor(UClass* ComponentClass, FGuid NativeID);
    void ServerDestroyARActor(class AARActor* Actor);
    void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor);
    void InstanceARActorSpawnedDelegate__DelegateSignature(UClass* ComponentClass, FGuid NativeID, class AARActor* SpawnedActor);
};

class UARLightEstimate : public UObject
{
};

class UARMeshComponent : public UARComponent
{
    FARMeshUpdatePayload ReplicatedPayload;

    void ServerUpdatePayload(const FARMeshUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARMeshUpdatePayload& Payload);
    void ReceiveAdd(const FARMeshUpdatePayload& Payload);
};

class UARMeshGeometry : public UARTrackedGeometry
{

    bool GetObjectClassificationAtLocation(const FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff);
};

class UARObjectComponent : public UARComponent
{
    FARObjectUpdatePayload ReplicatedPayload;

    void ServerUpdatePayload(const FARObjectUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARObjectUpdatePayload& Payload);
    void ReceiveAdd(const FARObjectUpdatePayload& Payload);
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

class UARPlaneComponent : public UARComponent
{
    FARPlaneUpdatePayload ReplicatedPayload;

    void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);
    void SetObjectClassificationDebugColors(const TMap<class EARObjectClassification, class FLinearColor>& InColors);
    void ServerUpdatePayload(const FARPlaneUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARPlaneUpdatePayload& Payload);
    void ReceiveAdd(const FARPlaneUpdatePayload& Payload);
    TMap<class EARObjectClassification, class FLinearColor> GetObjectClassificationDebugColors();
};

class UARPlaneGeometry : public UARTrackedGeometry
{
    EARPlaneOrientation Orientation;
    FVector Center;
    FVector Extent;
    TArray<FVector> BoundaryPolygon;
    class UARPlaneGeometry* SubsumedBy;

    class UARPlaneGeometry* GetSubsumedBy();
    EARPlaneOrientation GetOrientation();
    FVector GetExtent();
    FVector GetCenter();
    TArray<FVector> GetBoundaryPolygonInLocalSpace();
};

class UARPointComponent : public UARComponent
{
    FARPointUpdatePayload ReplicatedPayload;

    void ServerUpdatePayload(const FARPointUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARPointUpdatePayload& Payload);
    void ReceiveAdd(const FARPointUpdatePayload& Payload);
};

class UARPoseComponent : public UARComponent
{
    FARPoseUpdatePayload ReplicatedPayload;

    void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARPoseUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARPoseUpdatePayload& Payload);
    void ReceiveAdd(const FARPoseUpdatePayload& Payload);
};

class UARQRCodeComponent : public UARComponent
{
    FARQRCodeUpdatePayload ReplicatedPayload;

    void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARQRCodeUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARQRCodeUpdatePayload& Payload);
    void ReceiveAdd(const FARQRCodeUpdatePayload& Payload);
};

class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FARSaveWorldAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    void ARSaveWorldPin(const TArray<uint8>& SavedWorld);
    FARSaveWorldAsyncTaskBlueprintProxyOnFailed OnFailed;
    void ARSaveWorldPin(const TArray<uint8>& SavedWorld);

    class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);
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
    bool bUseSceneDepthForOcclusion;
    bool bUseAutomaticImageScaleEstimation;
    bool bUseStandardOnboardingUX;
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
    bool bUseOptimalVideoFormat;
    EARFaceTrackingDirection FaceTrackingDirection;
    EARFaceTrackingUpdate FaceTrackingUpdate;
    int32 MaxNumberOfTrackedFaces;
    TArray<uint8> SerializedARCandidateImageDatabase;
    EARSessionTrackingFeature EnabledSessionTrackingFeature;
    EARSceneReconstruction SceneReconstructionMethod;
    TSubclassOf<class UARPlaneComponent> PlaneComponentClass;
    TSubclassOf<class UARPointComponent> PointComponentClass;
    TSubclassOf<class UARFaceComponent> FaceComponentClass;
    TSubclassOf<class UARImageComponent> ImageComponentClass;
    TSubclassOf<class UARQRCodeComponent> QRCodeComponentClass;
    TSubclassOf<class UARPoseComponent> PoseComponentClass;
    TSubclassOf<class UAREnvironmentProbeComponent> EnvironmentProbeComponentClass;
    TSubclassOf<class UARObjectComponent> ObjectComponentClass;
    TSubclassOf<class UARMeshComponent> MeshComponentClass;
    TSubclassOf<class UARGeoAnchorComponent> GeoAnchorComponentClass;
    class UMaterialInterface* DefaultMeshMaterial;
    class UMaterialInterface* DefaultWireframeMeshMaterial;

    bool ShouldResetTrackedObjects();
    bool ShouldResetCameraTracking();
    bool ShouldRenderCameraOverlay();
    bool ShouldEnableCameraTracking();
    bool ShouldEnableAutoFocus();
    void SetWorldMapData(TArray<uint8> WorldMapData);
    void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);
    void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);
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
    EARSceneReconstruction GetSceneReconstructionMethod();
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

class UARTexture : public UTexture
{
    EARTextureType TextureType;
    float Timestamp;
    FGuid ExternalTextureGuid;
    FVector2D Size;

};

class UARTextureCameraDepth : public UARTexture
{
    EARDepthQuality DepthQuality;
    EARDepthAccuracy DepthAccuracy;
    bool bIsTemporallySmoothed;

};

class UARTextureCameraImage : public UARTexture
{
};

class UARTraceResultDummy : public UObject
{
};

class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{

    class UARTrackedGeometry* GetTrackedGeometry(const FARTraceResult& TraceResult);
    EARLineTraceChannels GetTraceChannel(const FARTraceResult& TraceResult);
    FTransform GetLocalTransform(const FARTraceResult& TraceResult);
    FTransform GetLocalToWorldTransform(const FARTraceResult& TraceResult);
    FTransform GetLocalToTrackingTransform(const FARTraceResult& TraceResult);
    float GetDistanceFromCamera(const FARTraceResult& TraceResult);
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

class UARTrackedGeometry : public UObject
{
    FGuid UniqueId;
    FTransform LocalToTrackingTransform;
    FTransform LocalToAlignedTrackingTransform;
    EARTrackingState TrackingState;
    class UMRMeshComponent* UnderlyingMesh;
    EARObjectClassification ObjectClassification;
    EARSpatialMeshUsageFlags SpatialMeshUsageFlags;
    int32 LastUpdateFrameNumber;
    FName DebugName;

    bool IsTracked();
    bool HasSpatialMeshUsageFlag(const EARSpatialMeshUsageFlags InFlag);
    class UMRMeshComponent* GetUnderlyingMesh();
    EARTrackingState GetTrackingState();
    EARObjectClassification GetObjectClassification();
    FString GetName();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    float GetLastUpdateTimestamp();
    int32 GetLastUpdateFrameNumber();
    FName GetDebugName();
};

class UARTrackedImage : public UARTrackedGeometry
{
    class UARCandidateImage* DetectedImage;
    FVector2D EstimatedSize;

    FVector2D GetEstimateSize();
    class UARCandidateImage* GetDetectedImage();
};

class UARTrackedObject : public UARTrackedGeometry
{
    class UARCandidateObject* DetectedObject;

    class UARCandidateObject* GetDetectedObject();
};

class UARTrackedPoint : public UARTrackedGeometry
{
};

class UARTrackedPose : public UARTrackedGeometry
{
    FARPose3D TrackedPose;

    FARPose3D GetTrackedPoseData();
};

class UARTrackedQRCode : public UARTrackedImage
{
    FString QRCode;
    int32 Version;

};

class UARTypesDummyClass : public UObject
{
};

class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    void GeoTrackingAvailabilityDelegate(bool bIsAvailable, FString Error);
    FCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxyOnFailed OnFailed;
    void GeoTrackingAvailabilityDelegate(bool bIsAvailable, FString Error);

    void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, FString Error);
    class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude);
    class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(class UObject* WorldContextObject);
};

class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FGetGeoLocationAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    void GetGeoLocationDelegate(float Longitude, float Latitude, float Altitude, FString Error);
    FGetGeoLocationAsyncTaskBlueprintProxyOnFailed OnFailed;
    void GetGeoLocationDelegate(float Longitude, float Latitude, float Altitude, FString Error);

    void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, FString Error);
    class UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const FVector& WorldPosition);
};

#endif
