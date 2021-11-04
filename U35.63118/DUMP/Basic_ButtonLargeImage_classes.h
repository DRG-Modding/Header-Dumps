// WidgetBlueprintGeneratedClass Basic_ButtonLargeImage.Basic_ButtonLargeImage_C
// Size: 0x2a0 (Inherited: 0x230)
struct UBasic_ButtonLargeImage_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Hover; // 0x238(0x08)
	UButton* Button_1; // 0x240(0x08)
	UImage* Overlay; // 0x248(0x08)
	USizeBox* Sizer; // 0x250(0x08)
	UImage* TextureHolder; // 0x258(0x08)
	FMulticastInlineDelegate OnClicked; // 0x260(0x10)
	FMulticastInlineDelegate OnPressed; // 0x270(0x10)
	FMulticastInlineDelegate OnReleased; // 0x280(0x10)
	float ButtonSize; // 0x290(0x04)
	UTexture2D* Texture; // 0x298(0x08)

	void SetTexture(UTexture2D* Texture);
	void IsPressed(bool IsPressed);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Basic_ButtonLargeImage(int32_t EntryPoint);
	void OnReleased__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnClicked__DelegateSignature();
};

