#ifndef UE4SS_SDK_SteamVRInputDevice_HPP
#define UE4SS_SDK_SteamVRInputDevice_HPP

#include "SteamVRInputDevice_enums.hpp"

class USteamVRInputDeviceFunctionLibrary : UBlueprintFunctionLibrary
{

    void ShowSteamVR_ActionOrigin(FSteamVRAction SteamVRAction, FSteamVRActionSet SteamVRActionSet);
    void ShowAllSteamVR_ActionOrigins();
    float SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue);
    void SetPoseSource(bool bUseSkeletonPose);
    void SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState);
    bool ResetSeatedPosition();
    void PlaySteamVR_HapticFeedback(ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude);
    float GetUserIPD();
    bool GetSteamVR_OriginTrackedDeviceInfo(FSteamVRAction SteamVRAction, FSteamVRInputOriginInfo& InputOriginInfo);
    void GetSteamVR_OriginLocalizedName(FSteamVRAction SteamVRAction, TArray<ESteamVRInputStringBits> LocalizedParts, FString& OriginLocalizedName);
    TArray<FSteamVRInputBindingInfo> GetSteamVR_InputBindingInfo(FSteamVRAction SteamVRActionHandle);
    bool GetSteamVR_HandPoseRelativeToNow(FVector& Position, FRotator& Orientation, ESteamVRHand hand, float PredictedSecondsFromNow);
    float GetSteamVR_GlobalPredictedSecondsFromNow();
    void GetSteamVR_ActionSetArray(TArray<FSteamVRActionSet>& SteamVRActionSets);
    void GetSteamVR_ActionArray(TArray<FSteamVRAction>& SteamVRActions);
    void GetSkeletalTransform(FSteamVRSkeletonTransform& LeftHand, FSteamVRSkeletonTransform& RightHand, bool bWithController);
    void GetSkeletalState(bool& LeftHandState, bool& RightHandState);
    void GetRightHandPoseData(FVector& Position, FRotator& Orientation, FVector& AngularVelocity, FVector& Velocity);
    void GetPoseSource(bool& bUsingSkeletonPose);
    void GetLeftHandPoseData(FVector& Position, FRotator& Orientation, FVector& AngularVelocity, FVector& Velocity);
    void GetFingerCurlsAndSplays(EHand hand, FSteamVRFingerCurls& FingerCurls, FSteamVRFingerSplays& FingerSplays, ESkeletalSummaryDataType SummaryDataType);
    void GetCurlsAndSplaysState(bool& LeftHandState, bool& RightHandState);
    void GetControllerFidelity(EControllerFidelity& LeftControllerFidelity, EControllerFidelity& RightControllerFidelity);
    void FindSteamVR_OriginTrackedDeviceInfo(FName ActionName, bool& bResult, FSteamVRInputOriginInfo& InputOriginInfo, FName ActionSet);
    TArray<FSteamVRInputBindingInfo> FindSteamVR_InputBindingInfo(FName ActionName, FName ActionSet);
    bool FindSteamVR_ActionOrigin(FName ActionName, FName ActionSet);
    void FindSteamVR_Action(FName ActionName, bool& bResult, FSteamVRAction& FoundAction, FSteamVRActionSet& FoundActionSet, FName ActionSet);
}

class USteamVRTrackingReferences : UActorComponent
{
    FSteamVRTrackingReferencesOnTrackedDeviceActivated OnTrackedDeviceActivated;
    void ComponentTrackingActivatedSignature(int32 DeviceID, FName DeviceClass, FString DeviceModel);
    FSteamVRTrackingReferencesOnTrackedDeviceDeactivated OnTrackedDeviceDeactivated;
    void ComponentTrackingDeactivatedSignature(int32 DeviceID, FName DeviceClass, FString DeviceModel);
    float ActiveDevicePollFrequency;
    FVector TrackingReferenceScale;
    TArray<UStaticMeshComponent*> TrackingReferences;

    bool ShowTrackingReferences(UStaticMesh* TrackingReferenceMesh);
    void HideTrackingReferences();
}

struct UAnimNode_SteamVRInputAnimPose : FAnimNode_Base
{
    EMotionRange MotionRange;
    EHand hand;
    EHandSkeleton HandSkeleton;
    bool Mirror;
    FSteamVRSkeletonTransform SteamVRSkeletalTransform;
    FUE4RetargettingRefs UE4RetargettingRefs;
}

struct UUE4RetargettingRefs
{
    bool bIsInitialized;
    bool bIsRightHanded;
    FVector KnuckleAverageMS_UE4;
    FVector WristSideDirectionLS_UE4;
    FVector WristForwardLS_UE4;
}

struct USteamVRSkeletonTransform
{
    FTransform Root;
    FTransform wrist;
    FTransform Thumb_0;
    FTransform Thumb_1;
    FTransform Thumb_2;
    FTransform Thumb_3;
    FTransform Index_0;
    FTransform Index_1;
    FTransform Index_2;
    FTransform Index_3;
    FTransform Index_4;
    FTransform Middle_0;
    FTransform Middle_1;
    FTransform Middle_2;
    FTransform Middle_3;
    FTransform Middle_4;
    FTransform Ring_0;
    FTransform Ring_1;
    FTransform Ring_2;
    FTransform Ring_3;
    FTransform Ring_4;
    FTransform Pinky_0;
    FTransform Pinky_1;
    FTransform Pinky_2;
    FTransform Pinky_3;
    FTransform Pinky_4;
    FTransform Aux_Thumb;
    FTransform Aux_Index;
    FTransform Aux_Middle;
    FTransform Aux_Ring;
    FTransform Aux_Pinky;
}

struct UAnimNode_SteamVRSetWristTransform : FAnimNode_Base
{
    FPoseLink ReferencePose;
    EHandSkeleton HandSkeleton;
    FPoseLink targetPose;
}

struct USteamVRInputBindingInfo
{
    FName DevicePathName;
    FName InputPathName;
    FName ModeName;
    FName slotName;
}

struct USteamVRInputOriginInfo
{
    int32 TrackedDeviceIndex;
    FString RenderModelComponentName;
    FString TrackedDeviceModel;
}

struct USteamVRActionSet
{
    FString Path;
}

struct USteamVRAction
{
    FName Name;
    FString Path;
}

struct USteamVRFingerSplays
{
    float Thumb_Index;
    float Index_Middle;
    float Middle_Ring;
    float Ring_Pinky;
}

struct USteamVRFingerCurls
{
    float Thumb;
    float Index;
    float Middle;
    float Ring;
    float Pinky;
}

#endif
