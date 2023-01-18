#ifndef UE4SS_SDK_TSK_ChangeDestIfFarAway_HPP
#define UE4SS_SDK_TSK_ChangeDestIfFarAway_HPP

class UTSK_ChangeDestIfFarAway_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector DestKey;
    float MaxDistToPlayers;
    float ApproximateDestDistance;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_ChangeDestIfFarAway(int32 EntryPoint);
};

#endif
