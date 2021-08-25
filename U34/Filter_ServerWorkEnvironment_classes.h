// WidgetBlueprintGeneratedClass Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C
// Size: 0x268 (Inherited: 0x230)
struct UFilter_ServerWorkEnvironment_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UVerticalBox* EntryBox; // 0x238(0x08)
	struct UBasic_ExpandableMenu_C* MenuWorkEnvironment; // 0x240(0x08)
	struct TArray<struct UCheck_ServerWorkEnvironment_C*> Entries; // 0x248(0x10)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x258(0x10)

	void OpenMenu(bool Open); // Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OpenMenu
	void GetSelectedDifficulties(struct TArray<struct UDifficultySetting*> Difficulties); // Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.GetSelectedDifficulties
	void IsDifficultySelected(struct UDifficultySetting* InDifficulty, bool Selected); // Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.IsDifficultySelected
	void UpdateSubheader(); // Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.UpdateSubheader
	void Add Work Environment(struct UDifficultySetting* Difficulty, struct UCheck_ServerWorkEnvironment_C* OutWidget, bool OutIsChecked); // Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Add Work Environment
	void PreConstruct(bool IsDesignTime); // Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.PreConstruct
	void OnCheckedChanged(struct UCheck_ServerWorkEnvironment_C* CheckBox, struct UDifficultySetting* Difficulty, bool IsChecked); // Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnCheckedChanged
	void Reset(); // Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Reset
	void ExecuteUbergraph_Filter_ServerWorkEnvironment(int32_t EntryPoint); // Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.ExecuteUbergraph_Filter_ServerWorkEnvironment
	void OnSelectionChanged__DelegateSignature(); // Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnSelectionChanged__DelegateSignature
};

