#ifndef UE4SS_SDK_ABP_JellyFish_Egg_A_HPP
#define UE4SS_SDK_ABP_JellyFish_Egg_A_HPP

class UABP_JellyFish_Egg_A_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_JellyFish_Egg_A(int32 EntryPoint);
};

#endif
