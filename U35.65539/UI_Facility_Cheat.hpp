#ifndef UE4SS_SDK_UI_Facility_Cheat_HPP
#define UE4SS_SDK_UI_Facility_Cheat_HPP

class UUI_Facility_Cheat_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCheatMenu_BasicButtonWText_C* CheatMenu_CallTetherdispenser1;
    UCheatMenu_BasicButtonWText_C* CheatMenu_CallTetherdispenser2;
    UCheatMenu_BasicButtonWText_C* CheatMenu_DeactivateShieldGenerators;
    UCheatMenu_BasicButtonWText_C* CheatMenu_SetGeneratorProgress1;
    UCheatMenu_BasicButtonWText_C* CheatMenu_SetGeneratorProgress2;
    UCheatMenu_BasicButtonWText_C* CheatMenu_StartCaretakerFight;
    UCheatMenu_BasicButtonWText_C* CheatMenu_StartCaretakerFight_NoWakeup;
    UCheatMenu_BasicButtonWText_C* CheatMenu_TeleportToGen1;
    UCheatMenu_BasicButtonWText_C* CheatMenu_TeleportToGen2;
    UCheatMenu_BasicButtonWText_C* CheatMenu_TeleportToMainFacility;
    UVerticalBox* Left;
    UVerticalBox* Left_1;
    int32 GeneratorIndex;

    void GetGenerator(int32 Index, UBP_Facility_PowerStation_GeneratorBase_C*& Generator, TArray<UBP_Facility_PowerStation_GeneratorBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, UBP_Facility_PowerStation_GeneratorBase_C* CallFunc_Array_Get_Item);
    void TeleportToMuleC(USalvageObjective* CallFunc_GetSalvageObjective_AsSalvage_Objective, UMiniMule* CallFunc_Array_Get_Item);
    void TeleportToMuleB(USalvageObjective* CallFunc_GetSalvageObjective_AsSalvage_Objective, UMiniMule* CallFunc_Array_Get_Item);
    void TeleportToMuleA(USalvageObjective* CallFunc_GetSalvageObjective_AsSalvage_Objective, UMiniMule* CallFunc_Array_Get_Item);
    void TeleportToMule(AActor* MULE, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
    UCheatMenu_BasicButtonWText_C* CreateMinimuleButton(FString MuleNameFString CallFunc_Concat_StrStr_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, UCheatMenu_BasicButtonWText_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
    void GetSalvageObjective(USalvageObjective*& AsSalvage Objective, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, USalvageObjective* K2Node_DynamicCast_AsSalvage_Objective, bool K2Node_DynamicCast_bSuccess);
    void Construct();
    void BndEvt__CheatMenu_BasicButtonWText_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_ActivateSalvagePod_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_SetGeneratorProgress1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_CallTetherdispenser1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_CallTetherdispenser2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_SetGeneratorProgress2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_TeleportToGen1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_TeleportToGen2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_TeleportToMainFacility_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_StartCaretakerFight_NoWakeup_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_UI_Facility_Cheat(int32 EntryPoint, UENE_FacilityCaretaker_C* CallFunc_GetActorOfClass_ReturnValue, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button_8, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button_7, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button_9, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button_6, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button_5, UBP_Facility_PowerStation_GeneratorBase_C* CallFunc_GetGenerator_Generator, UBP_Facility_PowerStation_GeneratorBase_C* CallFunc_GetGenerator_Generator_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button_4, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button_3, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UBP_Facility_PowerStation_GeneratorBase_C* CallFunc_GetGenerator_Generator_2, bool CallFunc_IsValid_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UBP_Facility_PowerStation_GeneratorBase_C* CallFunc_GetGenerator_Generator_3, bool CallFunc_IsValid_ReturnValue_3, UBP_Facility_PowerStation_GeneratorBase_C* CallFunc_GetGenerator_Generator_4, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button, UBP_MainFacility_DataVault_C* CallFunc_GetActorOfClass_ReturnValue_1, UBP_MainFacility_DataVault_C* CallFunc_GetActorOfClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, UBP_MainFacility_DataVault_C* CallFunc_GetActorOfClass_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1);
}

#endif