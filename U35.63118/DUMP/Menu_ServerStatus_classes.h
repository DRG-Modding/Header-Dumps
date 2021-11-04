// WidgetBlueprintGeneratedClass Menu_ServerStatus.Menu_ServerStatus_C
// Size: 0x248 (Inherited: 0x230)
struct UMenu_ServerStatus_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	ULobby_BarTop_Countdown_C* CharSelect_Countdown; // 0x238(0x08)
	UWND_MissionBar_C* WND_MissionBar; // 0x240(0x08)

	void Construct();
	void OnPlayerJoined(AFSDPlayerState* PlayerState);
	void OnMissionSelected(UGeneratedMission* mission);
	void ExecuteUbergraph_Menu_ServerStatus(int32_t EntryPoint);
};

