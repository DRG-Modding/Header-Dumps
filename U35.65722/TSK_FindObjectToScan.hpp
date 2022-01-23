#ifndef UE4SS_SDK_TSK_FindObjectToScan_HPP
#define UE4SS_SDK_TSK_FindObjectToScan_HPP

class UTSK_FindObjectToScan_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float SearchRadius;
    FBlackboardKeySelector Target;

    bool IsValidObjectToScan(class AActor* Object, class AAIC_Prospector_C* Prospectorclass USimpleObjectInfoComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SelectRandomTarget(TArray<class AActor*>& Actors, class AAIC_Prospector_C* Prospector, class AActor*& Target, int32 Index, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValidObjectToScan_ReturnValue);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindObjectToScan(int32 EntryPoint, const TArray<TEnumAsByte<EObjectTypeQuery>>& K2Node_MakeArray_Array, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AAIC_Prospector_C* K2Node_DynamicCast_AsAIC_Prospector, bool K2Node_DynamicCast_bSuccess, const TArray<class AActor*>& K2Node_MakeArray_Array_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_SelectRandomTarget_Target, bool CallFunc_IsValid_ReturnValue);
};

#endif
