// WidgetBlueprintGeneratedClass UI_DeathStats_View.UI_DeathStats_View_C
// Size: 0x2e1 (Inherited: 0x230)
struct UUI_DeathStats_View_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x240(0x08)
	struct UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x248(0x08)
	struct UVerticalBox* Header; // 0x250(0x08)
	struct UTextBlock* HealthInsuranceEvaluation; // 0x258(0x08)
	struct UTextBlock* PlayerName; // 0x260(0x08)
	struct UVerticalBox* StatsParent; // 0x268(0x08)
	struct UVerticalBox* VerticalBox_4; // 0x270(0x08)
	struct TArray<struct UUI_InfirmaryStats_Item_C*> MissionStatLines; // 0x278(0x10)
	struct TArray<struct UMissionStat*> StoreModeStats; // 0x288(0x10)
	struct UUI_InfirmaryStats_Item_C* SelectedLine; // 0x298(0x08)
	bool StoreMode; // 0x2a0(0x01)
	char UnknownData_2A1[0x3]; // 0x2a1(0x03)
	float StoreModePause; // 0x2a4(0x04)
	struct TArray<struct UTexture2D*> CategoryIcons; // 0x2a8(0x10)
	struct TArray<struct UTexture2D*> CategoryFilter; // 0x2b8(0x10)
	struct AFSDPlayerController* OwningPlayer; // 0x2c8(0x08)
	bool StopStoreMode; // 0x2d0(0x01)
	char UnknownData_2D1[0x7]; // 0x2d1(0x07)
	struct AFSDPlayerState* OwningState; // 0x2d8(0x08)
	bool Debug; // 0x2e0(0x01)

	void SortStats(struct TArray<struct UMissionStat*> InStats, struct TArray<struct UTexture2D*> Categories, struct TArray<struct UMissionStat*> Sorted Stats); // Function UI_DeathStats_View.UI_DeathStats_View_C.SortStats
	void GetMissionStats(struct TArray<struct UMissionStat*> Assets); // Function UI_DeathStats_View.UI_DeathStats_View_C.GetMissionStats
	void Store Mode(int32_t Index); // Function UI_DeathStats_View.UI_DeathStats_View_C.Store Mode
	void Set Selected Item(struct UUI_InfirmaryStats_Item_C* SelectedLine); // Function UI_DeathStats_View.UI_DeathStats_View_C.Set Selected Item
	void SetStatsOwner(struct AFSDPlayerState* Player State); // Function UI_DeathStats_View.UI_DeathStats_View_C.SetStatsOwner
	void ChangeName(struct FString NewName); // Function UI_DeathStats_View.UI_DeathStats_View_C.ChangeName
	void ReBuild(); // Function UI_DeathStats_View.UI_DeathStats_View_C.ReBuild
	void ExecuteUbergraph_UI_DeathStats_View(int32_t EntryPoint); // Function UI_DeathStats_View.UI_DeathStats_View_C.ExecuteUbergraph_UI_DeathStats_View
};

