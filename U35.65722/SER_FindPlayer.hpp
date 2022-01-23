#ifndef UE4SS_SDK_SER_FindPlayer_HPP
#define UE4SS_SDK_SER_FindPlayer_HPP

class USER_FindPlayer_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float MaxDistance;
    bool MustBeAlive;
    FBlackboardKeySelector PlayerKey;

    void FindNearestPlayer(class AActor* From, class APlayerCharacter* NewPlayer, bool CallFunc_IsValid_ReturnValue, class APlayerCharacter* CallFunc_GetNearestPlayer_ReturnValue);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_SER_FindPlayer(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds);
};

#endif
