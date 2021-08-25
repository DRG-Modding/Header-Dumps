// WidgetBlueprintGeneratedClass Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C
// Size: 0x270 (Inherited: 0x230)
struct UCheck_ServerWorkEnvironment_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_CheckBox_C* CheckBox; // 0x238(0x08)
	struct UButton* ClickButton; // 0x240(0x08)
	struct UTextBlock* NameLabel; // 0x248(0x08)
	bool IsChecked; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)
	struct UDifficultySetting* Difficulty; // 0x258(0x08)
	struct FMulticastInlineDelegate OnCheckedChanged; // 0x260(0x10)

	void SetIsChecked(bool InIsChecked); // Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.SetIsChecked
	bool IsInteractable(); // Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.IsInteractable
	void GetIsChecked(bool Checked); // Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.GetIsChecked
	void PreConstruct(bool IsDesignTime); // Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.PreConstruct
	void BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void Construct(); // Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.Construct
	void ExecuteUbergraph_Check_ServerWorkEnvironment(int32_t EntryPoint); // Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.ExecuteUbergraph_Check_ServerWorkEnvironment
	void OnCheckedChanged__DelegateSignature(struct UCheck_ServerWorkEnvironment_C* CheckBox, struct UDifficultySetting* Difficulty, bool IsChecked); // Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.OnCheckedChanged__DelegateSignature
};

