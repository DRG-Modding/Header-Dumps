#ifndef UE4SS_SDK_ABP_SlugShowroom_HPP
#define UE4SS_SDK_ABP_SlugShowroom_HPP

class UABP_SlugShowroom_C : public UEnemyAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_SlugShowroom(int32 EntryPoint);
};

#endif
