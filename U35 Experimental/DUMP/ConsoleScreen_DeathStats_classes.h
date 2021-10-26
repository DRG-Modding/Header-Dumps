// WidgetBlueprintGeneratedClass ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C
// Size: 0x268 (Inherited: 0x230)
struct UConsoleScreen_DeathStats_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x238(0x08)
	UCanvasPanel* Empty; // 0x240(0x08)
	UUI_DeathStats_View_C* UI_DeathStats_View; // 0x248(0x08)
	UUI_WhiteOverlay_C* UI_WhiteOverlay; // 0x250(0x08)
	ABP_PlayerController_SpaceRig_C* Player; // 0x258(0x08)
	AFSDPlayerState* Owner State; // 0x260(0x08)

	void SetStatsOwner(AFSDPlayerState* Player State);
	void ExecuteUbergraph_ConsoleScreen_DeathStats(int32_t EntryPoint);
};

