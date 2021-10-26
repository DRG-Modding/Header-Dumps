// WidgetBlueprintGeneratedClass ITM_ItemCategories.ITM_ItemCategories_C
// Size: 0x310 (Inherited: 0x230)
struct UITM_ItemCategories_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_5; // 0x238(0x08)
	UBlurBackground_C* BlurBackground_C_2; // 0x240(0x08)
	UBTN_ItemCategory_C* BTN_Armor; // 0x248(0x08)
	UBTN_ItemCategory_C* BTN_Beard; // 0x250(0x08)
	UBTN_ItemCategory_C* BTN_Eyebrows; // 0x258(0x08)
	UBTN_ItemCategory_C* BTN_HairColor; // 0x260(0x08)
	UBTN_ItemCategory_C* BTN_Headwear; // 0x268(0x08)
	UBTN_ItemCategory_C* BTN_Moustache; // 0x270(0x08)
	UBTN_ItemCategory_C* BTN_Sideburns; // 0x278(0x08)
	UBTN_ItemCategory_C* BTN_SkinColor; // 0x280(0x08)
	UTextBlock* DATA_CategoryName; // 0x288(0x08)
	FMulticastInlineDelegate BTN_ArmorClicked; // 0x290(0x10)
	FMulticastInlineDelegate BTN_BeardClicked; // 0x2a0(0x10)
	FMulticastInlineDelegate BTN_EyebrowsClicked; // 0x2b0(0x10)
	FMulticastInlineDelegate BTN_SkinColorClicked; // 0x2c0(0x10)
	FMulticastInlineDelegate BTN_HeadwearClicked; // 0x2d0(0x10)
	FMulticastInlineDelegate BTN_SideburnsClicked; // 0x2e0(0x10)
	FMulticastInlineDelegate BTN_MoustacheClicked; // 0x2f0(0x10)
	FMulticastInlineDelegate BTN_HairColorClicked; // 0x300(0x10)

	void GetButton(enum class EVanitySlot Slot, UBTN_ItemCategory_C* Button);
	void BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
	void BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
	void BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature();
	void BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature();
	void BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature();
	void BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature();
	void BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature();
	void SetData(UPlayerCharacterID* characterID);
	void BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
	void OnClosed();
	void ExecuteUbergraph_ITM_ItemCategories(int32_t EntryPoint);
	void BTN_HairColorClicked__DelegateSignature();
	void BTN_MoustacheClicked__DelegateSignature();
	void BTN_SideburnsClicked__DelegateSignature();
	void BTN_HeadwearClicked__DelegateSignature();
	void BTN_SkinColorClicked__DelegateSignature();
	void BTN_EyebrowsClicked__DelegateSignature();
	void BTN_BeardClicked__DelegateSignature();
	void BTN_ArmorClicked__DelegateSignature();
};

