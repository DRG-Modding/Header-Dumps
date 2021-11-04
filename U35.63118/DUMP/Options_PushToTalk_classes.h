// WidgetBlueprintGeneratedClass Options_PushToTalk.Options_PushToTalk_C
// Size: 0x248 (Inherited: 0x230)
struct UOptions_PushToTalk_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)
	UUI_AdvancedLabel_C* PushToTalkLabel; // 0x240(0x08)

	void Construct();
	void UINeedsUpdate();
	void ShowOptions();
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Options_PushToTalk(int32_t EntryPoint);
};

