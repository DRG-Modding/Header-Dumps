// WidgetBlueprintGeneratedClass ITM_LoadoutIcon.ITM_LoadoutIcon_C
// Size: 0x26c (Inherited: 0x230)
struct UITM_LoadoutIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Background; // 0x238(0x08)
	UImage* Image_Icon; // 0x240(0x08)
	UButton* LoadoutButton; // 0x248(0x08)
	UBorder* SelectionBorder; // 0x250(0x08)
	FMulticastInlineDelegate OnClicked; // 0x258(0x10)
	int32_t Index; // 0x268(0x04)

	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetData(UTexture2D* Texture, int32_t Index);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_LoadoutIcon(int32_t EntryPoint);
	void OnClicked__DelegateSignature(UTexture2D* Texture, int32_t Index);
};

