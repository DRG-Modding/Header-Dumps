// WidgetBlueprintGeneratedClass Options_GameServerName.Options_GameServerName_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_GameServerName_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_TextInputField_C* Basic_TextInputField; // 0x238(0x08)

	void UINeedsUpdate();
	void ShowOptions();
	void Construct();
	void BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature(FText Text, char CommitMethod);
	void UpdateName(FString NewValue);
	void ExecuteUbergraph_Options_GameServerName(int32_t EntryPoint);
};

