// WidgetBlueprintGeneratedClass Options_SoundOnChatMessage.Options_SoundOnChatMessage_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_SoundOnChatMessage_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* CheckBox; // 0x238(0x08)

	void Construct();
	void BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void ExecuteUbergraph_Options_SoundOnChatMessage(int32_t EntryPoint);
};

