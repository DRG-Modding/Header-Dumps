// WidgetBlueprintGeneratedClass ScrollLIst_Category_Window.ScrollLIst_Category_Window_C
// Size: 0x2b4 (Inherited: 0x230)
struct UScrollLIst_Category_Window_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct ULore_List_Element_C* Basic_List_Element; // 0x238(0x08)
	struct ULore_List_Element_C* Basic_List_Element_C_1; // 0x240(0x08)
	struct ULore_List_Element_C* Basic_List_Element_C_2; // 0x248(0x08)
	struct ULore_List_Filler_C* Lore_List_Filler; // 0x250(0x08)
	struct UScrollBox* ScrollBox_List; // 0x258(0x08)
	struct U_MENU_MinersManual_C* _MENU_MinersManual; // 0x260(0x08)
	struct ULore_List_Element_C* SelectedButton; // 0x268(0x08)
	struct TArray<struct ULore_List_Element_C*> CurrButtons; // 0x270(0x10)
	int32_t TempIndex; // 0x280(0x04)
	char UnknownData_284[0x4]; // 0x284(0x04)
	struct TArray<struct ULore_List_Element_C*> AnimationQueue; // 0x288(0x10)
	float TimeBetweenAnimations; // 0x298(0x04)
	float LastAnimStartTime; // 0x29c(0x04)
	int32_t PendingButtonClick; // 0x2a0(0x04)
	bool IsAutoScrolling; // 0x2a4(0x01)
	char UnknownData_2A5[0x3]; // 0x2a5(0x03)
	struct ULore_List_Filler_C* FillerElement; // 0x2a8(0x08)
	int32_t #PendingButtons; // 0x2b0(0x04)

	void SelectNext(int32_t Direction); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SelectNext
	void CreateButton(struct FMM_ButtonInfo Button, struct FText HeaderText, bool ShouldClick, bool ShowArrow, int32_t Index); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CreateButton
	void OnClicked(int32_t Index); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnClicked
	void SetData(struct U_MENU_MinersManual_C* _MENU_MinersManual); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetData
	void PlayButtonIntro(struct ULore_List_Element_C* Target); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayButtonIntro
	void Clear(); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Clear
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Tick
	void PlayAnimInternal(struct ULore_List_Element_C* Target); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayAnimInternal
	void CheckForHeader(struct ULore_List_Element_C* Target); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CheckForHeader
	void Construct(); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Construct
	void CustomEvent(float CurrentOffset); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CustomEvent
	void ScrollIntoViewDelay(struct UWidget* WidgetToFind); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ScrollIntoViewDelay
	void PrepareNewSection(int32_t NumberOfButtons); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PrepareNewSection
	void OnInitialized(); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnInitialized
	void DecreseFillSpace(); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.DecreseFillSpace
	void SetSelectedButton(int32_t Index); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetSelectedButton
	void ExecuteUbergraph_ScrollLIst_Category_Window(int32_t EntryPoint); // Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ExecuteUbergraph_ScrollLIst_Category_Window
};

