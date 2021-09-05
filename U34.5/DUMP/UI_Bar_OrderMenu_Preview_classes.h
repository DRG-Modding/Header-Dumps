// WidgetBlueprintGeneratedClass UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C
// Size: 0x2b8 (Inherited: 0x230)
struct UUI_Bar_OrderMenu_Preview_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Open; // 0x238(0x08)
	UWidgetAnimation* FadeOut; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x248(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1; // 0x250(0x08)
	UBlurBackground_C* BlurBackground; // 0x258(0x08)
	UTextBlock* BuffDescription; // 0x260(0x08)
	UTextBlock* PreviewDescription; // 0x268(0x08)
	UTextBlock* PreviewHeader; // 0x270(0x08)
	UImage* PreviewIcon; // 0x278(0x08)
	UTextBlock* PreviewStrength; // 0x280(0x08)
	UTextBlock* StrengthLabel; // 0x288(0x08)
	UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost; // 0x290(0x08)
	USpaceRigBarMenuItem* PreviewItem; // 0x298(0x08)
	FMulticastInlineDelegate OnPreviewItemChanged; // 0x2a0(0x10)
	UTemporaryBuff* PreviewBuf; // 0x2b0(0x08)

	void PreConstruct(bool IsDesignTime);
	void Set Preview Item(USpaceRigBarMenuItem* currentItem);
	void Construct();
	void Fade In();
	void Fade Out();
	void FadeOutFinished();
	void ExecuteUbergraph_UI_Bar_OrderMenu_Preview(int32_t EntryPoint);
	void OnPreviewItemChanged__DelegateSignature(USpaceRigBarMenuItem* Previous Item, USpaceRigBarMenuItem* New Item);
};

