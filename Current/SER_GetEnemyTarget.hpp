#ifndef UE4SS_SDK_SER_GetEnemyTarget_HPP
#define UE4SS_SDK_SER_GetEnemyTarget_HPP

class USER_GetEnemyTarget_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float range;
    FBlackboardKeySelector Target;
    bool Require LoS;
    FGameplayTagQuery Query;
    FBlackboardKeySelector FromKey;
    bool UseFromActor;

    void GetEnemyTarget(class AActor* FromActor);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_SER_GetEnemyTarget(int32 EntryPoint);
};

#endif
