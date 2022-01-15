#ifndef UE4SS_SDK_TSK_GetPointInFrontOf_HPP
#define UE4SS_SDK_TSK_GetPointInFrontOf_HPP

class UTSK_GetPointInFrontOf_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector Target;
    FBlackboardKeySelector Destination;
    float range;
    int32 Forward;

    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetPointInFrontOf(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_FindNearestPathfinderPoint_ReturnValue);
}

#endif
