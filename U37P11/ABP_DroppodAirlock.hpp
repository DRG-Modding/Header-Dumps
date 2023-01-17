#ifndef UE4SS_SDK_ABP_DroppodAirlock_HPP
#define UE4SS_SDK_ABP_DroppodAirlock_HPP

class UABP_DroppodAirlock_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    class ABP_DropPod_Base_C* DropPod;
    bool OuterOpen;
    bool InnerOpen;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_DroppodAirlock(int32 EntryPoint);
};

#endif
