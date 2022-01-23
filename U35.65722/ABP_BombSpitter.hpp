#ifndef UE4SS_SDK_ABP_BombSpitter_HPP
#define UE4SS_SDK_ABP_BombSpitter_HPP

class UABP_BombSpitter_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    bool Closed;
    bool ToOpen;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintBeginPlay();
    void OnChangeState(bool Closed, bool Open);
    void ExecuteUbergraph_ABP_BombSpitter(int32 EntryPoint, bool K2Node_CustomEvent_Closed, bool K2Node_CustomEvent_Open, FExecuteUbergraph_ABP_BombSpitterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_BombSpitter_C* K2Node_DynamicCast_AsBP_Bomb_Spitter, bool K2Node_DynamicCast_bSuccess);
};

#endif
