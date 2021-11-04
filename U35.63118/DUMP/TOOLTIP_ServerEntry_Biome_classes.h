// WidgetBlueprintGeneratedClass TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C
// Size: 0x2c0 (Inherited: 0x230)
struct UTOOLTIP_ServerEntry_Biome_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	UImage* BiomeImage; // 0x240(0x08)
	UTextBlock* BiomeName; // 0x248(0x08)
	UVerticalBox* ContentBox; // 0x250(0x08)
	UImage* PlanetZoneImage; // 0x258(0x08)
	URichTextSizable* ShowProfileText; // 0x260(0x08)
	FSlateFontInfo ResourceFont; // 0x268(0x50)
	UBiome* Biome; // 0x2b8(0x08)

	void SetData(UBiome* InBiome);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TOOLTIP_ServerEntry_Biome(int32_t EntryPoint);
};

