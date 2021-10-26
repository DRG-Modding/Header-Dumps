// WidgetBlueprintGeneratedClass _MENU_MinersManual._MENU_MinersManual_C
// Size: 0x410 (Inherited: 0x270)
struct U_MENU_MinersManual_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* OnMMLoaded; // 0x278(0x08)
	UWidgetAnimation* NewSection; // 0x280(0x08)
	ULoreScreen_MinersManual_C* LoreScreen_MinersManual; // 0x288(0x08)
	UScrollLIst_Category_Window_C* LoreScrollList; // 0x290(0x08)
	UItm_MinersManual_TabsHeader_C* TabsMenu; // 0x298(0x08)
	UVerticalBox* VB_LoreContentHolder; // 0x2a0(0x08)
	ULoreScreen_Master_C* ContentScreen; // 0x2a8(0x08)
	bool MinersManualsObject; // 0x2b0(0x01)
	UMinersManual* MinersManual; // 0x2b8(0x08)
	FText OverviewText; // 0x2c0(0x18)
	TMap<enum class EMinersManualSection, FMM_ButtonInfo> MainButtons; // 0x2d8(0x50)
	TArray<enum class EMinersManualSection> MainButtonOrder; // 0x328(0x10)
	enum class EMinersManualSection SelectedSection; // 0x338(0x01)
	FText TempName; // 0x340(0x18)
	int32_t TempButtonIndex; // 0x358(0x04)
	UTexture2D* TempFrontImage; // 0x360(0x08)
	UTexture2D* TempBackgroundImage; // 0x368(0x08)
	int32_t SelectedIndex; // 0x370(0x04)
	FMM_ButtonInfo tempButton; // 0x378(0x70)
	enum class EEnemyFamily LastCreatureFamily; // 0x3e8(0x01)
	UEnemyID* GruntID; // 0x3f0(0x08)
	UEnemyMinersManualData* TempEnemy; // 0x3f8(0x08)
	TArray<TSoftObjectPtr<UObject>> TempSoftRefs; // 0x400(0x10)

	void IsCreatureUnlocked(UEnemyMinersManualData* enemy, bool IsUnlocked);
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void OpenPageInternal(enum class EMinersManualSection Section, TSoftClassPtr<UObject> Page);
	void GetButtonInfoFromSoftPage(TSoftClassPtr<UObject> Page, FMM_ButtonInfo OutButton);
	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void SelectOverview();
	void LoadSinglePage(TSoftClassPtr<UObject> PageRef);
	void SelectResourcesPage(int32_t Index);
	void SelectBiome(int32_t Index);
	void SelectCreature(int32_t Index);
	void SelectCombat(int32_t Index);
	void SelectBasics(int32_t Index);
	void SelectMissionType(int32_t Index);
	void OnLoaded_2761E01142014CAB4B0485B51F0A3566(UObject* Loaded);
	void OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8(UObject* Loaded);
	void OnLoaded_E250F66347FD856DD4BCA4BDAF081D51(UObject* Loaded);
	void OnLoaded_2761E01142014CAB4B0485B52E4010C5(UObject* Loaded);
	void OnLoaded_E250F66347FD856DD4BCA4BD7D04604B(UObject* Loaded);
	void OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF(UObject* Loaded);
	void OnLoaded_268D15ED4E2079C066017E9C56F864BC(UObject* Loaded);
	void OnLoaded_268D15ED4E2079C066017E9CF15F73D6(UObject* Loaded);
	void OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6(UObject* Loaded);
	void OnLoaded_2761E01142014CAB4B0485B59B3DD428(UObject* Loaded);
	void OnLoaded_268D15ED4E2079C066017E9CDF02186B(UObject* Loaded);
	void OnLoaded_268D15ED4E2079C066017E9CF666E15C(UObject* Loaded);
	void OnLoaded_268D15ED4E2079C066017E9C821EC396(UObject* Loaded);
	void OnLoaded_268D15ED4E2079C066017E9C0BF30CCE(UObject* Loaded);
	void SetLoreScreenContent(ULoreScreen_Master_C* InWidget);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ButtonClicked(int32_t Index);
	void SelectSection(enum class EMinersManualSection Section, bool SelectFirst);
	void SelectPageFromObject(UObject* IdentifyingObject);
	void SelectSinglePage(enum class EMinersManualSinglePage Page);
	void StepBack();
	void OpenFromSavegameID(enum class EMinersManualSection Section, FGuid ID);
	void ExecuteUbergraph__MENU_MinersManual(int32_t EntryPoint);
};

