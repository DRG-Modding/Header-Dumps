#ifndef UE4SS_SDK_SER_FindNearestPlayerTarget_HPP
#define UE4SS_SDK_SER_FindNearestPlayerTarget_HPP

class USER_FindNearestPlayerTarget_C : UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;
    APlayerCharacter* NewTarget;
    float MaxRange;
    bool MustBeAlive;
    bool ChangeTarget;
    bool ClearIfNone;
    bool accountForAttackers;
    bool ChangeTargeOnlyBasedOnDistance;
    APawn* MyPawn;

    void ReceiveTickAI(UAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_SER_FindNearestPlayerTarget(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, UPlayerCharacter* CallFunc_GetPlayerTarget_ReturnValue, UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetDistanceTo_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
}

#endif
