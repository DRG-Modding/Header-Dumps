#ifndef UE4SS_SDK_BP_CaretakerActionBase_HPP
#define UE4SS_SDK_BP_CaretakerActionBase_HPP

class UBP_CaretakerActionBase_C : public UCaretakerActionComponent
{
    TArray<FName> DroneLaunchSockets;
    TArray<FName> PhaseBombSockets;
    float EstimatedStartDuration;
    float InitialDelay;

    void SpawnPatrolBots(int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, int32 CallFunc_Max_ReturnValue, FVector CallFunc_RandomUnitVector_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 Temp_int_Variable, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ACaretaker* CallFunc_GetCaretaker_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
    void GetEstimatedStartDuration(float& StartDuration);
    void GetClosestPhaseBombSocket(FVector Location, FName& Result, FName ClosestResult, float Closest, float NewDistance, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACaretaker* K2Node_DynamicCast_AsCaretaker, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, float CallFunc_Vector_DistanceSquared_ReturnValue);
    bool HasAutority(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
    void GetClosestLaunchLocation(FVector& TargetLocation, FVector& Result, FVector ReturnLocation, float NewDistance, float Closest, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACaretaker* K2Node_DynamicCast_AsCaretaker, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, float CallFunc_Vector_DistanceSquared_ReturnValue);
    FVector GetRandomLaunchLocation(class AActor* CallFunc_GetOwner_ReturnValue, FName CallFunc_Array_GetRandom_Item, class ACaretaker* K2Node_DynamicCast_AsCaretaker, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_GetSocketLocation_ReturnValue);
};

#endif
