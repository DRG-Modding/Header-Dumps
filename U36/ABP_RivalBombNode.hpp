#ifndef UE4SS_SDK_ABP_RivalBombNode_HPP
#define UE4SS_SDK_ABP_RivalBombNode_HPP

class UABP_RivalBombNode_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    float Rotation;
    bool IsClosed;
    bool IsPushing;
    bool IsHacked;
    float AnimStartPos;
    ERivalBombNodeState State;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RivalBombNode_AnimGraphNode_ModifyBone_1D8CBED14994DE1EBF73C6A5DBB106A8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RivalBombNode_AnimGraphNode_TransitionResult_5735B29D456F96F439EC3FAB4D342034();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RivalBombNode_AnimGraphNode_TransitionResult_3064F7F04AF837F87FED898D68CAABD6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RivalBombNode_AnimGraphNode_TransitionResult_F54F43D74C47419CCDCE1B8E55BA8B59();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RivalBombNode_AnimGraphNode_TransitionResult_EA46FDD045B0705DA9B6128A3F4CB6A4();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_RivalBombNode(int32 EntryPoint);
};

#endif
