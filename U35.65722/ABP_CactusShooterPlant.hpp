#ifndef UE4SS_SDK_ABP_CactusShooterPlant_HPP
#define UE4SS_SDK_ABP_CactusShooterPlant_HPP

class UABP_CactusShooterPlant_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    bool IsIdle;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintBeginPlay();
    void OnChangeState(bool IsIdle);
    void ExecuteUbergraph_ABP_CactusShooterPlant(int32 EntryPoint, bool K2Node_CustomEvent_IsIdle, FExecuteUbergraph_ABP_CactusShooterPlantK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_CactusShooterPlant_C* K2Node_DynamicCast_AsBP_Cactus_Shooter_Plant, bool K2Node_DynamicCast_bSuccess);
};

#endif
