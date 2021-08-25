// WidgetBlueprintGeneratedClass HUD_Salvage_Defend.HUD_Salvage_Defend_C
// Size: 0x300 (Inherited: 0x230)
struct UHUD_Salvage_Defend_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig; // 0x238(0x08)
	struct UProgressBar* DefenseProgress; // 0x240(0x08)
	struct UHUD_DefaultLabel_C* Header; // 0x248(0x08)
	struct UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_01; // 0x250(0x08)
	struct UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_02; // 0x258(0x08)
	struct UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_03; // 0x260(0x08)
	struct UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_04; // 0x268(0x08)
	struct UHUD_DefaultLabel_C* Sucess_Done; // 0x270(0x08)
	struct UVerticalBox* VerticalBox_Complete; // 0x278(0x08)
	struct UVerticalBox* VerticalBox_InProgress; // 0x280(0x08)
	struct AEVENT_DropPodDefense_Base_C* Event; // 0x288(0x08)
	struct FLinearColor ProgressColor; // 0x290(0x10)
	struct FText HeaderText; // 0x2a0(0x18)
	struct FLinearColor NoDefenderColor; // 0x2b8(0x10)
	struct FLinearColor HasDefenderColor; // 0x2c8(0x10)
	struct FText SuccesText; // 0x2d8(0x18)
	struct TArray<struct UHUD_Salvage_Defend_PlayerSlot_C*> PlayerSlots; // 0x2f0(0x10)

	void UpdateDefenderBlocks(int32_t DefenderCount); // Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.UpdateDefenderBlocks
	void Construct(); // Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.Construct
	void ProgressUpdated(float NewProgress); // Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ProgressUpdated
	void PreConstruct(bool IsDesignTime); // Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.PreConstruct
	void DefendersUpdated(int32_t DefenderCount); // Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.DefendersUpdated
	void success(); // Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.success
	void ExecuteUbergraph_HUD_Salvage_Defend(int32_t EntryPoint); // Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ExecuteUbergraph_HUD_Salvage_Defend
};

