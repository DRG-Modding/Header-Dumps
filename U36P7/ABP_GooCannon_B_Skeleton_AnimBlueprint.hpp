#ifndef UE4SS_SDK_ABP_GooCannon_B_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_ABP_GooCannon_B_Skeleton_AnimBlueprint_HPP

class UABP_GooCannon_B_Skeleton_AnimBlueprint_C : public UGooGunAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;
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
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    class UAnimMontage* BarrelBoostMontage;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_E259F76345A0B619B66F21BD90BAE003();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_ApplyAdditive_7E5D13D445D959147B41D991B0367056();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_2B74B9364BCD8EE1EE5CF1B04A9D384F();
    void AnimNotify_BarrelBoostBegin();
    void AnimNotify_BarrelBoostEnd();
    void BlueprintBeginPlay();
    void OnMontageEnded_Event_0(class UAnimMontage* Montage, bool bInterrupted);
    void ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint(int32 EntryPoint);
};

#endif
