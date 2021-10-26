// BlueprintGeneratedClass ModManager.ModManager_C
// Size: 0x441 (Inherited: 0x220)
struct AModManager_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) UModManagerConfigUI_C* ConfigUI; 
	UPROPERTY(BlueprintReadWrite) UModManagerUI_C* MainUI; 
	UPROPERTY(BlueprintReadWrite) FString SaveFileName; 
	UPROPERTY(BlueprintReadWrite) UModManagerSaveData_C* SaveData; 
	UPROPERTY(BlueprintReadWrite) TArray<FKey> AllKeys; 
	UPROPERTY(BlueprintReadWrite) bool RecordKeybinding; 
	UPROPERTY(BlueprintReadWrite) bool Shift; 
	UPROPERTY(BlueprintReadWrite) bool Alt; 
	UPROPERTY(BlueprintReadWrite) bool Ctrl; 
	UPROPERTY(BlueprintReadWrite) FKey Key; 
	UPROPERTY(BlueprintReadWrite) TMap<FString, AModBaseV2_C*> Loaded Mods V2; 
	UPROPERTY(BlueprintReadWrite) TArray<AActor*> Mods; 
	UPROPERTY(BlueprintReadWrite) TMap<FString, TScriptInterface<IIManagedMod_C>> Loaded Mods V3; 
	UPROPERTY(BlueprintReadWrite) TMap<FString, UModListItemUI_C*> Loaded Mod List UIs; 
	UPROPERTY(BlueprintReadWrite) UModListItemUI_C* ModManagerModListItem; 
	UPROPERTY(BlueprintReadWrite) FInputActionKeyMapping NewActionMapping; 
	UPROPERTY(BlueprintReadWrite) FName ActionName; 
	UPROPERTY(BlueprintReadWrite) AConsumeEscapeKey_C* Close Menu Key Consumer; 
	UPROPERTY(BlueprintReadWrite) float Mod List Scroll Offset; 
	UPROPERTY(BlueprintReadWrite) float Mod UI Scroll Offset; 
	UPROPERTY(BlueprintReadWrite) APlayerController* Local Controller; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle Controller Finder; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle V3 Mod Finder; 
	UPROPERTY(BlueprintReadWrite) UModManagerNotificationUI_C* Notif UI; 
	UPROPERTY(BlueprintReadWrite) TSet<int32_t> Loaded Mods V2 IDs; 
	UPROPERTY(BlueprintReadWrite) bool Ui Added; 

	UFUNCTION(BlueprintCallable) void Load V3 Mods();
	UFUNCTION(BlueprintCallable) void ShowNotif();
	UFUNCTION(BlueprintCallable) void InputActionTotext(FInputActionKeyMapping Input Action, FText Mapping);
	UFUNCTION(BlueprintCallable) void CreateAndAddModListItemUI(FString ModName, FString ModVersion, FString ModAuthor, bool AllowDisable, bool ModEnabled, UModListItemUI_C* UI);
	UFUNCTION(BlueprintCallable) void ShowHideUI(bool Hide);
	UFUNCTION(BlueprintCallable) void GetFullAuthorString(FString Author, FString Text);
	UFUNCTION(BlueprintCallable) void InpActEvt_ModManagerMenuKeyBinding_K2Node_InputActionEvent_5(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_CloseMenu_K2Node_InputActionEvent_4(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_MenuBack_K2Node_InputActionEvent_3(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_Use_K2Node_InputActionEvent_2(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_MapTool_K2Node_InputActionEvent_1(FKey Key);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void OnRecordButtonClicked();
	UFUNCTION(BlueprintCallable) void HandleCloseMenuButtonPressed();
	UFUNCTION(BlueprintCallable) void HandleNotifcationsEnabledChanged(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void HandleModEnableChanged(FString SelectedModID, bool IsEnabled);
	UFUNCTION(BlueprintCallable) void Hook Up Close Close Menu Consumer Event();
	UFUNCTION(BlueprintCallable) void Handle Close Menu();
	UFUNCTION(BlueprintCallable) void Initialise Manager();
	UFUNCTION(BlueprintCallable) void Find Controller();
	UFUNCTION(BlueprintCallable) void Check for new mods();
	UFUNCTION(BlueprintCallable) void Delete Notif UI();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ModManager(int32_t EntryPoint);
};

