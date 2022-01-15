#ifndef UE4SS_SDK_ABP_GooCannon_B_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_ABP_GooCannon_B_Skeleton_AnimBlueprint_HPP

class UABP_GooCannon_B_Skeleton_AnimBlueprint_C : UGooGunAnimInstance
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
    UAnimMontage* BarrelBoostMontage;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_2B74B9364BCD8EE1EE5CF1B04A9D384F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_E259F76345A0B619B66F21BD90BAE003();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_ApplyAdditive_7E5D13D445D959147B41D991B0367056();
    void AnimNotify_BarrelBoostBegin();
    void AnimNotify_BarrelBoostEnd();
    void BlueprintBeginPlay();
    void OnMontageEnded_Event_0(UAnimMontage* Montage, bool bInterrupted);
    void ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, OnMontageEndedMCDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UAnimMontage* K2Node_CustomEvent_Montage, bool K2Node_CustomEvent_bInterrupted, UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
}

#endif
