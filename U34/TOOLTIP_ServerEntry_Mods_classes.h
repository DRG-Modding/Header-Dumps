// WidgetBlueprintGeneratedClass TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C
// Size: 0x338 (Inherited: 0x230)
struct UTOOLTIP_ServerEntry_Mods_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	struct UImage* BiomeImage; // 0x240(0x08)
	struct UTextBlock* BiomeName; // 0x248(0x08)
	struct UVerticalBox* ContentBox; // 0x250(0x08)
	struct UVerticalBox* ModnameContainer; // 0x258(0x08)
	struct URichTextSizable* ModsHeader; // 0x260(0x08)
	struct UImage* PlanetZoneImage; // 0x268(0x08)
	struct URichTextSizable* ShowProfileText; // 0x270(0x08)
	struct FSlateFontInfo ResourceFont; // 0x278(0x50)
	struct UBiome* Biome; // 0x2c8(0x08)
	struct UGeneratedMission* mission; // 0x2d0(0x08)
	struct TArray<struct FString> ModNames; // 0x2d8(0x10)
	struct FSlateFontInfo ModNameFont; // 0x2e8(0x50)

	void SetModNames(struct TArray<struct FString> ModNames); // Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.SetModNames
	void SetData(struct TArray<struct FString> InModNames, struct UGeneratedMission* InMission); // Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.SetData
	void PreConstruct(bool IsDesignTime); // Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.PreConstruct
	void ExecuteUbergraph_TOOLTIP_ServerEntry_Mods(int32_t EntryPoint); // Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Mods
};

