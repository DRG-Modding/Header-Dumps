// WidgetBlueprintGeneratedClass Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C
// Size: 0x2c8 (Inherited: 0x230)
struct UWidget_DropPod_BiomeRadar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* RadarRotation; // 0x238(0x08)
	struct UWidgetAnimation* DeepDiveLogo; // 0x240(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x248(0x08)
	struct UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x250(0x08)
	struct UBasic_ResourceIcon_C* Basic_ResourceIcon_1; // 0x258(0x08)
	struct UTextBlock* DATA_PlanetaryRegionName; // 0x260(0x08)
	struct UVerticalBox* DeepDive; // 0x268(0x08)
	struct UImage* Gradient; // 0x270(0x08)
	struct UVerticalBox* NoDeepDive; // 0x278(0x08)
	struct UImage* RadarOutline; // 0x280(0x08)
	struct UImage* RadarSweep; // 0x288(0x08)
	struct UTextBlock* TextBlock_1; // 0x290(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x298(0x08)
	struct UUI_MaskedImage_C* UI_MaskedImage; // 0x2a0(0x08)
	struct UVerticalBox* VerticalBox_MissionData; // 0x2a8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x2b0(0x08)
	float Depth; // 0x2b8(0x04)
	float Angle; // 0x2bc(0x04)
	struct UBiome* Biome; // 0x2c0(0x08)

	void SetGeneratedMission(struct UGeneratedMission* In Mission); // Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.SetGeneratedMission
	void Construct(); // Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.Construct
	void OnGeneratedMissionChanged(struct UGeneratedMission* OutGeneratedMission); // Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.OnGeneratedMissionChanged
	void ExecuteUbergraph_Widget_DropPod_BiomeRadar(int32_t EntryPoint); // Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.ExecuteUbergraph_Widget_DropPod_BiomeRadar
};

