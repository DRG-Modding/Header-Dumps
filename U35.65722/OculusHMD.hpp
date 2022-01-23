#ifndef UE4SS_SDK_OculusHMD_HPP
#define UE4SS_SDK_OculusHMD_HPP

#include "OculusHMD_enums.hpp"

struct FHmdUserProfileField
{
    FString FieldName;
    FString FieldValue;
};

struct FHmdUserProfile
{
    FString Name;
    FString Gender;
    float PlayerHeight;
    float EyeHeight;
    float IPD;
    FVector2D NeckToEyeDistance;
    TArray<FHmdUserProfileField> ExtraFields;
};

struct FGuardianTestResult
{
    bool IsTriggering;
    ETrackedDeviceType DeviceType;
    float ClosestDistance;
    FVector ClosestPoint;
    FVector ClosestPointNormal;
};

class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ShowLoadingSplashScreen();
    void ShowLoadingIcon(class UTexture2D* Texture);
    void SetReorientHMDOnControllerRecenter(bool recenterMode);
    void SetPositionScale3D(FVector PosScale3D);
    void SetLoadingSplashParams(FString TexturePath, FVector DistanceInMeters, FVector2D SizeInMeters, FVector RotationAxis, float RotationDeltaInDeg);
    void SetGuardianVisibility(bool GuardianVisible);
    void SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level);
    void SetDisplayFrequency(float RequestedFrequency);
    void SetCPUAndGPULevels(int32 CPULevel, int32 GPULevel);
    void SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers);
    void SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, TEnumAsByte<EOrientPositionSelector::Type> options);
    void SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector::Type> options);
    bool IsLoadingIconEnabled();
    bool IsGuardianDisplayed();
    bool IsGuardianConfigured();
    bool IsDeviceTracked(ETrackedDeviceType DeviceType);
    bool IsAutoLoadingSplashScreenEnabled();
    void HideLoadingSplashScreen(bool bClear);
    void HideLoadingIcon();
    bool HasSystemOverlayPresent();
    bool HasInputFocus();
    bool GetUserProfile(FHmdUserProfile& Profile);
    void GetRawSensorData(FVector& AngularAcceleration, FVector& LinearAcceleration, FVector& AngularVelocity, FVector& LinearVelocity, float& TimeInSeconds, ETrackedDeviceType DeviceType);
    void GetPose(FRotator& DeviceRotation, FVector& DevicePosition, FVector& NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const FVector PositionScale);
    FGuardianTestResult GetPointGuardianIntersection(const FVector Point, EBoundaryType BoundaryType);
    FTransform GetPlayAreaTransform();
    FGuardianTestResult GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType);
    void GetLoadingSplashParams(FString& TexturePath, FVector& DistanceInMeters, FVector2D& SizeInMeters, FVector& RotationAxis, float& RotationDeltaInDeg);
    TArray<FVector> GetGuardianPoints(EBoundaryType BoundaryType, bool UsePawnSpace);
    FVector GetGuardianDimensions(EBoundaryType BoundaryType);
    void GetGPUUtilization(bool& IsGPUAvailable, float& GPUUtilization);
    float GetGPUFrameTime();
    EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel();
    FString GetDeviceName();
    float GetCurrentDisplayFrequency();
    void GetBaseRotationAndPositionOffset(FRotator& OutRot, FVector& OutPosOffset);
    void GetBaseRotationAndBaseOffsetInMeters(FRotator& OutRotation, FVector& OutBaseOffsetInMeters);
    TArray<float> GetAvailableDisplayFrequencies();
    void EnablePositionTracking(bool bPositionTracking);
    void EnableOrientationTracking(bool bOrientationTracking);
    void EnableAutoLoadingSplashScreen(bool bAutoShowEnabled);
    void ClearLoadingSplashScreens();
    void AddLoadingSplashScreen(class UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd);
};

struct FOculusSplashDesc
{
    FSoftObjectPath TexturePath;
    FTransform TransformInMeters;
    FVector2D QuadSizeInMeters;
    FQuat DeltaRotation;
    FVector2D TextureOffset;
    FVector2D TextureScale;
    bool bNoAlphaChannel;
};

class UOculusHMDRuntimeSettings : public UObject
{
    bool bAutoEnabled;
    TArray<FOculusSplashDesc> SplashDescs;
    bool bSupportsDash;
    bool bCompositesDepth;
    bool bHQDistortion;
    float PixelDensityMin;
    float PixelDensityMax;
    int32 CPULevel;
    int32 GPULevel;
    EFixedFoveatedRenderingLevel FFRLevel;
    bool bChromaCorrection;
    bool bRecenterHMDWithController;
};

class UOculusSceneCaptureCubemap : public UObject
{
    TArray<class USceneCaptureComponent2D*> CaptureComponents;
};

#endif
