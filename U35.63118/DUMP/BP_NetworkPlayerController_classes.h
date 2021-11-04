// BlueprintGeneratedClass BP_NetworkPlayerController.BP_NetworkPlayerController_C
// Size: 0x8b8 (Inherited: 0x850)
struct ABP_NetworkPlayerController_C : ABP_PlayerController_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x850(0x08)
	USCREEN_CharacterSelection_Base_C* CharSelectScreen; // 0x858(0x08)
	UScreen_BaseLoadLevel_C* LoaderScreenUI; // 0x860(0x08)
	UMenu_ServerStatus_C* TopBar; // 0x868(0x08)
	UPopup_ReconnectController_C* ReconnectWidget; // 0x870(0x08)
	bool ShowingReconnectcontroller; // 0x878(0x01)
	UScreen_CharacterInfo_C* CharInfo; // 0x880(0x08)
	bool SimulateLateJoin; // 0x888(0x01)
	TSoftClassPtr<UObject> CharacterSelectionClass; // 0x890(0x28)

	void CollapseAndRemoveFromParent(UWidget* Widget);
	UUserWidget* GetLoaderScreenUIClass();
	void CleanupUI();
	void GetNonTakenHero(UPlayerCharacterID* SelectedClass);
	void ReceiveBeginPlay();
	void OnBack();
	void OnPlayerCharacterPossesed_Event();
	void Server_RequestNonTakenHero();
	void Client_RecieveNonTakenHero(UPlayerCharacterID* New Character);
	void Server_SetCharacterSelected();
	void RecievePreClientTravel();
	void ReceiveDestroyed();
	void ShowReconnect(bool Show);
	void ExecuteUbergraph_BP_NetworkPlayerController(int32_t EntryPoint);
};

