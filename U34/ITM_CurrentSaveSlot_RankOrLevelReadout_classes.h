// WidgetBlueprintGeneratedClass ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C
// Size: 0x2a0 (Inherited: 0x250)
struct UITM_CurrentSaveSlot_RankOrLevelReadout_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UTextBlock* CharacterLevel; // 0x258(0x08)
	struct UImage* Icon; // 0x260(0x08)
	struct UImage* Icon_2; // 0x268(0x08)
	struct USizeBox* LevelHolder; // 0x270(0x08)
	struct USizeBox* RankHolder; // 0x278(0x08)
	bool ToggleRankOrLevel; // 0x280(0x01)
	char UnknownData_281[0x7]; // 0x281(0x07)
	struct FText Text; // 0x288(0x18)

	void SetRankOrLevelIcon(bool Condition); // Function ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C.SetRankOrLevelIcon
	void PreConstruct(bool IsDesignTime); // Function ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C.PreConstruct
	void Construct(); // Function ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C.Construct
	void ExecuteUbergraph_ITM_CurrentSaveSlot_RankOrLevelReadout(int32_t EntryPoint); // Function ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C.ExecuteUbergraph_ITM_CurrentSaveSlot_RankOrLevelReadout
};

