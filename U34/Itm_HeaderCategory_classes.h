// WidgetBlueprintGeneratedClass Itm_HeaderCategory.Itm_HeaderCategory_C
// Size: 0x2a8 (Inherited: 0x230)
struct UItm_HeaderCategory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UButton* Button_Main; // 0x238(0x08)
	struct UTextBlock* ButtonText; // 0x240(0x08)
	struct UImage* Filled_Left; // 0x248(0x08)
	struct UImage* Filled_Middle; // 0x250(0x08)
	struct UImage* Filled_Right; // 0x258(0x08)
	struct UImage* Outline_Left; // 0x260(0x08)
	struct UImage* Outline_Middle; // 0x268(0x08)
	struct UImage* Outline_Right; // 0x270(0x08)
	struct FText Text; // 0x278(0x18)
	bool IsSelected; // 0x290(0x01)
	bool UseFlatLeftside; // 0x291(0x01)
	char UnknownData_292[0x6]; // 0x292(0x06)
	struct FMulticastInlineDelegate OnClicked; // 0x298(0x10)

	void PreConstruct(bool IsDesignTime); // Function Itm_HeaderCategory.Itm_HeaderCategory_C.PreConstruct
	void SetSelected(bool IsSelected); // Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetSelected
	void SetColor(struct FSlateColor Filled, struct FSlateColor outline, struct FSlateColor Text); // Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetColor
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void SetText(struct FText Text); // Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetText
	void ExecuteUbergraph_Itm_HeaderCategory(int32_t EntryPoint); // Function Itm_HeaderCategory.Itm_HeaderCategory_C.ExecuteUbergraph_Itm_HeaderCategory
	void OnClicked__DelegateSignature(); // Function Itm_HeaderCategory.Itm_HeaderCategory_C.OnClicked__DelegateSignature
};

