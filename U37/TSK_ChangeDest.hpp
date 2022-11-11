#ifndef UE4SS_SDK_TSK_ChangeDest_HPP
#define UE4SS_SDK_TSK_ChangeDest_HPP

class UTSK_ChangeDest_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector DestKey;
    float ApproximatePlayerDistance;

    void FindPlayer(class AActor* From, class APlayerCharacter*& Player, FVector& Location);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_ChangeDest(int32 EntryPoint);
};

#endif
