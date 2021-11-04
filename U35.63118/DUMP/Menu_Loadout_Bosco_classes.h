// WidgetBlueprintGeneratedClass Menu_Loadout_Bosco.MENU_Loadout_Bosco_C
// Size: 0x298 (Inherited: 0x270)
struct UMENU_Loadout_Bosco_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_CheckBox_C* AllowBosco; // 0x278(0x08)
	UMENU_UpgradeScreen_C* MENU_UpgradeScreen; // 0x280(0x08)
	int32_t LoadAttemts; // 0x288(0x04)
	APlayerCharacter* Character; // 0x290(0x08)

	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void OnShown();
	void OnClosed();
	void OneUpgradeInAllTiers(AActor* Item);
	void BndEvt__MENU_UpgradeScreen_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature();
	void OnCloseClicked_Event_1();
	void Construct();
	void ExecuteUbergraph_MENU_Loadout_Bosco(int32_t EntryPoint);
};

