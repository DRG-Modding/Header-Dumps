// WidgetBlueprintGeneratedClass UI_MissionStats_View.UI_MissionStats_View_C
// Size: 0x2b8 (Inherited: 0x230)
struct UUI_MissionStats_View_C : UUI_KPI_Tab_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x240(0x08)
	UVerticalBox* Header; // 0x248(0x08)
	UUI_MissionStat_Preview_C* MissionStat_Preview; // 0x250(0x08)
	UVerticalBox* StatsParent; // 0x258(0x08)
	UUI_MissionStats_Categories_C* UI_MissionStats_Categories; // 0x260(0x08)
	TArray<UUI_MissionStats_Item_C*> MissionStatLines; // 0x268(0x10)
	TArray<UMissionStat*> StoreModeStats; // 0x278(0x10)
	UUI_MissionStats_Item_C* SelectedLine; // 0x288(0x08)
	bool StoreMode; // 0x290(0x01)
	float StoreModePause; // 0x294(0x04)
	TArray<UTexture2D*> CategoryIcons; // 0x298(0x10)
	TArray<UTexture2D*> CategoryFilter; // 0x2a8(0x10)

	void SortStats(TArray<UMissionStat*> InStats, TArray<UTexture2D*> Categories, TArray<UMissionStat*> Sorted Stats);
	void GetMissionStats(TArray<UMissionStat*> Assets);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Store Mode(int32_t Index);
	void Set Selected Item(UUI_MissionStats_Item_C* SelectedLine);
	void OnHoverBegin_Event(UUI_MissionStats_Item_C* Sender);
	void OnHoverEnd_Event(UUI_MissionStats_Item_C* Sender);
	void Setup Category Selection();
	void OnCategorySelectionChanged();
	void ExecuteUbergraph_UI_MissionStats_View(int32_t EntryPoint);
};

