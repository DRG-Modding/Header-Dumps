// BlueprintGeneratedClass ModManager.ModManager_C
// Size: 0x440 (Inherited: 0x220)
struct AModManager_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	UModManagerConfigUI_C* ConfigUI; // 0x230(0x08)
	UModManagerUI_C* MainUI; // 0x238(0x08)
	FString SaveFileName; // 0x240(0x10)
	UModManagerSaveData_C* SaveData; // 0x250(0x08)
	TArray<FKey> AllKeys; // 0x258(0x10)
	bool RecordKeybinding; // 0x268(0x01)
	bool Shift; // 0x269(0x01)
	bool Alt; // 0x26a(0x01)
	bool Ctrl; // 0x26b(0x01)
	FKey Key; // 0x270(0x18)
	TMap<FString, AModBaseV2_C*> Loaded Mods V2; // 0x288(0x50)
	TArray<AActor*> Mods; // 0x2d8(0x10)
	TMap<FString, TScriptInterface<IIManagedMod_C>> Loaded Mods V3; // 0x2e8(0x50)
	TMap<FString, UModListItemUI_C*> Loaded Mod List UIs; // 0x338(0x50)
	UModListItemUI_C* ModManagerModListItem; // 0x388(0x08)
	FInputActionKeyMapping NewActionMapping; // 0x390(0x28)
	FName ActionName; // 0x3b8(0x08)
	AConsumeEscapeKey_C* Close Menu Key Consumer; // 0x3c0(0x08)
	float Mod List Scroll Offset; // 0x3c8(0x04)
	float Mod UI Scroll Offset; // 0x3cc(0x04)
	APlayerController* Local Controller; // 0x3d0(0x08)
	FTimerHandle Controller Finder; // 0x3d8(0x08)
	FTimerHandle V3 Mod Finder; // 0x3e0(0x08)
	UModManagerNotificationUI_C* Notif UI; // 0x3e8(0x08)
	TSet<int32_t> Loaded Mods V2 IDs; // 0x3f0(0x50)

	void Load V3 Mods();
	void Get Local Controller(APlayerController* Controller);
	void Get Shared Mods Text(FString Mod List);
	void ShowNotif();
	void InputActionTotext(FInputActionKeyMapping Input Action, FText Mapping);
	void CreateAndAddModListItemUI(FString ModName, FString ModVersion, FString ModAuthor, bool AllowDisable, bool ModEnabled, UModListItemUI_C* UI);
	void GetMissionType(FString Mission Type);
	void ShowHideUI(bool Hide);
	void GetFullAuthorString(FString Author, FString Text);
	void InpActEvt_ModManagerMenuKeyBinding_K2Node_InputActionEvent_5(FKey Key);
	void InpActEvt_CloseMenu_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_MenuBack_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_Use_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_MapTool_K2Node_InputActionEvent_1(FKey Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnRecordButtonClicked();
	void HandleCloseMenuButtonPressed();
	void HandleNotifcationsEnabledChanged(bool bIsChecked);
	void HandleModEnableChanged(FString SelectedModID, bool IsEnabled);
	void Hook Up Close Close Menu Consumer Event();
	void Handle Close Menu();
	void Initialise Manager();
	void Find Controller();
	void Check for new mods();
	void Delete Notif UI();
	void ExecuteUbergraph_ModManager(int32_t EntryPoint);
};

