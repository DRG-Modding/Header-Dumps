// WidgetBlueprintGeneratedClass TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C
// Size: 0x2c0 (Inherited: 0x230)
struct UTOOLTIP_ServerEntry_Biome_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	struct UImage* BiomeImage; // 0x240(0x08)
	struct UTextBlock* BiomeName; // 0x248(0x08)
	struct UVerticalBox* ContentBox; // 0x250(0x08)
	struct UImage* PlanetZoneImage; // 0x258(0x08)
	struct URichTextSizable* ShowProfileText; // 0x260(0x08)
	struct FSlateFontInfo ResourceFont; // 0x268(0x50)
	struct UBiome* Biome; // 0x2b8(0x08)

	void SetData(struct UBiome* InBiome); // Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.SetData
	void PreConstruct(bool IsDesignTime); // Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.PreConstruct
	void ExecuteUbergraph_TOOLTIP_ServerEntry_Biome(int32_t EntryPoint); // Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Biome
};

