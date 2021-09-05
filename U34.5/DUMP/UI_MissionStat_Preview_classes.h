// WidgetBlueprintGeneratedClass UI_MissionStat_Preview.UI_MissionStat_Preview_C
// Size: 0x270 (Inherited: 0x230)
struct UUI_MissionStat_Preview_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UTextBlock* StatTitle; // 0x240(0x08)
	UVerticalBox* VerticalParent; // 0x248(0x08)
	UMissionStat* PreviewMissionStat; // 0x250(0x08)
	UMissionStat* MissionStat; // 0x258(0x08)
	TArray<UUI_MissionStat_PreviewItem_C*> BarWidgets; // 0x260(0x10)

	void Construct();
	void SetMissionStat(UMissionStat* MissionStat);
	void ExecuteUbergraph_UI_MissionStat_Preview(int32_t EntryPoint);
};

