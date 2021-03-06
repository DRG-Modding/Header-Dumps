#ifndef UE4SS_SDK_Tutorial_Hint_Sabotage_FollowTheCables_HPP
#define UE4SS_SDK_Tutorial_Hint_Sabotage_FollowTheCables_HPP

class UTutorial_Hint_Sabotage_FollowTheCables_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class UObjective> Target Objective;
    float DelayAfterFacilityWasSeenBeforeShowingHint;
    bool FoundPowerstation;

    void ReceiveOnInitialized();
    void FacilityWasFound();
    void ExecuteUbergraph_Tutorial_Hint_Sabotage_FollowTheCables(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FExecuteUbergraph_Tutorial_Hint_Sabotage_FollowTheCablesK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, TSubclassOf<class UObjective> CallFunc_GetObjectClass_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetShieldGenerators_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_MainFacility_DataVault_C* K2Node_DynamicCast_AsBP_Main_Facility_Data_Vault, bool K2Node_DynamicCast_bSuccess_1, class ABP_Facility_PowerStation_ShieldGenerator_C* K2Node_DynamicCast_AsBP_Facility_Power_Station_Shield_Generator, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

#endif
