#ifndef UE4SS_SDK_SER_GetEnemyTarget_HPP
#define UE4SS_SDK_SER_GetEnemyTarget_HPP

class USER_GetEnemyTarget_C : UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float range;
    FBlackboardKeySelector Target;
    bool Require LoS;
    FGameplayTagQuery Query;
    FBlackboardKeySelector FromKey;
    bool UseFromActor;

    void GetEnemyTarget(AActor* FromActor, AActor* From, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, AActor* K2Node_Select_Default, FVector CallFunc_MakeVector_ReturnValue, AActor* CallFunc_FindClosestEnemyFromActor_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, AActor* CallFunc_FindClosestEnemyFromActor_ReturnValue_1);
    void ReceiveTickAI(UAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_SER_GetEnemyTarget(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds);
}

#endif
