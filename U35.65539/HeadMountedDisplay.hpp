#ifndef UE4SS_SDK_HeadMountedDisplay_HPP
#define UE4SS_SDK_HeadMountedDisplay_HPP

#include "HeadMountedDisplay_enums.hpp"

class UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary
{

    void UpdateExternalTrackingHMDPosition(const FTransform& ExternalTrackingTransform);
    void SetWorldToMetersScale(UObject* WorldContext, float newScale);
    void SetTrackingOrigin(uint8 Origin);
    void SetSpectatorScreenTexture(UTexture* InTexture);
    void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
    void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
    void SetClippingPlanes(float Near, float Far);
    void ResetOrientationAndPosition(float Yaw, uint8 options);
    bool IsSpectatorScreenModeControllable();
    bool IsInLowPersistenceMode();
    bool IsHeadMountedDisplayEnabled();
    bool IsHeadMountedDisplayConnected();
    bool IsDeviceTracking(const FXRDeviceId& XRDeviceId);
    bool HasValidTrackingPosition();
    float GetWorldToMetersScale(UObject* WorldContext);
    void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);
    FTransform GetTrackingToWorldTransform(UObject* WorldContext);
    void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32 Index);
    TEnumAsByte<EHMDTrackingOrigin::Type> GetTrackingOrigin();
    float GetScreenPercentage();
    void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);
    float GetPixelDensity();
    void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);
    int32 GetNumOfTrackingSensors();
    TEnumAsByte<EHMDWornState::Type> GetHMDWornState();
    FName GetHMDDeviceName();
    void GetDeviceWorldPose(UObject* WorldContext, const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    void GetDevicePose(const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    TArray<FXRDeviceId> EnumerateTrackedDevices(const FName SystemId, EXRTrackedDeviceType DeviceType);
    void EnableLowPersistenceMode(bool bEnable);
    bool EnableHMD(bool bEnable);
    void CalibrateExternalTrackingToHMD(const FTransform& ExternalTrackingTransform);
}

class UMotionControllerComponent : UPrimitiveComponent
{
    int32 PlayerIndex;
    EControllerHand hand;
    FName MotionSource;
    uint8 bDisableLowLatencyUpdate;
    ETrackingStatus CurrentTrackingStatus;
    bool bDisplayDeviceModel;
    FName DisplayModelSource;
    UStaticMesh* CustomDisplayMesh;
    TArray<UMaterialInterface*> DisplayMeshMaterialOverrides;
    UPrimitiveComponent* DisplayComponent;

    void SetTrackingSource(const EControllerHand NewSource);
    void SetTrackingMotionSource(const FName NewSource);
    void SetShowDeviceModel(const bool bShowControllerModel);
    void SetDisplayModelSource(const FName NewDisplayModelSource);
    void SetCustomDisplayMesh(UStaticMesh* NewDisplayMesh);
    void SetAssociatedPlayerIndex(const int32 NewPlayer);
    void OnMotionControllerUpdated();
    bool IsTracked();
    EControllerHand GetTrackingSource();
    float GetParameterValue(FName InName, bool& bValueFound);
    FVector GetHandJointPosition(int32 jointIndex, bool& bValueFound);
}

class UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary
{

    void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
    bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, FName SourceName);
    bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, EControllerHand hand);
    bool IsMotionTrackingEnabledForComponent(const UMotionControllerComponent* MotionControllerComponent);
    bool IsMotionTrackedDeviceCountManagementNecessary();
    bool IsMotionSourceTracking(int32 PlayerIndex, FName SourceName);
    int32 GetMotionTrackingEnabledControllerCount();
    int32 GetMaximumMotionTrackedControllerCount();
    FName GetActiveTrackingSystemName();
    TArray<FName> EnumerateMotionSources();
    bool EnableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);
    bool EnableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand hand);
    bool EnableMotionTrackingForComponent(UMotionControllerComponent* MotionControllerComponent);
    void DisableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);
    void DisableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand hand);
    void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
    void DisableMotionTrackingOfAllControllers();
    void DisableMotionTrackingForComponent(const UMotionControllerComponent* MotionControllerComponent);
}

class UVRNotificationsComponent : UActorComponent
{
    FVRNotificationsComponentHMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDTrackingInitializedDelegate HMDTrackingInitializedDelegate;
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDRecenteredDelegate HMDRecenteredDelegate;
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDLostDelegate HMDLostDelegate;
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDReconnectedDelegate HMDReconnectedDelegate;
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDConnectCanceledDelegate HMDConnectCanceledDelegate;
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDPutOnHeadDelegate HMDPutOnHeadDelegate;
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDRemovedFromHeadDelegate HMDRemovedFromHeadDelegate;
    void VRNotificationsDelegate();
    FVRNotificationsComponentVRControllerRecenteredDelegate VRControllerRecenteredDelegate;
    void VRNotificationsDelegate();
}

class UXRAssetFunctionLibrary : UBlueprintFunctionLibrary
{

    UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId);
    UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform);
}

class UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase
{
    FAsyncTask_LoadXRDeviceVisComponentOnModelLoaded OnModelLoaded;
    void DeviceModelLoadedDelegate(const UPrimitiveComponent* LoadedComponent);
    FAsyncTask_LoadXRDeviceVisComponentOnLoadFailure OnLoadFailure;
    void DeviceModelLoadedDelegate(const UPrimitiveComponent* LoadedComponent);
    UPrimitiveComponent* SpawnedComponent;

    UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, UPrimitiveComponent*& NewComponent);
    UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform, UPrimitiveComponent*& NewComponent);
}

class UXRLoadingScreenFunctionLibrary : UBlueprintFunctionLibrary
{

    void ShowLoadingScreen();
    void SetLoadingScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);
    void HideLoadingScreen();
    void ClearLoadingScreenSplashes();
    void AddLoadingScreenSplash(UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd);
}

struct FXRDeviceId
{
    FName SystemName;
    int32 DeviceID;
}

#endif
