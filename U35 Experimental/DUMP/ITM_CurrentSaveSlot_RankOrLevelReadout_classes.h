// WidgetBlueprintGeneratedClass ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C
// Size: 0x2a0 (Inherited: 0x250)
struct UITM_CurrentSaveSlot_RankOrLevelReadout_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UTextBlock* CharacterLevel; // 0x258(0x08)
	UImage* Icon; // 0x260(0x08)
	UImage* Icon_2; // 0x268(0x08)
	USizeBox* LevelHolder; // 0x270(0x08)
	USizeBox* RankHolder; // 0x278(0x08)
	bool ToggleRankOrLevel; // 0x280(0x01)
	FText Text; // 0x288(0x18)

	void SetRankOrLevelIcon(bool Condition);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_ITM_CurrentSaveSlot_RankOrLevelReadout(int32_t EntryPoint);
};

