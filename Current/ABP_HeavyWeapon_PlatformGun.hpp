#ifndef UE4SS_SDK_ABP_HeavyWeapon_PlatformGun_HPP
#define UE4SS_SDK_ABP_HeavyWeapon_PlatformGun_HPP

class UABP_HeavyWeapon_PlatformGun_C : public UPlatformGunAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HeavyWeapon_PlatformGun(int32 EntryPoint);
};

#endif
