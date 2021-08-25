// WidgetBlueprintGeneratedClass WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C
// Size: 0x2e8 (Inherited: 0x230)
struct UWND_MissionBar_DeepDive_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Intro; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x248(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x250(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3; // 0x258(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_4; // 0x260(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_5; // 0x268(0x08)
	struct UImage* BGgradient; // 0x270(0x08)
	struct UBorder* Center; // 0x278(0x08)
	struct UBorder* edgeL; // 0x280(0x08)
	struct UBorder* edgeR; // 0x288(0x08)
	struct UHorizontalBox* HorizontalBox_Attention; // 0x290(0x08)
	struct UImage* Image_1; // 0x298(0x08)
	struct UITM_DeepDive_Codename_C* ITM_DeepDive_Codename; // 0x2a0(0x08)
	struct UITM_DeepDiveHeader_C* ITM_DeepDiveHeader; // 0x2a8(0x08)
	struct UITM_Gear_Bar_C* ITM_Gear_Bar; // 0x2b0(0x08)
	struct UBorder* MtopBG; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_3; // 0x2c0(0x08)
	struct UImage* TopSlantL; // 0x2c8(0x08)
	struct UImage* TopSlantR; // 0x2d0(0x08)
	struct UTextBlock* TXT_Attention; // 0x2d8(0x08)
	struct UUI_GradientMasked_Image_C* UI_GradientMasked_Image; // 0x2e0(0x08)

	void PreConstruct(bool IsDesignTime); // Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.PreConstruct
	void Construct(); // Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.Tick
	void ExecuteUbergraph_WND_MissionBar_DeepDive(int32_t EntryPoint); // Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.ExecuteUbergraph_WND_MissionBar_DeepDive
};

