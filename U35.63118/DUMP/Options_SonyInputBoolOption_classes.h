// WidgetBlueprintGeneratedClass Options_SonyInputBoolOption.Options_SonyInputBoolOption_C
// Size: 0x258 (Inherited: 0x230)
struct UOptions_SonyInputBoolOption_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)
	enum class ESonyInputSettingsBools Option; // 0x240(0x01)
	FMulticastInlineDelegate StateChanged; // 0x248(0x10)

	void Construct();
	void UINeedsUpdate();
	void ShowOptions();
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void ExecuteUbergraph_Options_SonyInputBoolOption(int32_t EntryPoint);
	void StateChanged__DelegateSignature(bool IsChecked);
};

