// WidgetBlueprintGeneratedClass Basic_ButtonLargeImage.Basic_ButtonLargeImage_C
// Size: 0x2a0 (Inherited: 0x230)
struct UBasic_ButtonLargeImage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Hover; // 0x238(0x08)
	struct UButton* Button_1; // 0x240(0x08)
	struct UImage* Overlay; // 0x248(0x08)
	struct USizeBox* Sizer; // 0x250(0x08)
	struct UImage* TextureHolder; // 0x258(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x260(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x270(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x280(0x10)
	float ButtonSize; // 0x290(0x04)
	char UnknownData_294[0x4]; // 0x294(0x04)
	struct UTexture2D* Texture; // 0x298(0x08)

	void SetTexture(struct UTexture2D* Texture); // Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.SetTexture
	void IsPressed(bool IsPressed); // Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.IsPressed
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature(); // Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.PreConstruct
	void ExecuteUbergraph_Basic_ButtonLargeImage(int32_t EntryPoint); // Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.ExecuteUbergraph_Basic_ButtonLargeImage
	void OnReleased__DelegateSignature(); // Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.OnReleased__DelegateSignature
	void OnPressed__DelegateSignature(); // Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.OnPressed__DelegateSignature
	void OnClicked__DelegateSignature(); // Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.OnClicked__DelegateSignature
};

