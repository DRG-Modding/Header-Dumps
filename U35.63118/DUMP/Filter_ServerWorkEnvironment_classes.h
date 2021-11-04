// WidgetBlueprintGeneratedClass Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C
// Size: 0x268 (Inherited: 0x230)
struct UFilter_ServerWorkEnvironment_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UVerticalBox* EntryBox; // 0x238(0x08)
	UBasic_ExpandableMenu_C* MenuWorkEnvironment; // 0x240(0x08)
	TArray<UCheck_ServerWorkEnvironment_C*> Entries; // 0x248(0x10)
	FMulticastInlineDelegate OnSelectionChanged; // 0x258(0x10)

	void OpenMenu(bool Open);
	void GetSelectedDifficulties(TArray<UDifficultySetting*> Difficulties);
	void IsDifficultySelected(UDifficultySetting* InDifficulty, bool Selected);
	void UpdateSubheader();
	void Add Work Environment(UDifficultySetting* Difficulty, UCheck_ServerWorkEnvironment_C* OutWidget, bool OutIsChecked);
	void PreConstruct(bool IsDesignTime);
	void OnCheckedChanged(UCheck_ServerWorkEnvironment_C* CheckBox, UDifficultySetting* Difficulty, bool IsChecked);
	void Reset();
	void ExecuteUbergraph_Filter_ServerWorkEnvironment(int32_t EntryPoint);
	void OnSelectionChanged__DelegateSignature();
};

