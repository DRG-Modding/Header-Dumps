#ifndef UE4SS_SDK_BP_CaretakerDroneAction_UNUSED_HPP
#define UE4SS_SDK_BP_CaretakerDroneAction_UNUSED_HPP

class UBP_CaretakerDroneAction_UNUSED_C : UBP_CaretakerActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 DroneCount;
    int32 MaxDroneCount;
    int32 DronesPerWave;
    FBP_CaretakerDroneAction_UNUSED_COnDroneKilled OnDroneKilled;
    void OnDroneKilled();
    FBP_CaretakerDroneAction_UNUSED_COnAllDronesKilled OnAllDronesKilled;
    void OnAllDronesKilled();
    TArray<APawn*> Drones;
    TArray<FName> BuildLocations;

    bool CanUse(bool CallFunc_Less_IntInt_ReturnValue);
    void OnStarted();
    void DroneSpawned(APawn* enemy);
    void DroneKilled(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_CaretakerDroneAction_UNUSED(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, EnemySpawnedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, APawn* K2Node_CustomEvent_enemy, int32 Temp_int_Variable, UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable_1, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetNumPlayers_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, APawn* CallFunc_Array_Get_Item, UAIController* CallFunc_GetAIController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UAIC_PatrolBot_C* K2Node_DynamicCast_AsAIC_Patrol_Bot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, UCaretaker* CallFunc_GetCaretaker_ReturnValue, bool CallFunc_HasAutority_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue);
    void OnAllDronesKilled__DelegateSignature();
    void OnDroneKilled__DelegateSignature();
}

#endif
