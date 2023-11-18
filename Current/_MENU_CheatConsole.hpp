#ifndef UE4SS_SDK__MENU_CheatConsole_HPP
#define UE4SS_SDK__MENU_CheatConsole_HPP

class U_MENU_CheatConsole_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* LookingForServers;
    class UBasic_ButtonScalable2_C* Basic_AdvanceCampaign;
    class UBasic_ButtonScalable2_C* Basic_CompleteCampaign;
    class UBasic_ButtonScalable2_C* Basic_Connect;
    class UBasic_ButtonScalable2_C* Basic_ForceCrates;
    class UBasic_ButtonScalable2_C* Basic_ForceLostPack;
    class UBasic_ButtonScalable2_C* Basic_ForgeSchematics;
    class UBasic_ButtonScalable2_C* Basic_GivePickaxeVanity;
    class UBasic_ButtonScalable2_C* Basic_GiveRandomSchematic;
    class UBasic_ButtonScalable2_C* Basic_GiveSchematics;
    class UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader;
    class UBasic_ButtonScalable2_C* Basic_ResetPickaxeVanity;
    class UBasic_ButtonScalable2_C* Basic_ResetSchematics;
    class UBasic_ButtonScalable2_C* Basic_ResetUpgrades;
    class UBasic_ButtonScalable2_C* Basic_RotateDeepDive;
    class UBasic_ButtonScalable2_C* Basic_RotateMissionOnce;
    class UBasic_ButtonScalable2_C* Basic_RotateMissions;
    class UBasic_ButtonScalable2_C* Basic_ShowAllCreatures;
    class UBasic_ButtonScalable2_C* Basic_StartMission;
    class UBasic_ButtonScalable2_C* Basic_UnlockAllUpgrades;
    class UBasic_ButtonScalable2_C* Basic_UnlockAllWeapons;
    class UBasic_ButtonScalable2_C* Button_Credits;
    class UBasic_ButtonScalable2_C* Button_CustomMission;
    class UBasic_ButtonScalable2_C* Button_Perks;
    class UBasic_ButtonScalable2_C* Button_Resources;
    class UBasic_ButtonScalable2_C* Button_XP;
    class UEditableTextBox* ConnectString;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    class UUI_ForceOtherSpecialEvent_C* UI_ForceOtherSpecialEvent;
    class UUI_ForceSeasonEvent_C* UI_ForceSeasonEvent;
    class UUI_ForceMachineEvent_C* UI_ForceSpecialEvent;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnLoaded_5087EABD4CB81111640A91B2888B99F6(UClass* Loaded);
    void PreConstruct(bool IsDesignTime);
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
    void BndEvt___MENU_CheatConsole_Basic_RotateMissionOnce_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature();
    void ExecuteUbergraph__MENU_CheatConsole(int32 EntryPoint);
};

#endif
