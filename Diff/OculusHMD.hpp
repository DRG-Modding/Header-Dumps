#ifndef UE4SS_SDK_OculusHMD_HPP
#define UE4SS_SDK_OculusHMD_HPP

#include "OculusHMD_enums.hpp"

struct FGuardianTestResult
{
    bool IsTriggering;
    ETrackedDeviceType DeviceType;
    float ClosestDistance;
    FVector ClosestPoint;
    FVector ClosestPointNormal;

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

struct FHmdUserProfileField
{
    FString FieldName;
    FString FieldValue;

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

class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetReorientHMDOnControllerRecenter(bool recenterMode);
    void SetPositionScale3D(FVector PosScale3D);
    void SetGuardianVisibility(bool GuardianVisible);
    void SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level, bool isDynamic);
    void SetDisplayFrequency(float RequestedFrequency);
    void SetCPUAndGPULevels(int32 CPULevel, int32 GPULevel);
    void SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers);
    void SetClientColorDesc(EColorSpace ColorSpace);
    void SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, TEnumAsByte<EOrientPositionSelector::Type> options);
    void SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector::Type> options);
    bool IsGuardianDisplayed();
    bool IsGuardianConfigured();
    bool IsDeviceTracked(ETrackedDeviceType DeviceType);
    bool HasSystemOverlayPresent();
    bool HasInputFocus();
    bool GetUserProfile(FHmdUserProfile& Profile);
    bool GetSystemHmd3DofModeEnabled();
    void GetRawSensorData(FVector& AngularAcceleration, FVector& LinearAcceleration, FVector& AngularVelocity, FVector& LinearVelocity, float& TimeInSeconds, ETrackedDeviceType DeviceType);
    void GetPose(FRotator& DeviceRotation, FVector& DevicePosition, FVector& NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const FVector PositionScale);
    FGuardianTestResult GetPointGuardianIntersection(const FVector Point, EBoundaryType BoundaryType);
    FTransform GetPlayAreaTransform();
    FGuardianTestResult GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType);
    EColorSpace GetHmdColorDesc();
    TArray<FVector> GetGuardianPoints(EBoundaryType BoundaryType, bool UsePawnSpace);
    FVector GetGuardianDimensions(EBoundaryType BoundaryType);
    void GetGPUUtilization(bool& IsGPUAvailable, float& GPUUtilization);
    float GetGPUFrameTime();
    EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel();
    EOculusDeviceType GetDeviceType();
    FString GetDeviceName();
    float GetCurrentDisplayFrequency();
    void GetBaseRotationAndPositionOffset(FRotator& OutRot, FVector& OutPosOffset);
    void GetBaseRotationAndBaseOffsetInMeters(FRotator& OutRotation, FVector& OutBaseOffsetInMeters);
    TArray<float> GetAvailableDisplayFrequencies();
    void EnablePositionTracking(bool bPositionTracking);
    void EnableOrientationTracking(bool bOrientationTracking);
    void ClearLoadingSplashScreens();
    void AddLoadingSplashScreen(class UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd);
};

class UOculusHMDRuntimeSettings : public UObject
{
    bool bAutoEnabled;
    TArray<FOculusSplashDesc> SplashDescs;
    bool bEnableSpecificColorGamut;
    EColorSpace ColorSpace;
    bool bSupportsDash;
    bool bCompositesDepth;
    bool bHQDistortion;
    float PixelDensityMin;
    float PixelDensityMax;
    int32 CPULevel;
    int32 GPULevel;
    EFixedFoveatedRenderingLevel FFRLevel;
    bool FFRDynamic;
    bool bChromaCorrection;
    bool bRecenterHMDWithController;
    bool bFocusAware;
    bool bLateLatching;
    bool bRequiresSystemKeyboard;
    EHandTrackingSupport HandTrackingSupport;
    bool bPhaseSync;

};

class UOculusResourceHolder : public UObject
{
    class UMaterial* PokeAHoleMaterial;

};

class UOculusSceneCaptureCubemap : public UObject
{
    TArray<class USceneCaptureComponent2D*> CaptureComponents;

};

#endif
