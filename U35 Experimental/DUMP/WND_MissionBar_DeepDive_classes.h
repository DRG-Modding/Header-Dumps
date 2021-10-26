// WidgetBlueprintGeneratedClass WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C
// Size: 0x2e8 (Inherited: 0x230)
struct UWND_MissionBar_DeepDive_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Intro; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x248(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x250(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3; // 0x258(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_4; // 0x260(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_5; // 0x268(0x08)
	UImage* BGgradient; // 0x270(0x08)
	UBorder* Center; // 0x278(0x08)
	UBorder* edgeL; // 0x280(0x08)
	UBorder* edgeR; // 0x288(0x08)
	UHorizontalBox* HorizontalBox_Attention; // 0x290(0x08)
	UImage* Image_1; // 0x298(0x08)
	UITM_DeepDive_Codename_C* ITM_DeepDive_Codename; // 0x2a0(0x08)
	UITM_DeepDiveHeader_C* ITM_DeepDiveHeader; // 0x2a8(0x08)
	UITM_Gear_Bar_C* ITM_Gear_Bar; // 0x2b0(0x08)
	UBorder* MtopBG; // 0x2b8(0x08)
	UTextBlock* TextBlock_3; // 0x2c0(0x08)
	UImage* TopSlantL; // 0x2c8(0x08)
	UImage* TopSlantR; // 0x2d0(0x08)
	UTextBlock* TXT_Attention; // 0x2d8(0x08)
	UUI_GradientMasked_Image_C* UI_GradientMasked_Image; // 0x2e0(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WND_MissionBar_DeepDive(int32_t EntryPoint);
};

