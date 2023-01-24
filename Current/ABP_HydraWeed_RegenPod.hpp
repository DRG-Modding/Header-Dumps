#ifndef UE4SS_SDK_ABP_HydraWeed_RegenPod_HPP
#define UE4SS_SDK_ABP_HydraWeed_RegenPod_HPP

class UABP_HydraWeed_RegenPod_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HydraWeed_RegenPod(int32 EntryPoint);
};

#endif
