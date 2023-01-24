#ifndef UE4SS_SDK_TSK_ChangeDestIfFarAwayFromPlayer_HPP
#define UE4SS_SDK_TSK_ChangeDestIfFarAwayFromPlayer_HPP

class UTSK_ChangeDestIfFarAwayFromPlayer_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector DestKey;
    float MaxDistToPlayers;
    float ApproximateDestDistance;
    FBlackboardKeySelector PlayerKey;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_ChangeDestIfFarAwayFromPlayer(int32 EntryPoint);
};

#endif
