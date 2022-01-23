#ifndef UE4SS_SDK_TSK_GetPointInFrontOf_HPP
#define UE4SS_SDK_TSK_GetPointInFrontOf_HPP

class UTSK_GetPointInFrontOf_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector Target;
    FBlackboardKeySelector Destination;
    float range;
    int32 Forward;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetPointInFrontOf(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_FindNearestPathfinderPoint_ReturnValue);
};

#endif
