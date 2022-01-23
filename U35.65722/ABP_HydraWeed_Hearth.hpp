#ifndef UE4SS_SDK_ABP_HydraWeed_Hearth_HPP
#define UE4SS_SDK_ABP_HydraWeed_Hearth_HPP

class UABP_HydraWeed_Hearth_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    bool IsOpen;
    bool IsDormant;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintBeginPlay();
    void OnOpenChanged_Event_0(bool IsOpen);
    void OnDormantChanged_Event_0(bool IsDormant);
    void ExecuteUbergraph_ABP_HydraWeed_Hearth(int32 EntryPoint, float CallFunc_Montage_Play_ReturnValue, FExecuteUbergraph_ABP_HydraWeed_HearthK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwningActor_ReturnValue, bool K2Node_CustomEvent_IsOpen, class AENE_HydraWeed_Core_C* K2Node_DynamicCast_AsENE_Hydra_Weed_Core, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_IsDormant, FExecuteUbergraph_ABP_HydraWeed_HearthK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
};

#endif
