#ifndef UE4SS_SDK_HeadMountedDisplay_HPP
#define UE4SS_SDK_HeadMountedDisplay_HPP

#include "HeadMountedDisplay_enums.hpp"

struct FXRDeviceId
{
    FName SystemName;
    int32 DeviceID;

};

struct FXRGestureConfig
{
    bool bTap;
    bool bHold;
    ESpatialInputGestureAxis AxisGesture;
    bool bNavigationAxisX;
    bool bNavigationAxisY;
    bool bNavigationAxisZ;

};

struct FXRHMDData
{
    bool bValid;
    FName DeviceName;
    FGuid ApplicationInstanceID;
    ETrackingStatus TrackingStatus;
    FVector Position;
    FQuat Rotation;

};

struct FXRMotionControllerData
{
    bool bValid;
    FName DeviceName;
    FGuid ApplicationInstanceID;
    EXRVisualType DeviceVisualType;
    EControllerHand HandIndex;
    ETrackingStatus TrackingStatus;
    FVector GripPosition;
    FQuat GripRotation;
    FVector AimPosition;
    FQuat AimRotation;
    TArray<FVector> HandKeyPositions;
    TArray<FQuat> HandKeyRotations;
    TArray<float> HandKeyRadii;
    bool bIsGrasped;

};

class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
    FAsyncTask_LoadXRDeviceVisComponentOnModelLoaded OnModelLoaded;
    void DeviceModelLoadedDelegate(const class UPrimitiveComponent* LoadedComponent);
    FAsyncTask_LoadXRDeviceVisComponentOnLoadFailure OnLoadFailure;
    void DeviceModelLoadedDelegate(const class UPrimitiveComponent* LoadedComponent);
    class UPrimitiveComponent* SpawnedComponent;

    class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, class UPrimitiveComponent*& NewComponent);
    class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform, class UPrimitiveComponent*& NewComponent);
};

class UHandKeypointConversion : public UBlueprintFunctionLibrary
{

    int32 Conv_HandKeypointToInt32(EHandKeypoint Input);
};

class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{

    void UpdateExternalTrackingHMDPosition(const FTransform& ExternalTrackingTransform);
    void SetXRTimedInputActionDelegate(const FName& ActionName, const FSetXRTimedInputActionDelegateInDelegate& InDelegate);
    void SetXRDisconnectDelegate(const FSetXRDisconnectDelegateInDisconnectedDelegate& InDisconnectedDelegate);
    void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
    void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin::Type> Origin);
    void SetSpectatorScreenTexture(class UTexture* InTexture);
    void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
    void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
    void SetClippingPlanes(float Near, float Far);
    void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector::Type> options);
    bool IsSpectatorScreenModeControllable();
    bool IsInLowPersistenceMode();
    bool IsHeadMountedDisplayEnabled();
    bool IsHeadMountedDisplayConnected();
    bool IsDeviceTracking(const FXRDeviceId& XRDeviceId);
    bool HasValidTrackingPosition();
    int32 GetXRSystemFlags();
    float GetWorldToMetersScale(class UObject* WorldContext);
    void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);
    FString GetVersionString();
    FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
    void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32 Index);
    TEnumAsByte<EHMDTrackingOrigin::Type> GetTrackingOrigin();
    float GetScreenPercentage();
    void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);
    FVector2D GetPlayAreaBounds(TEnumAsByte<EHMDTrackingOrigin::Type> Origin);
    float GetPixelDensity();
    void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);
    int32 GetNumOfTrackingSensors();
    void GetMotionControllerData(class UObject* WorldContext, const EControllerHand hand, FXRMotionControllerData& MotionControllerData);
    TEnumAsByte<EHMDWornState::Type> GetHMDWornState();
    FName GetHMDDeviceName();
    void GetHMDData(class UObject* WorldContext, FXRHMDData& HMDData);
    void GetDeviceWorldPose(class UObject* WorldContext, const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    void GetDevicePose(const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    bool GetControllerTransformForTime(class UObject* WorldContext, const int32 ControllerIndex, const FName MotionSource, FTimespan Time, bool& bTimeWasUsed, FRotator& Orientation, FVector& Position, bool& bProvidedLinearVelocity, FVector& LinearVelocity, bool& bProvidedAngularVelocity, FVector& AngularVelocityRadPerSec);
    TArray<FXRDeviceId> EnumerateTrackedDevices(const FName SystemId, EXRTrackedDeviceType DeviceType);
    void EnableLowPersistenceMode(bool bEnable);
    bool EnableHMD(bool bEnable);
    void DisconnectRemoteXRDevice();
    TEnumAsByte<EXRDeviceConnectionResult::Type> ConnectRemoteXRDevice(FString IpAddress, const int32 BitRate);
    bool ConfigureGestures(const FXRGestureConfig& GestureConfig);
    void ClearXRTimedInputActionDelegate(const FName& ActionPath);
    void CalibrateExternalTrackingToHMD(const FTransform& ExternalTrackingTransform);
    void BreakKey(FKey InKey, FString& InteractionProfile, EControllerHand& hand, FName& MotionSource, FString& Indentifier, FString& Component);
};

class UMotionControllerComponent : public UPrimitiveComponent
{
    int32 PlayerIndex;
    EControllerHand hand;
    FName MotionSource;
    uint8 bDisableLowLatencyUpdate;
    ETrackingStatus CurrentTrackingStatus;
    bool bDisplayDeviceModel;
    FName DisplayModelSource;
    class UStaticMesh* CustomDisplayMesh;
    TArray<class UMaterialInterface*> DisplayMeshMaterialOverrides;
    class UPrimitiveComponent* DisplayComponent;

    void SetTrackingSource(const EControllerHand NewSource);
    void SetTrackingMotionSource(const FName NewSource);
    void SetShowDeviceModel(const bool bShowControllerModel);
    void SetDisplayModelSource(const FName NewDisplayModelSource);
    void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
    void SetAssociatedPlayerIndex(const int32 NewPlayer);
    void OnMotionControllerUpdated();
    bool IsTracked();
    EControllerHand GetTrackingSource();
    float GetParameterValue(FName InName, bool& bValueFound);
    FVector GetHandJointPosition(int32 jointIndex, bool& bValueFound);
};

class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
    bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, FName SourceName);
    bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, EControllerHand hand);
    bool IsMotionTrackingEnabledForComponent(const class UMotionControllerComponent* MotionControllerComponent);
    bool IsMotionTrackedDeviceCountManagementNecessary();
    bool IsMotionSourceTracking(int32 PlayerIndex, FName SourceName);
    int32 GetMotionTrackingEnabledControllerCount();
    int32 GetMaximumMotionTrackedControllerCount();
    FName GetActiveTrackingSystemName();
    TArray<FName> EnumerateMotionSources();
    bool EnableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);
    bool EnableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand hand);
    bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
    void DisableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);
    void DisableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand hand);
    void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
    void DisableMotionTrackingOfAllControllers();
    void DisableMotionTrackingForComponent(const class UMotionControllerComponent* MotionControllerComponent);
};

class UVRNotificationsComponent : public UActorComponent
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

};

class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId);
    class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform);
};

class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ShowLoadingScreen();
    void SetLoadingScreen(class UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);
    void HideLoadingScreen();
    void ClearLoadingScreenSplashes();
    void AddLoadingScreenSplash(class UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd);
};

#endif
