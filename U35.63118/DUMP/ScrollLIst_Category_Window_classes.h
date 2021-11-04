// WidgetBlueprintGeneratedClass ScrollLIst_Category_Window.ScrollLIst_Category_Window_C
// Size: 0x2b4 (Inherited: 0x230)
struct UScrollLIst_Category_Window_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	ULore_List_Element_C* Basic_List_Element; // 0x238(0x08)
	ULore_List_Element_C* Basic_List_Element_C_1; // 0x240(0x08)
	ULore_List_Element_C* Basic_List_Element_C_2; // 0x248(0x08)
	ULore_List_Filler_C* Lore_List_Filler; // 0x250(0x08)
	UScrollBox* ScrollBox_List; // 0x258(0x08)
	U_MENU_MinersManual_C* _MENU_MinersManual; // 0x260(0x08)
	ULore_List_Element_C* SelectedButton; // 0x268(0x08)
	TArray<ULore_List_Element_C*> CurrButtons; // 0x270(0x10)
	int32_t TempIndex; // 0x280(0x04)
	TArray<ULore_List_Element_C*> AnimationQueue; // 0x288(0x10)
	float TimeBetweenAnimations; // 0x298(0x04)
	float LastAnimStartTime; // 0x29c(0x04)
	int32_t PendingButtonClick; // 0x2a0(0x04)
	bool IsAutoScrolling; // 0x2a4(0x01)
	ULore_List_Filler_C* FillerElement; // 0x2a8(0x08)
	int32_t #PendingButtons; // 0x2b0(0x04)

	void SelectNext(int32_t Direction);
	void CreateButton(FMM_ButtonInfo Button, FText HeaderText, bool ShouldClick, bool ShowArrow, int32_t Index);
	void OnClicked(int32_t Index);
	void SetData(U_MENU_MinersManual_C* _MENU_MinersManual);
	void PlayButtonIntro(ULore_List_Element_C* Target);
	void Clear();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void PlayAnimInternal(ULore_List_Element_C* Target);
	void CheckForHeader(ULore_List_Element_C* Target);
	void Construct();
	void CustomEvent(float CurrentOffset);
	void ScrollIntoViewDelay(UWidget* WidgetToFind);
	void PrepareNewSection(int32_t NumberOfButtons);
	void OnInitialized();
	void DecreseFillSpace();
	void SetSelectedButton(int32_t Index);
	void ExecuteUbergraph_ScrollLIst_Category_Window(int32_t EntryPoint);
};

