// WidgetBlueprintGeneratedClass UI_PatchNotes.UI_PatchNotes_C
// Size: 0x298 (Inherited: 0x230)
struct UUI_PatchNotes_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_SmallWindowWithHeader_C* Basic_Menu_SmallWindowWithHeader; // 0x238(0x08)
	struct UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x240(0x08)
	struct URichTextBlock* PatchTextBlock; // 0x248(0x08)
	struct UBasic_ScrollArrow_C* ScrollArrow_Left; // 0x250(0x08)
	struct UBasic_ScrollArrow_C* ScrollArrow_Right; // 0x258(0x08)
	int32_t PatchNoteIndex; // 0x260(0x04)
	char UnknownData_264[0x4]; // 0x264(0x04)
	struct TArray<struct FText> PatchNoteHeaders; // 0x268(0x10)
	struct TArray<struct FText> PatchNotes; // 0x278(0x10)
	struct TArray<struct FText> PatchNotes_Xbox; // 0x288(0x10)

	void UpdatePatchNotes(); // Function UI_PatchNotes.UI_PatchNotes_C.UpdatePatchNotes
	void PreConstruct(bool IsDesignTime); // Function UI_PatchNotes.UI_PatchNotes_C.PreConstruct
	void BndEvt__ScrollArrow_Left_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function UI_PatchNotes.UI_PatchNotes_C.BndEvt__ScrollArrow_Left_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__ScrollArrow_Right_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function UI_PatchNotes.UI_PatchNotes_C.BndEvt__ScrollArrow_Right_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void ExecuteUbergraph_UI_PatchNotes(int32_t EntryPoint); // Function UI_PatchNotes.UI_PatchNotes_C.ExecuteUbergraph_UI_PatchNotes
};

