// WidgetBlueprintGeneratedClass UI_PatchNotes.UI_PatchNotes_C
// Size: 0x2c8 (Inherited: 0x230)
struct UUI_PatchNotes_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_SmallWindowWithHeader_C* Basic_Menu_SmallWindowWithHeader; // 0x238(0x08)
	UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x240(0x08)
	URichTextBlock* PatchTextBlock; // 0x248(0x08)
	UBasic_ScrollArrow_C* ScrollArrow_Left; // 0x250(0x08)
	UBasic_ScrollArrow_C* ScrollArrow_Right; // 0x258(0x08)
	int32_t PatchNoteIndex; // 0x260(0x04)
	TArray<FText> PatchNoteHeaders_Steam; // 0x268(0x10)
	TArray<FText> PatchNotes_Steam; // 0x278(0x10)
	TArray<FText> PatchNoteHeaders_Xbox; // 0x288(0x10)
	TArray<FText> PatchNotes_Xbox; // 0x298(0x10)
	TArray<FText> Headers; // 0x2a8(0x10)
	TArray<FText> Notes; // 0x2b8(0x10)

	TArray<FText> SelectByPlatform(TArray<FText> Default, TArray<FText> Xbox);
	void UpdatePatchNotes();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ScrollArrow_Left_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__ScrollArrow_Right_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void ExecuteUbergraph_UI_PatchNotes(int32_t EntryPoint);
};

