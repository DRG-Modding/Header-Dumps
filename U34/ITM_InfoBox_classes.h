// WidgetBlueprintGeneratedClass ITM_InfoBox.ITM_InfoBox_C
// Size: 0x292 (Inherited: 0x230)
struct UITM_InfoBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* ItemDesc_Hover; // 0x238(0x08)
	struct UWidgetAnimation* ItemDesc_Click; // 0x240(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x248(0x08)
	struct UButton* BTN_Info; // 0x250(0x08)
	struct UTextBlock* DATA_GearDesc; // 0x258(0x08)
	struct UOverlay* InfoOverlay; // 0x260(0x08)
	struct UVerticalBox* ItemDescHolder; // 0x268(0x08)
	struct USizeBox* SBOX_ButtonGFX; // 0x270(0x08)
	struct FText Text; // 0x278(0x18)
	char Text Case; // 0x290(0x01)
	bool Open; // 0x291(0x01)

	void SetOpen(bool IsOpen); // Function ITM_InfoBox.ITM_InfoBox_C.SetOpen
	void SetText(struct FText InText, char InText Case); // Function ITM_InfoBox.ITM_InfoBox_C.SetText
	void PreConstruct(bool IsDesignTime); // Function ITM_InfoBox.ITM_InfoBox_C.PreConstruct
	void Construct(); // Function ITM_InfoBox.ITM_InfoBox_C.Construct
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_ITM_InfoBox(int32_t EntryPoint); // Function ITM_InfoBox.ITM_InfoBox_C.ExecuteUbergraph_ITM_InfoBox
};

