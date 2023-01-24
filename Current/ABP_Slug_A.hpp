#ifndef UE4SS_SDK_ABP_Slug_A_HPP
#define UE4SS_SDK_ABP_Slug_A_HPP

class UABP_Slug_A_C : public UEnemyAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_Slot AnimGraphNode_Slot;
    int32 Picked;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Slug_A_AnimGraphNode_TransitionResult_294DDAB341123081E8C9C3A03F396AFC();
    void ExecuteUbergraph_ABP_Slug_A(int32 EntryPoint);
};

#endif
