#ifndef UE4SS_SDK_GM_Salvage_HPP
#define UE4SS_SDK_GM_Salvage_HPP

class AGM_Salvage_C : public ABP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* UplinkComplete_Cue;
    class UAudioComponent* DroppodMuleReady_Cue;
    class AMiningPod* DropPod;
    class AEVENT_DropPodDefense_Base_C* DefenseEvent;
    TArray<class AActor*> MulesSalvaged;
    TArray<class ABP_Salvage_Point_C*> RepairPoints;
    class UOBJ_1st_Salvage_C* Objective;
    TArray<class TSubclassOf<AEVENT_DropPodDefense_Base_C>> RepairEvents;
    int32 MollyFailsafeCounter;
    int32 MollyCloseCounter;
    TMap<TSubclassOf<ABP_Salvage_Point_C>, int32> SalvagePointsAndDist;

    void UpdateFailsafeMollyCounters(FVector v2, int32 CallFunc_Add_IntInt_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
    void SpawnRepairPoints(TSubclassOf<class ABP_Salvage_Point_C> PointClass, TArray<FVector> locationsToAvoid, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class TSubclassOf<ABP_Salvage_Point_C>>& CallFunc_Map_Keys_Keys, float CallFunc_Conv_IntToFloat_ReturnValue, TSubclassOf<class ABP_Salvage_Point_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, FTransform CallFunc_FindRepairPointLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Salvage_Point_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2);
    void EnableNextRepairPoint(class ABP_Salvage_Point_C* CallFunc_Array_Get_Item);
    void OnLevelGenerationComplete(int32 pass);
    void Call DropPod();
    void DonkeyButtonPressed();
    void ReachedDropShip();
    void RepairPoint_Repaired(class AActor* RepairPoint);
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
    void ExecuteUbergraph_GM_Salvage(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FExecuteUbergraph_GM_SalvageK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_GM_SalvageK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, FExecuteUbergraph_GM_SalvageK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, FExecuteUbergraph_GM_SalvageK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, int32 K2Node_Event_pass, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, class ABP_MiniMule_Salvage_C* K2Node_DynamicCast_AsBP_Mini_Mule_Salvage, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class ABP_DropPod_Base_C* K2Node_DynamicCast_AsBP_Drop_Pod_Base, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_GetDonkeyReturnPickupLocation_ReturnValue, class AActor* K2Node_CustomEvent_RepairPoint, class ABP_DropPod_Base_C* K2Node_DynamicCast_AsBP_Drop_Pod_Base_1, bool K2Node_DynamicCast_bSuccess_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class ABP_Salvage_Point_C* CallFunc_Array_Get_Item_1, class ABP_Salvage_Point_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, TSubclassOf<class AEVENT_DropPodDefense_Base_C> CallFunc_Array_Get_Item_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class AEVENT_DropPodDefense_Base_C* CallFunc_FinishSpawningActor_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class UOBJ_1st_Salvage_C* K2Node_DynamicCast_AsOBJ_1st_Salvage, bool K2Node_DynamicCast_bSuccess_3, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, FText CallFunc_MakeLiteralText_ReturnValue_1, class ABP_Salvage_Point_C* CallFunc_Array_Get_Item_4, FExecuteUbergraph_GM_SalvageK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class ABP_Donkey_C* K2Node_DynamicCast_AsBP_Donkey, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, FExecuteUbergraph_GM_SalvageK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, FExecuteUbergraph_GM_SalvageK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, class ABP_Donkey_C* K2Node_DynamicCast_AsBP_Donkey_1, bool K2Node_DynamicCast_bSuccess_5, FExecuteUbergraph_GM_SalvageK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, class ABP_DropPod_Base_C* K2Node_DynamicCast_AsBP_Drop_Pod_Base_2, bool K2Node_DynamicCast_bSuccess_6, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue_1, class UOBJ_1st_Salvage_C* K2Node_DynamicCast_AsOBJ_1st_Salvage_1, bool K2Node_DynamicCast_bSuccess_7);
};

#endif
