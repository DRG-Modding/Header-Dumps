// WidgetBlueprintGeneratedClass Options_ZiplineGunEquipPrevious.Options_ZiplineGunEquipPrevious_C
// Size: 0x248 (Inherited: 0x230)
struct UOptions_ZiplineGunEquipPrevious_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)
	UBasic_Option_C* Basic_Option; // 0x240(0x08)

	void Construct();
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void ExecuteUbergraph_Options_ZiplineGunEquipPrevious(int32_t EntryPoint);
};

