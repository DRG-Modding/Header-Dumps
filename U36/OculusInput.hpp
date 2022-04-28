#ifndef UE4SS_SDK_OculusInput_HPP
#define UE4SS_SDK_OculusInput_HPP

#include "OculusInput_enums.hpp"

struct FOculusCapsuleCollider
{
    class UCapsuleComponent* Capsule;
    EBone BoneId;

};

class UOculusHandComponent : public UPoseableMeshComponent
{
    EOculusHandType SkeletonType;
    EOculusHandType MeshType;
    EConfidenceBehavior ConfidenceBehavior;
    ESystemGestureBehavior SystemGestureBehavior;
    class UMaterialInterface* SystemGestureMaterial;
    bool bInitializePhysics;
    bool bUpdateHandScale;
    class UMaterialInterface* MaterialOverride;
    TMap<class EBone, class FName> BoneNameMappings;
    TArray<FOculusCapsuleCollider> CollisionCapsules;
    bool bSkeletalMeshInitialized;

};

class UOculusInputFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsPointerPoseValid(const EOculusHandType DeviceHand, const int32 ControllerIndex);
    bool IsHandTrackingEnabled();
    TArray<FOculusCapsuleCollider> InitializeHandPhysics(EOculusHandType SkeletonType, class USkinnedMeshComponent* HandComponent, const float WorldToMeters);
    ETrackingConfidence GetTrackingConfidence(const EOculusHandType DeviceHand, const int32 ControllerIndex);
    FTransform GetPointerPose(const EOculusHandType DeviceHand, const int32 ControllerIndex);
    bool GetHandSkeletalMesh(class USkeletalMesh* HandSkeletalMesh, EOculusHandType SkeletonType, EOculusHandType MeshType, const float WorldToMeters);
    float GetHandScale(const EOculusHandType DeviceHand, const int32 ControllerIndex);
    EOculusHandType GetDominantHand(const int32 ControllerIndex);
    FQuat GetBoneRotation(const EOculusHandType DeviceHand, const EBone BoneId, const int32 ControllerIndex);
    FString GetBoneName(EBone BoneId);
};

#endif
