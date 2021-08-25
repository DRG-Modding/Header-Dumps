// WidgetBlueprintGeneratedClass UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C
// Size: 0x2b8 (Inherited: 0x230)
struct UUI_Bar_OrderMenu_Preview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Open; // 0x238(0x08)
	struct UWidgetAnimation* FadeOut; // 0x240(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x248(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1; // 0x250(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x258(0x08)
	struct UTextBlock* BuffDescription; // 0x260(0x08)
	struct UTextBlock* PreviewDescription; // 0x268(0x08)
	struct UTextBlock* PreviewHeader; // 0x270(0x08)
	struct UImage* PreviewIcon; // 0x278(0x08)
	struct UTextBlock* PreviewStrength; // 0x280(0x08)
	struct UTextBlock* StrengthLabel; // 0x288(0x08)
	struct UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost; // 0x290(0x08)
	struct USpaceRigBarMenuItem* PreviewItem; // 0x298(0x08)
	struct FMulticastInlineDelegate OnPreviewItemChanged; // 0x2a0(0x10)
	struct UTemporaryBuff* PreviewBuf; // 0x2b0(0x08)

	void PreConstruct(bool IsDesignTime); // Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.PreConstruct
	void Set Preview Item(struct USpaceRigBarMenuItem* currentItem); // Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Set Preview Item
	void Construct(); // Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Construct
	void Fade In(); // Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade In
	void Fade Out(); // Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade Out
	void FadeOutFinished(); // Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.FadeOutFinished
	void ExecuteUbergraph_UI_Bar_OrderMenu_Preview(int32_t EntryPoint); // Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.ExecuteUbergraph_UI_Bar_OrderMenu_Preview
	void OnPreviewItemChanged__DelegateSignature(struct USpaceRigBarMenuItem* Previous Item, struct USpaceRigBarMenuItem* New Item); // Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.OnPreviewItemChanged__DelegateSignature
};

