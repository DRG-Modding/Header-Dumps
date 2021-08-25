// WidgetBlueprintGeneratedClass UI_MissionStats_View.UI_MissionStats_View_C
// Size: 0x2b8 (Inherited: 0x230)
struct UUI_MissionStats_View_C : UUI_KPI_Tab_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x240(0x08)
	struct UVerticalBox* Header; // 0x248(0x08)
	struct UUI_MissionStat_Preview_C* MissionStat_Preview; // 0x250(0x08)
	struct UVerticalBox* StatsParent; // 0x258(0x08)
	struct UUI_MissionStats_Categories_C* UI_MissionStats_Categories; // 0x260(0x08)
	struct TArray<struct UUI_MissionStats_Item_C*> MissionStatLines; // 0x268(0x10)
	struct TArray<struct UMissionStat*> StoreModeStats; // 0x278(0x10)
	struct UUI_MissionStats_Item_C* SelectedLine; // 0x288(0x08)
	bool StoreMode; // 0x290(0x01)
	char UnknownData_291[0x3]; // 0x291(0x03)
	float StoreModePause; // 0x294(0x04)
	struct TArray<struct UTexture2D*> CategoryIcons; // 0x298(0x10)
	struct TArray<struct UTexture2D*> CategoryFilter; // 0x2a8(0x10)

	void SortStats(struct TArray<struct UMissionStat*> InStats, struct TArray<struct UTexture2D*> Categories, struct TArray<struct UMissionStat*> Sorted Stats); // Function UI_MissionStats_View.UI_MissionStats_View_C.SortStats
	void GetMissionStats(struct TArray<struct UMissionStat*> Assets); // Function UI_MissionStats_View.UI_MissionStats_View_C.GetMissionStats
	void PreConstruct(bool IsDesignTime); // Function UI_MissionStats_View.UI_MissionStats_View_C.PreConstruct
	void Construct(); // Function UI_MissionStats_View.UI_MissionStats_View_C.Construct
	void Store Mode(int32_t Index); // Function UI_MissionStats_View.UI_MissionStats_View_C.Store Mode
	void Set Selected Item(struct UUI_MissionStats_Item_C* SelectedLine); // Function UI_MissionStats_View.UI_MissionStats_View_C.Set Selected Item
	void OnHoverBegin_Event(struct UUI_MissionStats_Item_C* Sender); // Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverBegin_Event
	void OnHoverEnd_Event(struct UUI_MissionStats_Item_C* Sender); // Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverEnd_Event
	void Setup Category Selection(); // Function UI_MissionStats_View.UI_MissionStats_View_C.Setup Category Selection
	void OnCategorySelectionChanged(); // Function UI_MissionStats_View.UI_MissionStats_View_C.OnCategorySelectionChanged
	void ExecuteUbergraph_UI_MissionStats_View(int32_t EntryPoint); // Function UI_MissionStats_View.UI_MissionStats_View_C.ExecuteUbergraph_UI_MissionStats_View
};

