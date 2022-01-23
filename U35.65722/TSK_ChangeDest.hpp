#ifndef UE4SS_SDK_TSK_ChangeDest_HPP
#define UE4SS_SDK_TSK_ChangeDest_HPP

class UTSK_ChangeDest_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector DestKey;
    float ApproximatePlayerDistance;

    void FindPlayer(class AActor* From, class APlayerCharacter*& Player, FVector& Location, class APlayerCharacter* FoundPlayer, class APlayerCharacter* CallFunc_GetNearestPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_ChangeDest(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, class APlayerCharacter* CallFunc_FindPlayer_Player, FVector CallFunc_FindPlayer_Location, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos);
};

#endif
