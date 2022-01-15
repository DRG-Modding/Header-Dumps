#ifndef UE4SS_SDK_ABP_Spike_B_HPP
#define UE4SS_SDK_ABP_Spike_B_HPP

class UABP_Spike_B_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    bool Is Extruded;

    void AnimGraph(FPoseLink& AnimGraph);
    void Set is Extruded(bool Is Extruded, bool Is Triggered);
    void SetupEvent(ABP_SpikeyPlant_C* NewParam);
    void ExecuteUbergraph_ABP_Spike_B(int32 EntryPoint, ABP_SpikeyPlant_C* K2Node_CustomEvent_NewParam, Change state__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Is_Extruded, bool K2Node_CustomEvent_Is_Triggered);
}

#endif
