// WidgetBlueprintGeneratedClass Menu_ServerStatus.Menu_ServerStatus_C
// Size: 0x248 (Inherited: 0x230)
struct UMenu_ServerStatus_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct ULobby_BarTop_Countdown_C* CharSelect_Countdown; // 0x238(0x08)
	struct UWND_MissionBar_C* WND_MissionBar; // 0x240(0x08)

	void Construct(); // Function Menu_ServerStatus.Menu_ServerStatus_C.Construct
	void OnPlayerJoined(struct AFSDPlayerState* PlayerState); // Function Menu_ServerStatus.Menu_ServerStatus_C.OnPlayerJoined
	void OnMissionSelected(struct UGeneratedMission* mission); // Function Menu_ServerStatus.Menu_ServerStatus_C.OnMissionSelected
	void ExecuteUbergraph_Menu_ServerStatus(int32_t EntryPoint); // Function Menu_ServerStatus.Menu_ServerStatus_C.ExecuteUbergraph_Menu_ServerStatus
};

