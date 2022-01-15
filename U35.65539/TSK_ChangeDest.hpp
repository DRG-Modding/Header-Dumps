#ifndef UE4SS_SDK_TSK_ChangeDest_HPP
#define UE4SS_SDK_TSK_ChangeDest_HPP

class UTSK_ChangeDest_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector DestKey;
    float ApproximatePlayerDistance;

    void FindPlayer(AActor* From, UPlayerCharacter*& Player, FVector& Location, UPlayerCharacter* FoundPlayer, UPlayerCharacter* CallFunc_GetNearestPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_ChangeDest(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, UPlayerCharacter* CallFunc_FindPlayer_Player, FVector CallFunc_FindPlayer_Location, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos);
}

#endif
