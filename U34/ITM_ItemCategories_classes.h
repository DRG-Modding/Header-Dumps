// WidgetBlueprintGeneratedClass ITM_ItemCategories.ITM_ItemCategories_C
// Size: 0x310 (Inherited: 0x230)
struct UITM_ItemCategories_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_5; // 0x238(0x08)
	struct UBlurBackground_C* BlurBackground_C_2; // 0x240(0x08)
	struct UBTN_ItemCategory_C* BTN_Armor; // 0x248(0x08)
	struct UBTN_ItemCategory_C* BTN_Beard; // 0x250(0x08)
	struct UBTN_ItemCategory_C* BTN_Eyebrows; // 0x258(0x08)
	struct UBTN_ItemCategory_C* BTN_HairColor; // 0x260(0x08)
	struct UBTN_ItemCategory_C* BTN_Headwear; // 0x268(0x08)
	struct UBTN_ItemCategory_C* BTN_Moustache; // 0x270(0x08)
	struct UBTN_ItemCategory_C* BTN_Sideburns; // 0x278(0x08)
	struct UBTN_ItemCategory_C* BTN_SkinColor; // 0x280(0x08)
	struct UTextBlock* DATA_CategoryName; // 0x288(0x08)
	struct FMulticastInlineDelegate BTN_ArmorClicked; // 0x290(0x10)
	struct FMulticastInlineDelegate BTN_BeardClicked; // 0x2a0(0x10)
	struct FMulticastInlineDelegate BTN_EyebrowsClicked; // 0x2b0(0x10)
	struct FMulticastInlineDelegate BTN_SkinColorClicked; // 0x2c0(0x10)
	struct FMulticastInlineDelegate BTN_HeadwearClicked; // 0x2d0(0x10)
	struct FMulticastInlineDelegate BTN_SideburnsClicked; // 0x2e0(0x10)
	struct FMulticastInlineDelegate BTN_MoustacheClicked; // 0x2f0(0x10)
	struct FMulticastInlineDelegate BTN_HairColorClicked; // 0x300(0x10)

	void GetButton(enum class EVanitySlot Slot, struct UBTN_ItemCategory_C* Button); // Function ITM_ItemCategories.ITM_ItemCategories_C.GetButton
	void BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
	void BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature
	void BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature
	void BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature
	void BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature
	void BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature
	void BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature
	void SetData(struct UPlayerCharacterID* characterID); // Function ITM_ItemCategories.ITM_ItemCategories_C.SetData
	void BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
	void OnClosed(); // Function ITM_ItemCategories.ITM_ItemCategories_C.OnClosed
	void ExecuteUbergraph_ITM_ItemCategories(int32_t EntryPoint); // Function ITM_ItemCategories.ITM_ItemCategories_C.ExecuteUbergraph_ITM_ItemCategories
	void BTN_HairColorClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_HairColorClicked__DelegateSignature
	void BTN_MoustacheClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_MoustacheClicked__DelegateSignature
	void BTN_SideburnsClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_SideburnsClicked__DelegateSignature
	void BTN_HeadwearClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_HeadwearClicked__DelegateSignature
	void BTN_SkinColorClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_SkinColorClicked__DelegateSignature
	void BTN_EyebrowsClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_EyebrowsClicked__DelegateSignature
	void BTN_BeardClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_BeardClicked__DelegateSignature
	void BTN_ArmorClicked__DelegateSignature(); // Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_ArmorClicked__DelegateSignature
};

