#ifndef UE4SS_SDK_ABP_Phase_Bomb_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_ABP_Phase_Bomb_Skeleton_AnimBlueprint_HPP

class UABP_Phase_Bomb_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    bool StartSpin;
    bool StartRise;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void StartSpinning();
    void StartRising();
    void ExecuteUbergraph_ABP_Phase_Bomb_Skeleton_AnimBlueprint(int32 EntryPoint, FExecuteUbergraph_ABP_Phase_Bomb_Skeleton_AnimBlueprintK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ABP_Phase_Bomb_Skeleton_AnimBlueprintK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_PhaseBomb_C* K2Node_DynamicCast_AsBP_Phase_Bomb, bool K2Node_DynamicCast_bSuccess);
};

#endif
