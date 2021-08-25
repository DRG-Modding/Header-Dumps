// WidgetBlueprintGeneratedClass LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C
// Size: 0x348 (Inherited: 0x2c8)
struct ULoreScreen_BiomeSpecific_C : ULoreScreen_Master_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar3; // 0x2d0(0x08)
	struct ULore_Container_Text_W_Image_C* Feature0; // 0x2d8(0x08)
	struct ULore_Container_Text_W_Image_C* Feature1; // 0x2e0(0x08)
	struct UITM_Biome_ResourceIcon_C* ITM_Biome_ResourceIcon_3; // 0x2e8(0x08)
	struct UITM_Biome_ResourceIcon_C* ITM_Biome_ResourceIcon1; // 0x2f0(0x08)
	struct ULoreScreen_Template_C* LoreScreen_Template; // 0x2f8(0x08)
	struct URichTextBlock* RichTextBlock_BiomeDesc; // 0x300(0x08)
	struct UTextBlock* TextBlock_Headline; // 0x308(0x08)
	struct UBiome* Biome; // 0x310(0x08)
	bool IsHovering; // 0x318(0x01)
	char UnknownData_319[0x7]; // 0x319(0x07)
	struct UAudioComponent* HoverSound; // 0x320(0x08)
	struct TArray<struct UObject*> CaveObjects; // 0x328(0x10)
	struct TArray<struct UMinersManualData*> BiomeFeatures; // 0x338(0x10)

	void Construct(); // Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.Construct
	void RefreshContent(); // Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.RefreshContent
	void ExecuteUbergraph_LoreScreen_BiomeSpecific(int32_t EntryPoint); // Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.ExecuteUbergraph_LoreScreen_BiomeSpecific
};

