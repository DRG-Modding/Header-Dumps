#ifndef UE4SS_SDK_SER_FindPlayer_HPP
#define UE4SS_SDK_SER_FindPlayer_HPP

class USER_FindPlayer_C : UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float MaxDistance;
    bool MustBeAlive;
    FBlackboardKeySelector PlayerKey;

    void FindNearestPlayer(AActor* From, UPlayerCharacter* NewPlayer, bool CallFunc_IsValid_ReturnValue, UPlayerCharacter* CallFunc_GetNearestPlayer_ReturnValue);
    void ReceiveTickAI(UAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_SER_FindPlayer(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds);
}

#endif
