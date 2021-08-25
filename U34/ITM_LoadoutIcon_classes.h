// WidgetBlueprintGeneratedClass ITM_LoadoutIcon.ITM_LoadoutIcon_C
// Size: 0x26c (Inherited: 0x230)
struct UITM_LoadoutIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* Background; // 0x238(0x08)
	struct UImage* Image_Icon; // 0x240(0x08)
	struct UButton* LoadoutButton; // 0x248(0x08)
	struct UBorder* SelectionBorder; // 0x250(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x258(0x10)
	int32_t Index; // 0x268(0x04)

	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ITM_LoadoutIcon.ITM_LoadoutIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void SetData(struct UTexture2D* Texture, int32_t Index); // Function ITM_LoadoutIcon.ITM_LoadoutIcon_C.SetData
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_LoadoutIcon.ITM_LoadoutIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_LoadoutIcon.ITM_LoadoutIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_ITM_LoadoutIcon(int32_t EntryPoint); // Function ITM_LoadoutIcon.ITM_LoadoutIcon_C.ExecuteUbergraph_ITM_LoadoutIcon
	void OnClicked__DelegateSignature(struct UTexture2D* Texture, int32_t Index); // Function ITM_LoadoutIcon.ITM_LoadoutIcon_C.OnClicked__DelegateSignature
};

