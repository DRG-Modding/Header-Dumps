#ifndef UE4SS_SDK_ABP_Minehead_HPP
#define UE4SS_SDK_ABP_Minehead_HPP

class UABP_Minehead_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;
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
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_StateResult AnimGraphNode_StateResult_6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
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
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    TEnumAsByte<Minehead_State::Type> MineheadState;
    FRotator RollersRotation;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_BE7B4A3A4DB7984B7F8675A7BE9552A8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_A974B6D84A59ABAC76AEF3A3DFA96A3F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_8F870DD44BA6475DA17BBD95DE5FD79D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_CD6921CA484552E3ED954095989FAF66();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_5DAFECCF45F88AF0D1FD56B267E22F9F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_821F98F54C7110D433237EB16D08B689();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_B1181FA440FA27BF6F5DA9821E82DA5D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_D36B466A4B2D9BB7B4519380C9A0A3F4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_78A1628248B97F24D5CBE5B118E4D533();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_B4329DC04A62B9781B0AB1ABAA19A8CF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_6461BC944DB6CAE4CD86BD9975FE4E5E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_A186017A44B3CAF4F1C0BB9270058383();
    void BlueprintInitializeAnimation();
    void MinheadStateChanged(TEnumAsByte<Minehead_State::Type> State);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_Minehead(int32 EntryPoint);
};

#endif
