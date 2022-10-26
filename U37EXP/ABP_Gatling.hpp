#ifndef UE4SS_SDK_ABP_Gatling_HPP
#define UE4SS_SDK_ABP_Gatling_HPP

class UABP_Gatling_C : public UBeltDrivenAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C();
    void ExecuteUbergraph_ABP_Gatling(int32 EntryPoint);
};

#endif
