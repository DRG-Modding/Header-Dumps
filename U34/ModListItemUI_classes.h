// WidgetBlueprintGeneratedClass ModListItemUI.ModListItemUI_C
// Size: 0x2b2 (Inherited: 0x230)
struct UModListItemUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* ButtonText; // 0x238(0x08)
	struct UImage* Highlight; // 0x240(0x08)
	struct UCanvasPanel* MainCanvas; // 0x248(0x08)
	struct UCheckBox* ModEnabledCheckBox; // 0x250(0x08)
	struct UButton* OpenModUIButton; // 0x258(0x08)
	struct FString ModName; // 0x260(0x10)
	struct FString ModVersion; // 0x270(0x10)
	struct FString ModAuthor; // 0x280(0x10)
	int32_t ModID; // 0x290(0x04)
	int32_t ModUIIndex; // 0x294(0x04)
	bool ModAllowDisable; // 0x298(0x01)
	bool ModEnabled; // 0x299(0x01)
	char UnknownData_29A[0x6]; // 0x29a(0x06)
	struct UModManagerUI_C* MainUI; // 0x2a0(0x08)
	struct AModManager_C* ModManager; // 0x2a8(0x08)
	bool Initialised; // 0x2b0(0x01)
	bool Selected; // 0x2b1(0x01)

	void BndEvt__OpenUI_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ModListItemUI.ModListItemUI_C.BndEvt__OpenUI_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__OpenUI_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ModListItemUI.ModListItemUI_C.BndEvt__OpenUI_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__OpenUI_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function ModListItemUI.ModListItemUI_C.BndEvt__OpenUI_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	void BndEvt__OpenUI_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function ModListItemUI.ModListItemUI_C.BndEvt__OpenUI_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	void Construct(); // Function ModListItemUI.ModListItemUI_C.Construct
	void BndEvt__ModEnabledCheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function ModListItemUI.ModListItemUI_C.BndEvt__ModEnabledCheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	void ForceSelectMod(); // Function ModListItemUI.ModListItemUI_C.ForceSelectMod
	void Unselect(); // Function ModListItemUI.ModListItemUI_C.Unselect
	void ExecuteUbergraph_ModListItemUI(int32_t EntryPoint); // Function ModListItemUI.ModListItemUI_C.ExecuteUbergraph_ModListItemUI
};

