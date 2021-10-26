// WidgetBlueprintGeneratedClass UI_DeathStats_View.UI_DeathStats_View_C
// Size: 0x2e1 (Inherited: 0x230)
struct UUI_DeathStats_View_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x240(0x08)
	UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x248(0x08)
	UVerticalBox* Header; // 0x250(0x08)
	UTextBlock* HealthInsuranceEvaluation; // 0x258(0x08)
	UTextBlock* PlayerName; // 0x260(0x08)
	UVerticalBox* StatsParent; // 0x268(0x08)
	UVerticalBox* VerticalBox_4; // 0x270(0x08)
	TArray<UUI_InfirmaryStats_Item_C*> MissionStatLines; // 0x278(0x10)
	TArray<UMissionStat*> StoreModeStats; // 0x288(0x10)
	UUI_InfirmaryStats_Item_C* SelectedLine; // 0x298(0x08)
	bool StoreMode; // 0x2a0(0x01)
	float StoreModePause; // 0x2a4(0x04)
	TArray<UTexture2D*> CategoryIcons; // 0x2a8(0x10)
	TArray<UTexture2D*> CategoryFilter; // 0x2b8(0x10)
	AFSDPlayerController* OwningPlayer; // 0x2c8(0x08)
	bool StopStoreMode; // 0x2d0(0x01)
	AFSDPlayerState* OwningState; // 0x2d8(0x08)
	bool Debug; // 0x2e0(0x01)

	void SortStats(TArray<UMissionStat*> InStats, TArray<UTexture2D*> Categories, TArray<UMissionStat*> Sorted Stats);
	void GetMissionStats(TArray<UMissionStat*> Assets);
	void Store Mode(int32_t Index);
	void Set Selected Item(UUI_InfirmaryStats_Item_C* SelectedLine);
	void SetStatsOwner(AFSDPlayerState* Player State);
	void ChangeName(FString NewName);
	void ReBuild();
	void ExecuteUbergraph_UI_DeathStats_View(int32_t EntryPoint);
};

