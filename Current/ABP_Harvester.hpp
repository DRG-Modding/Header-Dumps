#ifndef UE4SS_SDK_ABP_Harvester_HPP
#define UE4SS_SDK_ABP_Harvester_HPP

class UABP_Harvester_C : public USimpleMovingEnemyAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    class UAudioComponent* HarvestingSound;

    void AnimGraph(FPoseLink& AnimGraph);
    void AnimNotify_EnterAlive();
    void AnimNotify_ExitAlive();
    void ExecuteUbergraph_ABP_Harvester(int32 EntryPoint);
};

#endif
