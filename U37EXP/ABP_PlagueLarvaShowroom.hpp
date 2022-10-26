#ifndef UE4SS_SDK_ABP_PlagueLarvaShowroom_HPP
#define UE4SS_SDK_ABP_PlagueLarvaShowroom_HPP

class UABP_PlagueLarvaShowroom_C : public UEnemyAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_PlagueLarvaShowroom(int32 EntryPoint);
};

#endif
