// WidgetBlueprintGeneratedClass ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C
// Size: 0x268 (Inherited: 0x230)
struct UConsoleScreen_DeathStats_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x238(0x08)
	struct UCanvasPanel* Empty; // 0x240(0x08)
	struct UUI_DeathStats_View_C* UI_DeathStats_View; // 0x248(0x08)
	struct UUI_WhiteOverlay_C* UI_WhiteOverlay; // 0x250(0x08)
	struct ABP_PlayerController_SpaceRig_C* Player; // 0x258(0x08)
	struct AFSDPlayerState* Owner State; // 0x260(0x08)

	void SetStatsOwner(struct AFSDPlayerState* Player State); // Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.SetStatsOwner
	void ExecuteUbergraph_ConsoleScreen_DeathStats(int32_t EntryPoint); // Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.ExecuteUbergraph_ConsoleScreen_DeathStats
};

