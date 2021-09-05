// WidgetBlueprintGeneratedClass Check_ServerGameType.Check_ServerGameType_C
// Size: 0x269 (Inherited: 0x230)
struct UCheck_ServerGameType_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* CheckBox; // 0x238(0x08)
	UButton* ClickButton; // 0x240(0x08)
	UTextBlock* NameLabel; // 0x248(0x08)
	bool IsChecked; // 0x250(0x01)
	FMulticastInlineDelegate OnCheckedChanged; // 0x258(0x10)
	enum class EGameType Gametype; // 0x268(0x01)

	void SetIsChecked(bool InIsChecked);
	bool IsInteractable();
	void GetIsChecked(bool Checked);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_Check_ServerGameType(int32_t EntryPoint);
	void OnCheckedChanged__DelegateSignature(bool IsChecked, enum class EGameType Gametype);
};

