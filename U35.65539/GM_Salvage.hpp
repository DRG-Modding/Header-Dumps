#ifndef UE4SS_SDK_GM_Salvage_HPP
#define UE4SS_SDK_GM_Salvage_HPP

class AGM_Salvage_C : UBP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* UplinkComplete_Cue;
    UAudioComponent* DroppodMuleReady_Cue;
    AMiningPod* DropPod;
    AEVENT_DropPodDefense_Base_C* DefenseEvent;
    TArray<AActor*> MulesSalvaged;
    TArray<ABP_Salvage_Point_C*> RepairPoints;
    UOBJ_1st_Salvage_C* Objective;
    TArray<TSubclassOf<AEVENT_DropPodDefense_Base_C>> RepairEvents;
    int32 MollyFailsafeCounter;
    int32 MollyCloseCounter;
    TMap<TSubclassOf<ABP_Salvage_Point_C>, int32> SalvagePointsAndDist;

    void UpdateFailsafeMollyCounters(FVector v2, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
    void SpawnRepairPoints(TSubclassOf<ABP_Salvage_Point_C> PointClass, TArray<FVector> locationsToAvoid, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<TSubclassOf<ABP_Salvage_Point_C>>& CallFunc_Map_Keys_Keys, float CallFunc_Conv_IntToFloat_ReturnValue, TSubclassOf<ABP_Salvage_Point_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, FTransform CallFunc_FindRepairPointLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_Salvage_Point_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2);
    void EnableNextRepairPoint(ABP_Salvage_Point_C* CallFunc_Array_Get_Item);
    void OnLevelGenerationComplete(int32 pass);
    void Call DropPod();
    void DonkeyButtonPressed();
    void ReachedDropShip();
    void RepairPoint_Repaired(AActor* RepairPoint);
    void DefendFail();
    void DefendDone();
    void OnCountdownFinished();
    void Countdowncomplete();
    void ActivateDonkeyButton();
    void OnMuleBayOpenedDispatch_Event_0();
    void OnObjectivesInitialized();
    void AllActorsSalaged();
    void Cheat_ActivateDropPod();
    void Cheat_FinishSalvagePoint();
    void ExecuteUbergraph_GM_Salvage(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnMuleBayOpenedDispatch__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, OnAllActorsSalvaged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, Delegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, int32 K2Node_Event_pass, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, AActor* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, UBP_MiniMule_Salvage_C* K2Node_DynamicCast_AsBP_Mini_Mule_Salvage, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UBP_DropPod_Base_C* K2Node_DynamicCast_AsBP_Drop_Pod_Base, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_GetDonkeyReturnPickupLocation_ReturnValue, AActor* K2Node_CustomEvent_RepairPoint, UBP_DropPod_Base_C* K2Node_DynamicCast_AsBP_Drop_Pod_Base_1, bool K2Node_DynamicCast_bSuccess_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, ABP_Salvage_Point_C* CallFunc_Array_Get_Item_1, ABP_Salvage_Point_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, TSubclassOf<UEVENT_DropPodDefense_Base_C> CallFunc_Array_Get_Item_3, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UEVENT_DropPodDefense_Base_C* CallFunc_FinishSpawningActor_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, UOBJ_1st_Salvage_C* K2Node_DynamicCast_AsOBJ_1st_Salvage, bool K2Node_DynamicCast_bSuccess_3, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, FText CallFunc_MakeLiteralText_ReturnValue_1, ABP_Salvage_Point_C* CallFunc_Array_Get_Item_4, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UBP_Donkey_C* K2Node_DynamicCast_AsBP_Donkey, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, DefendSucceded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, UBP_Donkey_C* K2Node_DynamicCast_AsBP_Donkey_1, bool K2Node_DynamicCast_bSuccess_5, DefendFailed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, UBP_DropPod_Base_C* K2Node_DynamicCast_AsBP_Drop_Pod_Base_2, bool K2Node_DynamicCast_bSuccess_6, UObjective* CallFunc_GetPrimaryObjective_ReturnValue_1, UOBJ_1st_Salvage_C* K2Node_DynamicCast_AsOBJ_1st_Salvage_1, bool K2Node_DynamicCast_bSuccess_7);
}

#endif
