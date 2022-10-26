#ifndef UE4SS_SDK_SER_FindPlayer_HPP
#define UE4SS_SDK_SER_FindPlayer_HPP

class USER_FindPlayer_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float MaxDistance;
    bool MustBeAlive;
    FBlackboardKeySelector PlayerKey;

    void FindNearestPlayer(class AActor* From);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_SER_FindPlayer(int32 EntryPoint);
};

#endif
