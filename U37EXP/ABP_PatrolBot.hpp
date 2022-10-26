#ifndef UE4SS_SDK_ABP_PatrolBot_HPP
#define UE4SS_SDK_ABP_PatrolBot_HPP

class UABP_PatrolBot_C : public UPatrolBotAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_PatrolBot(int32 EntryPoint);
};

#endif
