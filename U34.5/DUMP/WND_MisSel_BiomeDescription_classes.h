// WidgetBlueprintGeneratedClass WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C
// Size: 0x2a8 (Inherited: 0x230)
struct UWND_MisSel_BiomeDescription_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* BasicWindow_ColorBar; // 0x248(0x08)
	UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_1; // 0x250(0x08)
	UTextBlock* BiomeDescription; // 0x258(0x08)
	UBlurBackground_C* BlurBackground; // 0x260(0x08)
	UTextBlock* DATA_headerText; // 0x268(0x08)
	UHorizontalBox* hboxBiomeResources; // 0x270(0x08)
	UTextBlock* Header_BiomeDescription; // 0x278(0x08)
	UITM_MisSel_ResourceIcon_C* ITEM_MissionSelection_ResourceIcon_Abundant; // 0x280(0x08)
	UITM_MisSel_ResourceIcon_C* ITEM_MissionSelection_ResourceIcon_Scarce; // 0x288(0x08)
	UShadowBG_C* ShadowBG; // 0x290(0x08)
	UUI_GradientMasked_Image_C* UI_GradientMasked_Image; // 0x298(0x08)
	UBiome* Biome; // 0x2a0(0x08)

	void SetData(UBiome* Biome);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WND_MisSel_BiomeDescription(int32_t EntryPoint);
};

