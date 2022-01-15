#ifndef UE4SS_SDK__MENU_CheatConsole_HPP
#define UE4SS_SDK__MENU_CheatConsole_HPP

class U_MENU_CheatConsole_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* LookingForServers;
    UBasic_ButtonScalable2_C* Basic_AdvanceCampaign;
    UBasic_ButtonScalable2_C* Basic_CompleteCampaign;
    UBasic_ButtonScalable2_C* Basic_Connect;
    UBasic_ButtonScalable2_C* Basic_ForceCrates;
    UBasic_ButtonScalable2_C* Basic_ForceLostPack;
    UBasic_ButtonScalable2_C* Basic_ForgeSchematics;
    UBasic_ButtonScalable2_C* Basic_GivePickaxeVanity;
    UBasic_ButtonScalable2_C* Basic_GiveRandomSchematic;
    UBasic_ButtonScalable2_C* Basic_GiveSchematics;
    UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader;
    UBasic_ButtonScalable2_C* Basic_ResetPickaxeVanity;
    UBasic_ButtonScalable2_C* Basic_ResetSchematics;
    UBasic_ButtonScalable2_C* Basic_ResetUpgrades;
    UBasic_ButtonScalable2_C* Basic_RotateDeepDive;
    UBasic_ButtonScalable2_C* Basic_RotateMissions;
    UBasic_ButtonScalable2_C* Basic_ShowAllCreatures;
    UBasic_ButtonScalable2_C* Basic_StartMission;
    UBasic_ButtonScalable2_C* Basic_UnlockAllUpgrades;
    UBasic_ButtonScalable2_C* Basic_UnlockAllWeapons;
    UBasic_ButtonScalable2_C* Button_Credits;
    UBasic_ButtonScalable2_C* Button_CustomMission;
    UBasic_ButtonScalable2_C* Button_Perks;
    UBasic_ButtonScalable2_C* Button_Resources;
    UBasic_ButtonScalable2_C* Button_XP;
    UEditableTextBox* ConnectString;
    UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    UUI_ForceSeasonEvent_C* UI_ForceSeasonEvent;
    UUI_ForceSpecialEvent_C* UI_ForceSpecialEvent;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    void OnLoaded_5087EABD4CB81111640A91B2888B99F6(TSubclassOf<UObject> Loaded);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BTN_Back2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnShown();
    void BndEvt__Button_XP_K2Node_ComponentBoundEvent_238_OnClicked__DelegateSignature();
    void BndEvt__Button_Credits_K2Node_ComponentBoundEvent_239_OnClicked__DelegateSignature();
    void BndEvt__Button_Resources_K2Node_ComponentBoundEvent_242_OnClicked__DelegateSignature();
    void BndEvt__Button_Perks_K2Node_ComponentBoundEvent_246_OnClicked__DelegateSignature();
    void BndEvt__Basic_RotateMissions_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
    void BndEvt__Basic_Connect_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature();
    void BndEvt__Basic_UnlockAllWeapons_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature();
    void BndEvt__Basic_ResetUpgrades_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature();
    void BndEvt__Basic_AdvanceCampaign_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__Basic_UnlockAllUpgrades_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__Basic_GiveSchematics_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__Basic_ForgeSchematics_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__Basic_ResetSchematics_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__Basic_GiveRandomSchematic_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__Basic_ForceCrates_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void BndEvt__Basic_StartMission_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void Back Pressed();
    void BndEvt__Basic_GivePickaxeVanity_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void BndEvt__Basic_ResetPickaxeVanity_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
    void BndEvt__Basic_ForceLostPack_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
    void BndEvt__Basic_ShowAllCreatures_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
    void BndEvt__Basic_RotateDeepDive_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
    void BndEvt__Basic_CompleteCampaign_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
    void BndEvt__Button_CustomMission_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
    void ExecuteUbergraph__MENU_CheatConsole(int32 EntryPoint, UWindowManager* CallFunc_GetWindowManager_ReturnValue, TSubclassOf<UObject> K2Node_CustomEvent_Loaded, OnAssetClassLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TSubclassOf<UObject> Temp_class_Variable, TSubclassOf<UWindowWidget> K2Node_ClassDynamicCast_AsWindow_Widget, bool K2Node_ClassDynamicCast_bSuccess, UWindowWidget* CallFunc_OpenWindowFromClass_ReturnValue, bool K2Node_Event_IsDesignTime, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, UBP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState, bool CallFunc_IsServer_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
