// WidgetBlueprintGeneratedClass LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C
// Size: 0x260 (Inherited: 0x230)
struct ULCD_MissionReadout_Biome_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* BiomeName; // 0x238(0x08)
	struct UImage* Image_Biome; // 0x240(0x08)
	struct UTextBlock* PlanetaryRegion; // 0x248(0x08)
	struct UUI_MissionReadOut_Base_C* UI_MissionReadOut_Base; // 0x250(0x08)
	struct UBiome* Biome; // 0x258(0x08)

	void BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(struct UGeneratedMission* InMission); // Function LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature
	void ExecuteUbergraph_LCD_MissionReadout_Biome(int32_t EntryPoint); // Function LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C.ExecuteUbergraph_LCD_MissionReadout_Biome
};

