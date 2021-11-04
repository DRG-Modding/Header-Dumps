// WidgetBlueprintGeneratedClass Biome_ToolTip.Biome_ToolTip_C
// Size: 0x280 (Inherited: 0x230)
struct UBiome_ToolTip_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Intro; // 0x238(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x240(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIconA; // 0x248(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIconB; // 0x250(0x08)
	UFSDLabelWidget* ResourceAName; // 0x258(0x08)
	UFSDLabelWidget* ResourceBName; // 0x260(0x08)
	FVector2D Position; // 0x268(0x08)
	FVector2D Alignment; // 0x270(0x08)
	UWidget* Owner; // 0x278(0x08)

	void SetData(UResourceData* ResourceA, UResourceData* ResourceB);
	void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment);
	void SetTarget(UWidget* Target Widget);
	void PreConstruct(bool IsDesignTime);
	void Set Tool Tip Owner(UWidget* Owner);
	void ExecuteUbergraph_Biome_ToolTip(int32_t EntryPoint);
};

