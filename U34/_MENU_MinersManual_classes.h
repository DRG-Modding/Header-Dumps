// WidgetBlueprintGeneratedClass _MENU_MinersManual._MENU_MinersManual_C
// Size: 0x410 (Inherited: 0x270)
struct U_MENU_MinersManual_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* OnMMLoaded; // 0x278(0x08)
	struct UWidgetAnimation* NewSection; // 0x280(0x08)
	struct ULoreScreen_MinersManual_C* LoreScreen_MinersManual; // 0x288(0x08)
	struct UScrollLIst_Category_Window_C* LoreScrollList; // 0x290(0x08)
	struct UItm_MinersManual_TabsHeader_C* TabsMenu; // 0x298(0x08)
	struct UVerticalBox* VB_LoreContentHolder; // 0x2a0(0x08)
	struct ULoreScreen_Master_C* ContentScreen; // 0x2a8(0x08)
	bool MinersManualsObject; // 0x2b0(0x01)
	char UnknownData_2B1[0x7]; // 0x2b1(0x07)
	struct UMinersManual* MinersManual; // 0x2b8(0x08)
	struct FText OverviewText; // 0x2c0(0x18)
	struct TMap<enum class EMinersManualSection, struct FMM_ButtonInfo> MainButtons; // 0x2d8(0x50)
	struct TArray<enum class EMinersManualSection> MainButtonOrder; // 0x328(0x10)
	enum class EMinersManualSection SelectedSection; // 0x338(0x01)
	char UnknownData_339[0x7]; // 0x339(0x07)
	struct FText TempName; // 0x340(0x18)
	int32_t TempButtonIndex; // 0x358(0x04)
	char UnknownData_35C[0x4]; // 0x35c(0x04)
	struct UTexture2D* TempFrontImage; // 0x360(0x08)
	struct UTexture2D* TempBackgroundImage; // 0x368(0x08)
	int32_t SelectedIndex; // 0x370(0x04)
	char UnknownData_374[0x4]; // 0x374(0x04)
	struct FMM_ButtonInfo tempButton; // 0x378(0x70)
	enum class EEnemyFamily LastCreatureFamily; // 0x3e8(0x01)
	char UnknownData_3E9[0x7]; // 0x3e9(0x07)
	struct UEnemyID* GruntID; // 0x3f0(0x08)
	struct UEnemyMinersManualData* TempEnemy; // 0x3f8(0x08)
	struct TArray<struct TSoftObjectPtr<struct UObject>> TempSoftRefs; // 0x400(0x10)

	void IsCreatureUnlocked(struct UEnemyMinersManualData* enemy, bool IsUnlocked); // Function _MENU_MinersManual._MENU_MinersManual_C.IsCreatureUnlocked
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyDown
	void OpenPageInternal(enum class EMinersManualSection Section, SoftClassProperty Page); // Function _MENU_MinersManual._MENU_MinersManual_C.OpenPageInternal
	void GetButtonInfoFromSoftPage(SoftClassProperty Page, struct FMM_ButtonInfo OutButton); // Function _MENU_MinersManual._MENU_MinersManual_C.GetButtonInfoFromSoftPage
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function _MENU_MinersManual._MENU_MinersManual_C.OnMouseButtonUp
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyUp
	void SelectOverview(); // Function _MENU_MinersManual._MENU_MinersManual_C.SelectOverview
	void LoadSinglePage(SoftClassProperty PageRef); // Function _MENU_MinersManual._MENU_MinersManual_C.LoadSinglePage
	void SelectResourcesPage(int32_t Index); // Function _MENU_MinersManual._MENU_MinersManual_C.SelectResourcesPage
	void SelectBiome(int32_t Index); // Function _MENU_MinersManual._MENU_MinersManual_C.SelectBiome
	void SelectCreature(int32_t Index); // Function _MENU_MinersManual._MENU_MinersManual_C.SelectCreature
	void SelectCombat(int32_t Index); // Function _MENU_MinersManual._MENU_MinersManual_C.SelectCombat
	void SelectBasics(int32_t Index); // Function _MENU_MinersManual._MENU_MinersManual_C.SelectBasics
	void SelectMissionType(int32_t Index); // Function _MENU_MinersManual._MENU_MinersManual_C.SelectMissionType
	void OnLoaded_2761E01142014CAB4B0485B51F0A3566(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B51F0A3566
	void OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8
	void OnLoaded_E250F66347FD856DD4BCA4BDAF081D51(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDAF081D51
	void OnLoaded_2761E01142014CAB4B0485B52E4010C5(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B52E4010C5
	void OnLoaded_E250F66347FD856DD4BCA4BD7D04604B(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD7D04604B
	void OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF
	void OnLoaded_268D15ED4E2079C066017E9C56F864BC(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C56F864BC
	void OnLoaded_268D15ED4E2079C066017E9CF15F73D6(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF15F73D6
	void OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6
	void OnLoaded_2761E01142014CAB4B0485B59B3DD428(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B59B3DD428
	void OnLoaded_268D15ED4E2079C066017E9CDF02186B(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CDF02186B
	void OnLoaded_268D15ED4E2079C066017E9CF666E15C(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF666E15C
	void OnLoaded_268D15ED4E2079C066017E9C821EC396(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C821EC396
	void OnLoaded_268D15ED4E2079C066017E9C0BF30CCE(struct UObject* Loaded); // Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C0BF30CCE
	void SetLoreScreenContent(struct ULoreScreen_Master_C* InWidget); // Function _MENU_MinersManual._MENU_MinersManual_C.SetLoreScreenContent
	void Construct(); // Function _MENU_MinersManual._MENU_MinersManual_C.Construct
	void PreConstruct(bool IsDesignTime); // Function _MENU_MinersManual._MENU_MinersManual_C.PreConstruct
	void ButtonClicked(int32_t Index); // Function _MENU_MinersManual._MENU_MinersManual_C.ButtonClicked
	void SelectSection(enum class EMinersManualSection Section, bool SelectFirst); // Function _MENU_MinersManual._MENU_MinersManual_C.SelectSection
	void SelectPageFromObject(struct UObject* IdentifyingObject); // Function _MENU_MinersManual._MENU_MinersManual_C.SelectPageFromObject
	void SelectSinglePage(enum class EMinersManualSinglePage Page); // Function _MENU_MinersManual._MENU_MinersManual_C.SelectSinglePage
	void StepBack(); // Function _MENU_MinersManual._MENU_MinersManual_C.StepBack
	void OpenFromSavegameID(enum class EMinersManualSection Section, struct FGuid ID); // Function _MENU_MinersManual._MENU_MinersManual_C.OpenFromSavegameID
	void ExecuteUbergraph__MENU_MinersManual(int32_t EntryPoint); // Function _MENU_MinersManual._MENU_MinersManual_C.ExecuteUbergraph__MENU_MinersManual
};

