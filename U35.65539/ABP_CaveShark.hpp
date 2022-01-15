#ifndef UE4SS_SDK_ABP_CaveShark_HPP
#define UE4SS_SDK_ABP_CaveShark_HPP

class UABP_CaveShark_C : USharkAnimInstance
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
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;
    FAnimNode_StateResult AnimGraphNode_StateResult_7;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;
    FAnimNode_StateResult AnimGraphNode_StateResult_6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CaveShark_AnimGraphNode_TransitionResult_7B59457B40ABED780A6C1AAAF39812BE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CaveShark_AnimGraphNode_TransitionResult_79C0F03847D5FAB39611FBAB18F98B8F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CaveShark_AnimGraphNode_TransitionResult_2DEB15DC43FD1A6A099D4BA0017B182F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CaveShark_AnimGraphNode_TransitionResult_BE587DC84F6CF9E8442C988D7763B11D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CaveShark_AnimGraphNode_BlendSpacePlayer_FBA762CE47A85FF9DEAAC5966E6DC40B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CaveShark_AnimGraphNode_SequencePlayer_A6554B054EFDBD939F21A49F648951AD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CaveShark_AnimGraphNode_BlendListByBool_94E55E644588911C5B7146ACC30BB7DD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CaveShark_AnimGraphNode_TransitionResult_85364AAA437573A26A8EFA93D2995103();
    void ExecuteUbergraph_ABP_CaveShark(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
}

#endif
