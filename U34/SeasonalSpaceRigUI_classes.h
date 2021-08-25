// WidgetBlueprintGeneratedClass SeasonalSpaceRigUI.SeasonalSpaceRigUI_C
// Size: 0x2b0 (Inherited: 0x230)
struct USeasonalSpaceRigUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UCheckBox* ToggleChristmas; // 0x238(0x08)
	struct UCheckBox* ToggleExtraSnow; // 0x240(0x08)
	struct UCheckBox* ToggleHalloween; // 0x248(0x08)
	struct UCheckBox* ToggleYear3; // 0x250(0x08)
	struct USeasonalSpaceRigSaveGame_C* Seasonal Space Rig Save Game; // 0x258(0x08)
	struct FMulticastInlineDelegate Save Changes Requested; // 0x260(0x10)
	struct FMulticastInlineDelegate Christmas Requested; // 0x270(0x10)
	struct FMulticastInlineDelegate Halloween Requested; // 0x280(0x10)
	struct FMulticastInlineDelegate Year 3 Requested; // 0x290(0x10)
	struct FMulticastInlineDelegate Extra Snow Requested; // 0x2a0(0x10)

	void Get Settings(struct USeasonalSpaceRigSaveGame_C* Settings); // Function SeasonalSpaceRigUI.SeasonalSpaceRigUI_C.Get Settings
	void Set Settings(struct USeasonalSpaceRigSaveGame_C* Settings, bool Christmas, bool Halloween, bool Year 3, bool Extra Snow); // Function SeasonalSpaceRigUI.SeasonalSpaceRigUI_C.Set Settings
	void Construct(); // Function SeasonalSpaceRigUI.SeasonalSpaceRigUI_C.Construct
	void BndEvt__ToggleChristmas_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function SeasonalSpaceRigUI.SeasonalSpaceRigUI_C.BndEvt__ToggleChristmas_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__ToggleHalloween_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function SeasonalSpaceRigUI.SeasonalSpaceRigUI_C.BndEvt__ToggleHalloween_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__ToggleSnowballFight_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function SeasonalSpaceRigUI.SeasonalSpaceRigUI_C.BndEvt__ToggleSnowballFight_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__ToggleYear3_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function SeasonalSpaceRigUI.SeasonalSpaceRigUI_C.BndEvt__ToggleYear3_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	void ExecuteUbergraph_SeasonalSpaceRigUI(int32_t EntryPoint); // Function SeasonalSpaceRigUI.SeasonalSpaceRigUI_C.ExecuteUbergraph_SeasonalSpaceRigUI
	void Extra Snow Requested__DelegateSignature(); // Function SeasonalSpaceRigUI.SeasonalSpaceRigUI_C.Extra Snow Requested__DelegateSignature
	void Year 3 Requested__DelegateSignature(); // Function SeasonalSpaceRigUI.SeasonalSpaceRigUI_C.Year 3 Requested__DelegateSignature
	void Halloween Requested__DelegateSignature(); // Function SeasonalSpaceRigUI.SeasonalSpaceRigUI_C.Halloween Requested__DelegateSignature
	void Christmas Requested__DelegateSignature(); // Function SeasonalSpaceRigUI.SeasonalSpaceRigUI_C.Christmas Requested__DelegateSignature
	void Save Changes Requested__DelegateSignature(); // Function SeasonalSpaceRigUI.SeasonalSpaceRigUI_C.Save Changes Requested__DelegateSignature
};

