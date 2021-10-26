// WidgetBlueprintGeneratedClass Filter_ServerGameType.Filter_ServerGameType_C
// Size: 0x289 (Inherited: 0x230)
struct UFilter_ServerGameType_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Option_C* Basic_Option; // 0x238(0x08)
	UCheck_ServerGameType_C* Check_Approved; // 0x240(0x08)
	UCheck_ServerGameType_C* Check_Sandbox; // 0x248(0x08)
	UBasic_ExpandableMenu_C* MenuGameType; // 0x250(0x08)
	UBasic_BoolUserSetting_C* Option_OnlyModdedServers; // 0x258(0x08)
	UCanvasPanel* RootCanvas; // 0x260(0x08)
	TArray<UCheck_ServerGameType_C*> Entries; // 0x268(0x10)
	FMulticastInlineDelegate OnSelectionChanged; // 0x278(0x10)
	bool Sandbox; // 0x288(0x01)

	void VerifyOnlyModded(enum class EGameType LastClicked);
	void VerifyRules();
	void IsSandBoxMode(bool SandboxMode);
	void CreateEntries();
	void Reset();
	void GetSelectedGameTypes(TArray<enum class EGameType> GameTypes);
	void OpenMenu(bool Open);
	void UpdateSubheader();
	void PreConstruct(bool IsDesignTime);
	void OnGameTypeChanged(bool IsChecked, enum class EGameType Gametype);
	void Construct();
	void BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void ExecuteUbergraph_Filter_ServerGameType(int32_t EntryPoint);
	void OnSelectionChanged__DelegateSignature();
};

