// WidgetBlueprintGeneratedClass ModListItemUI.ModListItemUI_C
// Size: 0x2aa (Inherited: 0x230)
struct UModListItemUI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* ButtonText; // 0x238(0x08)
	UImage* Highlight; // 0x240(0x08)
	UCanvasPanel* MainCanvas; // 0x248(0x08)
	UCheckBox* ModEnabledCheckBox; // 0x250(0x08)
	UButton* OpenModUIButton; // 0x258(0x08)
	FString ModName; // 0x260(0x10)
	FString ModVersion; // 0x270(0x10)
	FString ModAuthor; // 0x280(0x10)
	int32_t ModUIIndex; // 0x290(0x04)
	bool ModAllowDisable; // 0x294(0x01)
	bool ModEnabled; // 0x295(0x01)
	UModManagerUI_C* MainUI; // 0x298(0x08)
	AModManager_C* ModManager; // 0x2a0(0x08)
	bool Initialised; // 0x2a8(0x01)
	bool Selected; // 0x2a9(0x01)

	void BndEvt__OpenUI_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OpenUI_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OpenUI_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void BndEvt__ModEnabledCheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ForceSelectMod();
	void Unselect();
	void ExecuteUbergraph_ModListItemUI(int32_t EntryPoint);
};

