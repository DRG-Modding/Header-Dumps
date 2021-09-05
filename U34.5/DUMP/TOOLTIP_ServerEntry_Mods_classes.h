// WidgetBlueprintGeneratedClass TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C
// Size: 0x340 (Inherited: 0x230)
struct UTOOLTIP_ServerEntry_Mods_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	UImage* BiomeImage; // 0x240(0x08)
	UTextBlock* BiomeName; // 0x248(0x08)
	UVerticalBox* ContentBox; // 0x250(0x08)
	UITM_Modding_ModioModName_C* ITM_Modding_ModioModName_3; // 0x258(0x08)
	UVerticalBox* ModnameContainer; // 0x260(0x08)
	URichTextSizable* ModsHeader; // 0x268(0x08)
	UImage* PlanetZoneImage; // 0x270(0x08)
	URichTextSizable* ShowProfileText; // 0x278(0x08)
	FSlateFontInfo ResourceFont; // 0x280(0x50)
	UBiome* Biome; // 0x2d0(0x08)
	UGeneratedMission* mission; // 0x2d8(0x08)
	TArray<FString> ModNames; // 0x2e0(0x10)
	FSlateFontInfo ModNameFont; // 0x2f0(0x50)

	void SetModNames(TArray<FString> ModNames);
	void SetData(TArray<FString> InModNames, UGeneratedMission* InMission);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TOOLTIP_ServerEntry_Mods(int32_t EntryPoint);
};

