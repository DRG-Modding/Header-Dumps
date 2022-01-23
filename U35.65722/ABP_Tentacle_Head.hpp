#ifndef UE4SS_SDK_ABP_Tentacle_Head_HPP
#define UE4SS_SDK_ABP_Tentacle_Head_HPP

class UABP_Tentacle_Head_C : public UFacilityTentacleHeadAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_Slot AnimGraphNode_Slot_2;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Tentacle_Head(int32 EntryPoint);
};

#endif
