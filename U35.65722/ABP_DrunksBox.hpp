#ifndef UE4SS_SDK_ABP_DrunksBox_HPP
#define UE4SS_SDK_ABP_DrunksBox_HPP

class UABP_DrunksBox_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    class ABP_DrinksBox_C* DrinkBox;
    bool State;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_95ABF56E43B362B4B6AC8EA8B4EF117C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_2D0B571345FB72043DF8B29C32D51C60();
    void BlueprintBeginPlay();
    void OnStateChanged_Event_0(uint8 State);
    void ExecuteUbergraph_ABP_DrunksBox(int32 EntryPoint, uint8 K2Node_CustomEvent_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, FExecuteUbergraph_ABP_DrunksBoxK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_DrinksBox_C* K2Node_DynamicCast_AsBP_Drinks_Box, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

#endif
