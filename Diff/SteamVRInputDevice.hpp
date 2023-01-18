#ifndef UE4SS_SDK_SteamVRInputDevice_HPP
#define UE4SS_SDK_SteamVRInputDevice_HPP

#include "SteamVRInputDevice_enums.hpp"

struct FAnimNode_SteamVRInputAnimPose : public FAnimNode_Base
{
    EMotionRange MotionRange;
    EHand hand;
    EHandSkeleton HandSkeleton;
    bool Mirror;
    FSteamVRSkeletonTransform SteamVRSkeletalTransform;
    FUE4RetargettingRefs UE4RetargettingRefs;

};

struct FAnimNode_SteamVRSetWristTransform : public FAnimNode_Base
{
    FPoseLink ReferencePose;
    EHandSkeleton HandSkeleton;
    FPoseLink targetPose;

};

struct FSteamVRAction
{
    FName Name;
    FString Path;

};

struct FSteamVRActionSet
{
    FString Path;

};

struct FSteamVRFingerCurls
{
    float Thumb;
    float Index;
    float Middle;
    float Ring;
    float Pinky;

};

struct FSteamVRFingerSplays
{
    float Thumb_Index;
    float Index_Middle;
    float Middle_Ring;
    float Ring_Pinky;

};

struct FSteamVRInputBindingInfo
{
    FName DevicePathName;
    FName InputPathName;
    FName ModeName;
    FName slotName;

};

struct FSteamVRInputOriginInfo
{
    int32 TrackedDeviceIndex;
    FString RenderModelComponentName;
    FString TrackedDeviceModel;

};

struct FSteamVRSkeletonTransform
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

};

struct FUE4RetargettingRefs
{
    bool bIsInitialized;
    bool bIsRightHanded;
    FVector KnuckleAverageMS_UE4;
    FVector WristSideDirectionLS_UE4;
    FVector WristForwardLS_UE4;

};

class USteamVRInputDeviceFunctionLibrary : public UBlueprintFunctionLibrary
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
};

class USteamVRTrackingReferences : public UActorComponent
{
    FSteamVRTrackingReferencesOnTrackedDeviceActivated OnTrackedDeviceActivated;
    void ComponentTrackingActivatedSignature(int32 DeviceID, FName DeviceClass, FString DeviceModel);
    FSteamVRTrackingReferencesOnTrackedDeviceDeactivated OnTrackedDeviceDeactivated;
    void ComponentTrackingDeactivatedSignature(int32 DeviceID, FName DeviceClass, FString DeviceModel);
    float ActiveDevicePollFrequency;
    FVector TrackingReferenceScale;
    TArray<class UStaticMeshComponent*> TrackingReferences;

    bool ShowTrackingReferences(class UStaticMesh* TrackingReferenceMesh);
    void HideTrackingReferences();
};

#endif
