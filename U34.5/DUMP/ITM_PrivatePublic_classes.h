// WidgetBlueprintGeneratedClass ITM_PrivatePublic.ITM_PrivatePublic_C
// Size: 0x240 (Inherited: 0x230)
struct UITM_PrivatePublic_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)

	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void UpdateState();
	void ExecuteUbergraph_ITM_PrivatePublic(int32_t EntryPoint);
};

