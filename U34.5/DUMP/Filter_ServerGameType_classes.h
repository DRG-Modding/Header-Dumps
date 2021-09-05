// WidgetBlueprintGeneratedClass Filter_ServerGameType.Filter_ServerGameType_C
// Size: 0x289 (Inherited: 0x230)
struct UFilter_ServerGameType_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UVerticalBox* EntryBox; // 0x238(0x08)
	UBasic_ExpandableMenu_C* MenuGameType; // 0x240(0x08)
	TArray<UCheck_ServerGameType_C*> Entries; // 0x248(0x10)
	FMulticastInlineDelegate OnSelectionChanged; // 0x258(0x10)
	TArray<enum class EGameType> GameTypes; // 0x268(0x10)
	TArray<enum class EGameType> SelectedGametypes; // 0x278(0x10)
	bool Sandbox; // 0x288(0x01)

	void GetSelectedGameTypes(TArray<enum class EGameType> GameTypes);
	void OpenMenu(bool Open);
	void UpdateSubheader();
	void AddGameTypeCheckbox(enum class EGameType InGametype, UCheck_ServerGameType_C* OutWidget);
	void PreConstruct(bool IsDesignTime);
	void PopulateGametypes();
	void Reset();
	void OnGameTypeChanged(bool IsChecked, enum class EGameType Gametype);
	void Construct();
	void ExecuteUbergraph_Filter_ServerGameType(int32_t EntryPoint);
	void OnSelectionChanged__DelegateSignature();
};

