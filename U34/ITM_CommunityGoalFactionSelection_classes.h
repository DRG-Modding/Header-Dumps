// WidgetBlueprintGeneratedClass ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C
// Size: 0x290 (Inherited: 0x250)
struct UITM_CommunityGoalFactionSelection_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UITM_FactionSelect_C* ITM_FactionSelect; // 0x258(0x08)
	struct UITM_FactionSelect_C* ITM_FactionSelect_69; // 0x260(0x08)
	struct UITM_FactionSelect_C* ITM_FactionSelect_138; // 0x268(0x08)
	struct FMulticastInlineDelegate FactionChanged; // 0x270(0x10)
	struct TArray<struct UCommunityGoalFaction*> FactionList; // 0x280(0x10)

	void SetFactionOrder(); // Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.SetFactionOrder
	void Construct(); // Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.Construct
	void FactionChangedEvent1(); // Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.FactionChangedEvent1
	void FactionChangedEvent2(); // Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.FactionChangedEvent2
	void FactionChangedEvent3(); // Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.FactionChangedEvent3
	void ExecuteUbergraph_ITM_CommunityGoalFactionSelection(int32_t EntryPoint); // Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.ExecuteUbergraph_ITM_CommunityGoalFactionSelection
	void FactionChanged__DelegateSignature(); // Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.FactionChanged__DelegateSignature
};

