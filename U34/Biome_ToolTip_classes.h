// WidgetBlueprintGeneratedClass Biome_ToolTip.Biome_ToolTip_C
// Size: 0x280 (Inherited: 0x230)
struct UBiome_ToolTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Intro; // 0x238(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x240(0x08)
	struct UBasic_ResourceIcon_C* Basic_ResourceIconA; // 0x248(0x08)
	struct UBasic_ResourceIcon_C* Basic_ResourceIconB; // 0x250(0x08)
	struct UFSDLabelWidget* ResourceAName; // 0x258(0x08)
	struct UFSDLabelWidget* ResourceBName; // 0x260(0x08)
	struct FVector2D Position; // 0x268(0x08)
	struct FVector2D Alignment; // 0x270(0x08)
	struct UWidget* Owner; // 0x278(0x08)

	void SetData(struct UResourceData* ResourceA, struct UResourceData* ResourceB); // Function Biome_ToolTip.Biome_ToolTip_C.SetData
	void SetPostionAndAlignment(struct FVector2D InPosition, struct FVector2D InAlignment); // Function Biome_ToolTip.Biome_ToolTip_C.SetPostionAndAlignment
	void SetTarget(struct UWidget* Target Widget); // Function Biome_ToolTip.Biome_ToolTip_C.SetTarget
	void PreConstruct(bool IsDesignTime); // Function Biome_ToolTip.Biome_ToolTip_C.PreConstruct
	void Set Tool Tip Owner(struct UWidget* Owner); // Function Biome_ToolTip.Biome_ToolTip_C.Set Tool Tip Owner
	void ExecuteUbergraph_Biome_ToolTip(int32_t EntryPoint); // Function Biome_ToolTip.Biome_ToolTip_C.ExecuteUbergraph_Biome_ToolTip
};

