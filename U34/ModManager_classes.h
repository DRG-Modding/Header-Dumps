// BlueprintGeneratedClass ModManager.ModManager_C
// Size: 0x390 (Inherited: 0x220)
struct AModManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct UModManagerConfigUI_C* ConfigUI; // 0x230(0x08)
	struct UModManagerUI_C* MainUI; // 0x238(0x08)
	struct FString SaveFileName; // 0x240(0x10)
	struct UModManagerSaveData_C* SaveData; // 0x250(0x08)
	struct TArray<struct FKey> AllKeys; // 0x258(0x10)
	bool RecordKeybinding; // 0x268(0x01)
	bool Shift; // 0x269(0x01)
	bool Alt; // 0x26a(0x01)
	bool Ctrl; // 0x26b(0x01)
	char UnknownData_26C[0x4]; // 0x26c(0x04)
	struct FKey Key; // 0x270(0x18)
	struct TMap<int32_t, struct AModBaseV2_C*> LoadedMods; // 0x288(0x50)
	struct TArray<struct AActor*> Mods; // 0x2d8(0x10)
	struct TMap<int32_t, struct UModListItemUI_C*> LoadedModListUIs; // 0x2e8(0x50)
	struct UModListItemUI_C* ModManagerModListItem; // 0x338(0x08)
	struct FInputActionKeyMapping NewActionMapping; // 0x340(0x28)
	struct FName ActionName; // 0x368(0x08)
	struct AConsumeEscapeKey_C* Close Menu Key Consumer; // 0x370(0x08)
	float Mod List Scroll Offset; // 0x378(0x04)
	float Mod UI Scroll Offset; // 0x37c(0x04)
	struct APlayerController* Local Controller; // 0x380(0x08)
	struct FTimerHandle Controller Finder; // 0x388(0x08)

	void Get Local Controller(struct APlayerController* Controller); // Function ModManager.ModManager_C.Get Local Controller
	void Get Shared Mods Text(struct FString Mod List); // Function ModManager.ModManager_C.Get Shared Mods Text
	void ShowNotif(); // Function ModManager.ModManager_C.ShowNotif
	void InputActionTotext(struct FInputActionKeyMapping Input Action, struct FText Mapping); // Function ModManager.ModManager_C.InputActionTotext
	void CreateAndAddModListItemUI(struct FString ModName, struct FString ModVersion, struct FString ModAuthor, int32_t ModID, int32_t ModUIIndex, bool AllowDisable, bool ModEnabled, struct UModListItemUI_C* UI); // Function ModManager.ModManager_C.CreateAndAddModListItemUI
	void GetMissionType(struct FString Mission Type); // Function ModManager.ModManager_C.GetMissionType
	void ShowHideUI(bool Hide); // Function ModManager.ModManager_C.ShowHideUI
	void GetFullAuthorString(struct FString Author, struct FString Text); // Function ModManager.ModManager_C.GetFullAuthorString
	void InpActEvt_ModManagerMenuKeyBinding_K2Node_InputActionEvent_1(struct FKey Key); // Function ModManager.ModManager_C.InpActEvt_ModManagerMenuKeyBinding_K2Node_InputActionEvent_1
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(struct FKey Key); // Function ModManager.ModManager_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1
	void ReceiveBeginPlay(); // Function ModManager.ModManager_C.ReceiveBeginPlay
	void ReceiveTick(float DeltaSeconds); // Function ModManager.ModManager_C.ReceiveTick
	void OnRecordButtonClicked(); // Function ModManager.ModManager_C.OnRecordButtonClicked
	void HandleCloseMenuButtonPressed(); // Function ModManager.ModManager_C.HandleCloseMenuButtonPressed
	void HandleNotifcationsEnabledChanged(bool bIsChecked); // Function ModManager.ModManager_C.HandleNotifcationsEnabledChanged
	void HandleModEnableChanged(int32_t SelectedModID, bool IsEnabled); // Function ModManager.ModManager_C.HandleModEnableChanged
	void Hook Up Close Close Menu Consumer Event(); // Function ModManager.ModManager_C.Hook Up Close Close Menu Consumer Event
	void Handle Close Menu(); // Function ModManager.ModManager_C.Handle Close Menu
	void Initialise Manager(); // Function ModManager.ModManager_C.Initialise Manager
	void Find Controller(); // Function ModManager.ModManager_C.Find Controller
	void ExecuteUbergraph_ModManager(int32_t EntryPoint); // Function ModManager.ModManager_C.ExecuteUbergraph_ModManager
};

