// WidgetBlueprintGeneratedClass _MENU_CheatConsole._MENU_CheatConsole_C
// Size: 0x360 (Inherited: 0x270)
struct U_MENU_CheatConsole_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* LookingForServers; // 0x278(0x08)
	UBasic_ButtonScalable2_C* Basic_AdvanceCampaign; // 0x280(0x08)
	UBasic_ButtonScalable2_C* Basic_CompleteCampaign; // 0x288(0x08)
	UBasic_ButtonScalable2_C* Basic_Connect; // 0x290(0x08)
	UBasic_ButtonScalable2_C* Basic_ForceCrates; // 0x298(0x08)
	UBasic_ButtonScalable2_C* Basic_ForceLostPack; // 0x2a0(0x08)
	UBasic_ButtonScalable2_C* Basic_ForgeSchematics; // 0x2a8(0x08)
	UBasic_ButtonScalable2_C* Basic_GivePickaxeVanity; // 0x2b0(0x08)
	UBasic_ButtonScalable2_C* Basic_GiveRandomSchematic; // 0x2b8(0x08)
	UBasic_ButtonScalable2_C* Basic_GiveSchematics; // 0x2c0(0x08)
	UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader; // 0x2c8(0x08)
	UBasic_ButtonScalable2_C* Basic_ResetPickaxeVanity; // 0x2d0(0x08)
	UBasic_ButtonScalable2_C* Basic_ResetSchematics; // 0x2d8(0x08)
	UBasic_ButtonScalable2_C* Basic_ResetUpgrades; // 0x2e0(0x08)
	UBasic_ButtonScalable2_C* Basic_RotateDeepDive; // 0x2e8(0x08)
	UBasic_ButtonScalable2_C* Basic_RotateMissions; // 0x2f0(0x08)
	UBasic_ButtonScalable2_C* Basic_ShowAllCreatures; // 0x2f8(0x08)
	UBasic_ButtonScalable2_C* Basic_StartMission; // 0x300(0x08)
	UBasic_ButtonScalable2_C* Basic_UnlockAllUpgrades; // 0x308(0x08)
	UBasic_ButtonScalable2_C* Basic_UnlockAllWeapons; // 0x310(0x08)
	UBasic_ButtonScalable2_C* Button_Credits; // 0x318(0x08)
	UBasic_ButtonScalable2_C* Button_CustomMission; // 0x320(0x08)
	UBasic_ButtonScalable2_C* Button_Perks; // 0x328(0x08)
	UBasic_ButtonScalable2_C* Button_Resources; // 0x330(0x08)
	UBasic_ButtonScalable2_C* Button_XP; // 0x338(0x08)
	UEditableTextBox* ConnectString; // 0x340(0x08)
	UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x348(0x08)
	UUI_ForceSeasonEvent_C* UI_ForceSeasonEvent; // 0x350(0x08)
	UUI_ForceSpecialEvent_C* UI_ForceSpecialEvent; // 0x358(0x08)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void OnLoaded_5087EABD4CB81111640A91B2888B99F6(UObject* Loaded);
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
	void ExecuteUbergraph__MENU_CheatConsole(int32_t EntryPoint);
};
