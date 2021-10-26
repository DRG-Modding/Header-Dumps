// WidgetBlueprintGeneratedClass Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C
// Size: 0x2c8 (Inherited: 0x230)
struct UWidget_DropPod_BiomeRadar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* RadarRotation; // 0x238(0x08)
	UWidgetAnimation* DeepDiveLogo; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x248(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x250(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIcon_1; // 0x258(0x08)
	UTextBlock* DATA_PlanetaryRegionName; // 0x260(0x08)
	UVerticalBox* DeepDive; // 0x268(0x08)
	UImage* Gradient; // 0x270(0x08)
	UVerticalBox* NoDeepDive; // 0x278(0x08)
	UImage* RadarOutline; // 0x280(0x08)
	UImage* RadarSweep; // 0x288(0x08)
	UTextBlock* TextBlock_1; // 0x290(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x298(0x08)
	UUI_MaskedImage_C* UI_MaskedImage; // 0x2a0(0x08)
	UVerticalBox* VerticalBox_MissionData; // 0x2a8(0x08)
	UWidgetSwitcher* WidgetSwitcher_2; // 0x2b0(0x08)
	float Depth; // 0x2b8(0x04)
	float Angle; // 0x2bc(0x04)
	UBiome* Biome; // 0x2c0(0x08)

	void SetGeneratedMission(UGeneratedMission* In Mission);
	void Construct();
	void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
	void ExecuteUbergraph_Widget_DropPod_BiomeRadar(int32_t EntryPoint);
};

