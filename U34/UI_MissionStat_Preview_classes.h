// WidgetBlueprintGeneratedClass UI_MissionStat_Preview.UI_MissionStat_Preview_C
// Size: 0x270 (Inherited: 0x230)
struct UUI_MissionStat_Preview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UTextBlock* StatTitle; // 0x240(0x08)
	struct UVerticalBox* VerticalParent; // 0x248(0x08)
	struct UMissionStat* PreviewMissionStat; // 0x250(0x08)
	struct UMissionStat* MissionStat; // 0x258(0x08)
	struct TArray<struct UUI_MissionStat_PreviewItem_C*> BarWidgets; // 0x260(0x10)

	void Construct(); // Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.Construct
	void SetMissionStat(struct UMissionStat* MissionStat); // Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.SetMissionStat
	void ExecuteUbergraph_UI_MissionStat_Preview(int32_t EntryPoint); // Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.ExecuteUbergraph_UI_MissionStat_Preview
};

