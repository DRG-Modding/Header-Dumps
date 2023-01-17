#ifndef UE4SS_SDK_SER_GetEnemyTarget_Chance_HPP
#define UE4SS_SDK_SER_GetEnemyTarget_Chance_HPP

class USER_GetEnemyTarget_Chance_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float range;
    FBlackboardKeySelector Target;
    bool Require LoS;
    FGameplayTagQuery Query;
    FBlackboardKeySelector FromKey;
    bool UseFromActor;
    float SkipChance;

    void GetEnemyTargetChance(class AActor* FromAcor);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_SER_GetEnemyTarget_Chance(int32 EntryPoint);
};

#endif
