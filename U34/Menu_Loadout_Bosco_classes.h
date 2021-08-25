// WidgetBlueprintGeneratedClass Menu_Loadout_Bosco.MENU_Loadout_Bosco_C
// Size: 0x298 (Inherited: 0x270)
struct UMENU_Loadout_Bosco_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_CheckBox_C* AllowBosco; // 0x278(0x08)
	struct UMENU_UpgradeScreen_C* MENU_UpgradeScreen; // 0x280(0x08)
	int32_t LoadAttemts; // 0x288(0x04)
	char UnknownData_28C[0x4]; // 0x28c(0x04)
	struct APlayerCharacter* Character; // 0x290(0x08)

	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function Menu_Loadout_Bosco.MENU_Loadout_Bosco_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	void OnShown(); // Function Menu_Loadout_Bosco.MENU_Loadout_Bosco_C.OnShown
	void OnClosed(); // Function Menu_Loadout_Bosco.MENU_Loadout_Bosco_C.OnClosed
	void OneUpgradeInAllTiers(struct AActor* Item); // Function Menu_Loadout_Bosco.MENU_Loadout_Bosco_C.OneUpgradeInAllTiers
	void BndEvt__MENU_UpgradeScreen_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature(); // Function Menu_Loadout_Bosco.MENU_Loadout_Bosco_C.BndEvt__MENU_UpgradeScreen_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature
	void OnCloseClicked_Event_1(); // Function Menu_Loadout_Bosco.MENU_Loadout_Bosco_C.OnCloseClicked_Event_1
	void Construct(); // Function Menu_Loadout_Bosco.MENU_Loadout_Bosco_C.Construct
	void ExecuteUbergraph_MENU_Loadout_Bosco(int32_t EntryPoint); // Function Menu_Loadout_Bosco.MENU_Loadout_Bosco_C.ExecuteUbergraph_MENU_Loadout_Bosco
};

