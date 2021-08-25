// WidgetBlueprintGeneratedClass Options_GameServerName.Options_GameServerName_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_GameServerName_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_TextInputField_C* Basic_TextInputField; // 0x238(0x08)

	void UINeedsUpdate(); // Function Options_GameServerName.Options_GameServerName_C.UINeedsUpdate
	void ShowOptions(); // Function Options_GameServerName.Options_GameServerName_C.ShowOptions
	void Construct(); // Function Options_GameServerName.Options_GameServerName_C.Construct
	void BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature(struct FText Text, char CommitMethod); // Function Options_GameServerName.Options_GameServerName_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature
	void UpdateName(struct FString NewValue); // Function Options_GameServerName.Options_GameServerName_C.UpdateName
	void ExecuteUbergraph_Options_GameServerName(int32_t EntryPoint); // Function Options_GameServerName.Options_GameServerName_C.ExecuteUbergraph_Options_GameServerName
};

