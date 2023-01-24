#ifndef UE4SS_SDK_ABP_PlagueProjectile_Thrower_HPP
#define UE4SS_SDK_ABP_PlagueProjectile_Thrower_HPP

class UABP_PlagueProjectile_Thrower_C : public UEnemyAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_PlagueProjectile_Thrower(int32 EntryPoint);
};

#endif
