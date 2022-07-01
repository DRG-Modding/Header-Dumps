#ifndef UE4SS_SDK_ABP_Refinery_HPP
#define UE4SS_SDK_ABP_Refinery_HPP

class UABP_Refinery_C : public UFSDRefineryAnimInstance
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
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_9;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;
    FAnimNode_StateResult AnimGraphNode_StateResult_8;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_StateResult AnimGraphNode_StateResult_7;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_StateResult AnimGraphNode_StateResult_6;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_AnimGraphNode_TransitionResult_0A65A9824961E33E599CEF96B5EB7DFC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_AnimGraphNode_TransitionResult_BF1140244D58CC413D54F6A3AE5F295A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_AnimGraphNode_TransitionResult_EDDD7EE44F4DEC2A804B369E71407983();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_AnimGraphNode_TransitionResult_727D1E45471B7D26D1067C90711CF4F7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_AnimGraphNode_TransitionResult_D7D253B24F1FE6407BC756828FC5E5C1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_AnimGraphNode_TransitionResult_AD2005BC490D7374134D96856DF2F9A5();
    void AnimNotify_RocketLaunched();
    void ExecuteUbergraph_ABP_Refinery(int32 EntryPoint);
};

#endif
