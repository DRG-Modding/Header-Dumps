// WidgetBlueprintGeneratedClass Options_PushToTalk.Options_PushToTalk_C
// Size: 0x248 (Inherited: 0x230)
struct UOptions_PushToTalk_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)
	struct UUI_AdvancedLabel_C* PushToTalkLabel; // 0x240(0x08)

	void Construct(); // Function Options_PushToTalk.Options_PushToTalk_C.Construct
	void UINeedsUpdate(); // Function Options_PushToTalk.Options_PushToTalk_C.UINeedsUpdate
	void ShowOptions(); // Function Options_PushToTalk.Options_PushToTalk_C.ShowOptions
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function Options_PushToTalk.Options_PushToTalk_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function Options_PushToTalk.Options_PushToTalk_C.PreConstruct
	void ExecuteUbergraph_Options_PushToTalk(int32_t EntryPoint); // Function Options_PushToTalk.Options_PushToTalk_C.ExecuteUbergraph_Options_PushToTalk
};

