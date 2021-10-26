// WidgetBlueprintGeneratedClass ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C
// Size: 0x290 (Inherited: 0x250)
struct UITM_CommunityGoalFactionSelection_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UITM_FactionSelect_C* ITM_FactionSelect; // 0x258(0x08)
	UITM_FactionSelect_C* ITM_FactionSelect_69; // 0x260(0x08)
	UITM_FactionSelect_C* ITM_FactionSelect_138; // 0x268(0x08)
	FMulticastInlineDelegate FactionChanged; // 0x270(0x10)
	TArray<UCommunityGoalFaction*> FactionList; // 0x280(0x10)

	void SetFactionOrder();
	void Construct();
	void FactionChangedEvent1();
	void FactionChangedEvent2();
	void FactionChangedEvent3();
	void ExecuteUbergraph_ITM_CommunityGoalFactionSelection(int32_t EntryPoint);
	void FactionChanged__DelegateSignature();
};

