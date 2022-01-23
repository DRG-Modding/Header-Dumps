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
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PatrolBot_AnimGraphNode_ApplyAdditive_A24F73B94975587994E87DAC60B323FC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PatrolBot_AnimGraphNode_ModifyBone_F8334A8A4164FA69170301978E6393D2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PatrolBot_AnimGraphNode_ModifyBone_1DEA0D8E4FD5E0CEF9D4619583756D57();
    void ExecuteUbergraph_ABP_PatrolBot(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, float CallFunc_GetCurveValue_ReturnValue, bool Temp_bool_Variable_1, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_1);
};

#endif
