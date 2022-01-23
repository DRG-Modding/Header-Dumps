#ifndef UE4SS_SDK_BP_CaretakerDroneAction_UNUSED_HPP
#define UE4SS_SDK_BP_CaretakerDroneAction_UNUSED_HPP

class UBP_CaretakerDroneAction_UNUSED_C : public UBP_CaretakerActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 DroneCount;
    int32 MaxDroneCount;
    int32 DronesPerWave;
    FBP_CaretakerDroneAction_UNUSED_COnDroneKilled OnDroneKilled;
    void OnDroneKilled();
    FBP_CaretakerDroneAction_UNUSED_COnAllDronesKilled OnAllDronesKilled;
    void OnAllDronesKilled();
    TArray<class APawn*> Drones;
    TArray<FName> BuildLocations;

    bool CanUse(bool CallFunc_Less_IntInt_ReturnValue);
    void OnStarted();
    void DroneSpawned(class APawn* enemy);
    void DroneKilled(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_CaretakerDroneAction_UNUSED(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, FExecuteUbergraph_BP_CaretakerDroneAction_UNUSEDK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APawn* K2Node_CustomEvent_enemy, int32 Temp_int_Variable, class UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable_1, FExecuteUbergraph_BP_CaretakerDroneAction_UNUSEDK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetNumPlayers_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class APawn* CallFunc_Array_Get_Item, class AAIController* CallFunc_GetAIController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AAIC_PatrolBot_C* K2Node_DynamicCast_AsAIC_Patrol_Bot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class ACaretaker* CallFunc_GetCaretaker_ReturnValue, bool CallFunc_HasAutority_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue);
    void OnAllDronesKilled__DelegateSignature();
    void OnDroneKilled__DelegateSignature();
};

#endif
