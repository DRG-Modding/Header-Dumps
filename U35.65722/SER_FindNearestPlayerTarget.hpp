#ifndef UE4SS_SDK_SER_FindNearestPlayerTarget_HPP
#define UE4SS_SDK_SER_FindNearestPlayerTarget_HPP

class USER_FindNearestPlayerTarget_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;
    class APlayerCharacter* NewTarget;
    float MaxRange;
    bool MustBeAlive;
    bool ChangeTarget;
    bool ClearIfNone;
    bool accountForAttackers;
    bool ChangeTargeOnlyBasedOnDistance;
    class APawn* MyPawn;

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_SER_FindNearestPlayerTarget(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, class APlayerCharacter* CallFunc_GetPlayerTarget_ReturnValue, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetDistanceTo_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
};

#endif
