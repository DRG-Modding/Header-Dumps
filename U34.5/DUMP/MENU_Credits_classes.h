// WidgetBlueprintGeneratedClass MENU_Credits.MENU_Credits_C
// Size: 0x440 (Inherited: 0x270)
struct UMENU_Credits_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_ButtonScalable2_C* Basic_ButtonScalable2; // 0x278(0x08)
	UBasic_ButtonScalable2_C* Basic_ButtonScalableMoreCredits; // 0x280(0x08)
	UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader; // 0x288(0x08)
	UBlurBackground_C* BlurBackground; // 0x290(0x08)
	UBorder* Border_1; // 0x298(0x08)
	UBorder* Border_2; // 0x2a0(0x08)
	UImage* FilmSpilOrdningen_Image; // 0x2a8(0x08)
	UImage* Image_2; // 0x2b0(0x08)
	UImage* IMG_CrewPhoto; // 0x2b8(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry; // 0x2c0(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_1; // 0x2c8(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_2; // 0x2d0(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_4; // 0x2d8(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_5; // 0x2e0(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_6; // 0x2e8(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C; // 0x2f0(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_2; // 0x2f8(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_3; // 0x300(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_4; // 0x308(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_5; // 0x310(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_6; // 0x318(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_7; // 0x320(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_8; // 0x328(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_9; // 0x330(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_10; // 0x338(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_11; // 0x340(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_12; // 0x348(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_13; // 0x350(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_14; // 0x358(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_15; // 0x360(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_16; // 0x368(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_17; // 0x370(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_18; // 0x378(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_19; // 0x380(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_20; // 0x388(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_23; // 0x390(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_24; // 0x398(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_25; // 0x3a0(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_26; // 0x3a8(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_28; // 0x3b0(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_29; // 0x3b8(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_30; // 0x3c0(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_31; // 0x3c8(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_32; // 0x3d0(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_33; // 0x3d8(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_34; // 0x3e0(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_35; // 0x3e8(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_36; // 0x3f0(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_37; // 0x3f8(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_38; // 0x400(0x08)
	UITM_CreditsEntry_C* ITM_CreditsEntry_C_39; // 0x408(0x08)
	UITM_MenuBackground_C* ITM_MenuBackground; // 0x410(0x08)
	UImage* LogoBig; // 0x418(0x08)
	UWidgetSwitcher* MoreCreditsSwitch; // 0x420(0x08)
	int32_t CreditsPage; // 0x428(0x04)
	TArray<FText> texts; // 0x430(0x10)

	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Basic_ButtonScalableMoreCredits_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature();
	void Construct();
	void ReceiveCloseCommand();
	void ExecuteUbergraph_MENU_Credits(int32_t EntryPoint);
};

