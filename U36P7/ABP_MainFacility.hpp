#ifndef UE4SS_SDK_ABP_MainFacility_HPP
#define UE4SS_SDK_ABP_MainFacility_HPP

class UABP_MainFacility_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    bool IsOpen;

    void AnimGraph(FPoseLink& AnimGraph);
    void SetOpen(bool Open);
    void AnimNotify_VauleOpened();
    void ExecuteUbergraph_ABP_MainFacility(int32 EntryPoint);
};

#endif
