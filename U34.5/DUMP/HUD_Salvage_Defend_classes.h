// WidgetBlueprintGeneratedClass HUD_Salvage_Defend.HUD_Salvage_Defend_C
// Size: 0x300 (Inherited: 0x230)
struct UHUD_Salvage_Defend_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig; // 0x238(0x08)
	UProgressBar* DefenseProgress; // 0x240(0x08)
	UHUD_DefaultLabel_C* Header; // 0x248(0x08)
	UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_01; // 0x250(0x08)
	UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_02; // 0x258(0x08)
	UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_03; // 0x260(0x08)
	UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_04; // 0x268(0x08)
	UHUD_DefaultLabel_C* Sucess_Done; // 0x270(0x08)
	UVerticalBox* VerticalBox_Complete; // 0x278(0x08)
	UVerticalBox* VerticalBox_InProgress; // 0x280(0x08)
	AEVENT_DropPodDefense_Base_C* Event; // 0x288(0x08)
	FLinearColor ProgressColor; // 0x290(0x10)
	FText HeaderText; // 0x2a0(0x18)
	FLinearColor NoDefenderColor; // 0x2b8(0x10)
	FLinearColor HasDefenderColor; // 0x2c8(0x10)
	FText SuccesText; // 0x2d8(0x18)
	TArray<UHUD_Salvage_Defend_PlayerSlot_C*> PlayerSlots; // 0x2f0(0x10)

	void UpdateDefenderBlocks(int32_t DefenderCount);
	void Construct();
	void ProgressUpdated(float NewProgress);
	void PreConstruct(bool IsDesignTime);
	void DefendersUpdated(int32_t DefenderCount);
	void success();
	void ExecuteUbergraph_HUD_Salvage_Defend(int32_t EntryPoint);
};

