#ifndef UE4SS_SDK_ABP_HydraWeed_Shooter_HPP
#define UE4SS_SDK_ABP_HydraWeed_Shooter_HPP

class UABP_HydraWeed_Shooter_C : public UShootingPlantAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;
    bool WaitToGrow;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydraWeed_Shooter_AnimGraphNode_BlendSpaceEvaluator_D9F6E6D649EE4F28458FB48849A1E87A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydraWeed_Shooter_AnimGraphNode_BlendSpaceEvaluator_CB5BB89E45E64D98B4798A919F0F0B09();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydraWeed_Shooter_AnimGraphNode_TransitionResult_8FC3F39141410AB1112C5DA64C0D50BC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydraWeed_Shooter_AnimGraphNode_TransitionResult_B4739F754CB6172441192B8DFB8EABAD();
    void ExecuteUbergraph_ABP_HydraWeed_Shooter(int32 EntryPoint);
};

#endif
