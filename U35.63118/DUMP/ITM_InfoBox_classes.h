// WidgetBlueprintGeneratedClass ITM_InfoBox.ITM_InfoBox_C
// Size: 0x292 (Inherited: 0x230)
struct UITM_InfoBox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* ItemDesc_Hover; // 0x238(0x08)
	UWidgetAnimation* ItemDesc_Click; // 0x240(0x08)
	UBlurBackground_C* BlurBackground; // 0x248(0x08)
	UButton* BTN_Info; // 0x250(0x08)
	UTextBlock* DATA_GearDesc; // 0x258(0x08)
	UOverlay* InfoOverlay; // 0x260(0x08)
	UVerticalBox* ItemDescHolder; // 0x268(0x08)
	USizeBox* SBOX_ButtonGFX; // 0x270(0x08)
	FText Text; // 0x278(0x18)
	enum class ENU_TextCase Text Case; // 0x290(0x01)
	bool Open; // 0x291(0x01)

	void SetOpen(bool IsOpen);
	void SetText(FText InText, enum class ENU_TextCase InText Case);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_InfoBox(int32_t EntryPoint);
};

