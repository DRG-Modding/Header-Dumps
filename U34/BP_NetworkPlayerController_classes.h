// BlueprintGeneratedClass BP_NetworkPlayerController.BP_NetworkPlayerController_C
// Size: 0x8b8 (Inherited: 0x850)
struct ABP_NetworkPlayerController_C : ABP_PlayerController_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x850(0x08)
	struct USCREEN_CharacterSelection_Base_C* CharSelectScreen; // 0x858(0x08)
	struct UScreen_BaseLoadLevel_C* LoaderScreenUI; // 0x860(0x08)
	struct UMenu_ServerStatus_C* TopBar; // 0x868(0x08)
	struct UPopup_ReconnectController_C* ReconnectWidget; // 0x870(0x08)
	bool ShowingReconnectcontroller; // 0x878(0x01)
	char UnknownData_879[0x7]; // 0x879(0x07)
	struct UScreen_CharacterInfo_C* CharInfo; // 0x880(0x08)
	bool SimulateLateJoin; // 0x888(0x01)
	char UnknownData_889[0x7]; // 0x889(0x07)
	SoftClassProperty CharacterSelectionClass; // 0x890(0x28)

	void CollapseAndRemoveFromParent(struct UWidget* Widget); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CollapseAndRemoveFromParent
	struct UUserWidget* GetLoaderScreenUIClass(); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetLoaderScreenUIClass
	void CleanupUI(); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CleanupUI
	void GetNonTakenHero(struct UPlayerCharacterID* SelectedClass); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetNonTakenHero
	void ReceiveBeginPlay(); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveBeginPlay
	void OnBack(); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnBack
	void OnPlayerCharacterPossesed_Event(); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnPlayerCharacterPossesed_Event
	void Server_RequestNonTakenHero(); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_RequestNonTakenHero
	void Client_RecieveNonTakenHero(struct UPlayerCharacterID* New Character); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Client_RecieveNonTakenHero
	void Server_SetCharacterSelected(); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_SetCharacterSelected
	void RecievePreClientTravel(); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.RecievePreClientTravel
	void ReceiveDestroyed(); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveDestroyed
	void ShowReconnect(bool Show); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ShowReconnect
	void ExecuteUbergraph_BP_NetworkPlayerController(int32_t EntryPoint); // Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ExecuteUbergraph_BP_NetworkPlayerController
};

