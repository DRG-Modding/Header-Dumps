// BlueprintGeneratedClass BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C
// Size: 0x968 (Inherited: 0x7f8)
struct ABP_PlayerController_SpaceRig_C : ABP_SR_PlayerControllerBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x7f8(0x08)
	UWindowWidget* ServerBrowser; // 0x800(0x08)
	UMENU_Loadout_C* Loadout; // 0x808(0x08)
	UWindowWidget* options; // 0x810(0x08)
	UWindowWidget* MissionSelect; // 0x818(0x08)
	int32_t OldCounter; // 0x820(0x04)
	TArray<UUserWidget*> Widgets; // 0x828(0x10)
	UPopup_GearUpgrade_Buy_C* PopUp_BuyUpgrade; // 0x838(0x08)
	FVector StartLocation; // 0x840(0x0c)
	bool CharacterPossed; // 0x84c(0x01)
	FMulticastInlineDelegate OnToggleHUD; // 0x850(0x10)
	UWindowWidget* CharCustomization; // 0x860(0x08)
	UWindowWidget* Crafting; // 0x868(0x08)
	UWindowWidget* Popup_Crafting; // 0x870(0x08)
	bool ShowingReconnectcontroller; // 0x878(0x01)
	bool IsHUDVisible; // 0x879(0x01)
	USCREEN_CharacterSelection_Clean_C* CharacterSelection; // 0x880(0x08)
	bool HasShownCharacterSelector; // 0x888(0x01)
	UWindowWidget* ReconnectController; // 0x890(0x08)
	UWindowWidget* NetworkError; // 0x898(0x08)
	UWindowWidget* Trading; // 0x8a0(0x08)
	UWindowWidget* Cheat; // 0x8a8(0x08)
	UWindowWidget* Jobs; // 0x8b0(0x08)
	UWND_AssignmentMissionComplete_C* C; // 0x8b8(0x08)
	UWindowWidget* RetirementPopup_1; // 0x8c0(0x08)
	UMENU_UpgradeScreen_C* ItemUpgrade; // 0x8c8(0x08)
	bool EscapeMenuEnabled; // 0x8d0(0x01)
	UWindowWidget* Bosco; // 0x8d8(0x08)
	int32_t Medbay speech counter; // 0x8e0(0x04)
	float Time between shouts; // 0x8e4(0x04)
	int32_t MixerConfettiTime; // 0x8e8(0x04)
	FScaledEffect MixerConfetti; // 0x8f0(0x10)
	UFSDAchievement* SelfControlAchievement; // 0x900(0x08)
	bool HasKickedABarrel; // 0x908(0x01)
	UFSDAchievement* MugInHoopAchievement; // 0x910(0x08)
	UFSDAchievement* DiscJockeyAchievement; // 0x918(0x08)
	bool CanUseInstantUsableDiscord; // 0x920(0x01)
	UWindowWidget* DeepDives; // 0x928(0x08)
	TArray<FSoftObjectPath> UIToAsyncLoad; // 0x930(0x10)
	FMulticastInlineDelegate OnOpenedEscapeMenu; // 0x940(0x10)
	int32_t CheatCounter; // 0x950(0x04)
	FMulticastInlineDelegate OnCheatRequested; // 0x958(0x10)

	void ModdedSavegameCheck();
	void Change Savegame();
	void GetMissionSelect(UWindowWidget* Widget);
	void GetPopupCrafting(UWindowWidget* Widget);
	void GetCrafting(UWindowWidget* Widget);
	void PreloadAssets();
	bool hudVisible();
	void ChangeHUDVisible(bool IsHUDVisible, enum class EHUDVisibilityReason reason);
	void SelectLastPlayedCharacter();
	void AddWidget(UUserWidget* Widget, int32_t ZOrder, enum class ESlateVisibility InVisibility);
	void ChangeCharacter(UPlayerCharacterID* NewCharacter);
	void CreateUI();
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_6(FKey Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_5(FKey Key);
	void InpActEvt_MenuButton_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_Chat_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_CallDonkey_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_MapTool_K2Node_InputActionEvent_1(FKey Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_6(FKey Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_5(FKey Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_4(FKey Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_3(FKey Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_Ctrl+Alt_H_K2Node_InputKeyEvent_1(FKey Key);
	void OnLoaded_0C1A95084D16C934A469CF8C3B445101(UObject* Loaded);
	void OnFailure_84F86EB44BDC03B3D4D52D92FC0B069A();
	void OnSuccess_84F86EB44BDC03B3D4D52D92FC0B069A();
	void OnFailure_FD5D0BC24D561288D20ABE9353DBA180();
	void OnSuccess_FD5D0BC24D561288D20ABE9353DBA180();
	void ShowServerBrowser();
	void ShowMissionSelect();
	void Client_OpenMap();
	void PlayerChangeCharacter(UPlayerCharacterID* NewCharacter);
	void RecievePreClientTravel();
	void ShowCharacterSelect();
	void ControllerReady();
	void RecieveOnControllerReady();
	void ShowBuyItemPopup(AActor* Item, UItemUpgrade* Upgrade);
	void ReceiveDestroyed();
	void OnCharacterPossesd();
	void ReceiveBeginPlay();
	void ShowCharCustomization();
	void ShowCrafting();
	void ShowCharacterScreenAndWorld();
	void ShowCraftingAndWorld();
	void ShowCustomizationAndWorld();
	void SpawnPlayer();
	void ShowFirstCharacterSelect();
	void OpenCharacterSelector(bool OpenVideo, bool AllowBack);
	void ShowReconnectController();
	void OnFirstWindowOpened();
	void OnLastWindowClosed();
	void ShowNetworkError();
	void ShowTrading();
	void ShowWindowByClass(UWindowWidget* windowClass, int32_t ZOrder);
	void ShowCheatMenu();
	void ShowBarMenu(ASpaceRigBar* Bar);
	void OnRoundSelected_Event(ASpaceRigBar* Bar, UDrinkableDataAsset* RequestedDrink);
	void OrderBarRound(ASpaceRigBar* Bar, UDrinkableDataAsset* Drink);
	void Deduct Credits On Client(int32_t amount);
	void ShowJobs();
	void ShowItemUpgradeScreen(APlayerCharacter* CharacterClass, AActor* itemClass, enum class EItemCategory ItemCategory);
	void ShowBoscoUpgrades();
	void OnPlayerSpawnBegin(int32_t PlayerId);
	void OnDroppodLeave();
	void PlayerThrewMugInHoop();
	void PlayerPlayedEntireSong();
	void HandleDiscordConsole(ABP_DiscordConsole_C* DiscordConsole);
	void SetUsableDiscord(bool Usable);
	void ShowDeepDives();
	void OpenSpacerigConsole(ABP_BaseSpaceRigConsole_C* Console);
	void SetHasShownCharacterSelector(bool HasShown);
	void SetIsEscapeMenuEnabled(bool IsEscapeMenuEnabled);
	void Reset Player Location();
	void Reset Player Scale On Clients();
	void Server_PopLooatAtAffliction();
	void ShowLookAtConsole();
	void LaunchTutorial();
	void PromptLaunchTutorial();
	void On Prompt(bool Yes);
	void ShowCharacterSelectionBackground(bool resetToDefaultWeapon, enum class ECharselectionCameraLocation cameraLocation);
	void ShowForgeWorkshop();
	void ReloadSpacerig();
	void OnRestartGame(bool Yes, bool CreateModdedSave);
	void OnRestartSpacerig(bool Yes, bool CreateModdedSave);
	void OnPackageMounted(bool Sandbox);
	void OnPlayer(AFSDPlayerState* PlayerState);
	void Back_Event_1();
	void OnCharacterSelected();
	void OnHostTimerChanged(float newTime);
	void OnMissionTimerChanged(float newTime);
	void DoCountDown(float newTime);
	void ShowReconnect(bool Show);
	void OnGravityChanged(float CurrentGravity, float Change);
	void CustomEvent_1();
	void ExecuteUbergraph_BP_PlayerController_SpaceRig(int32_t EntryPoint);
	void OnCheatRequested__DelegateSignature();
	void OnOpenedEscapeMenu__DelegateSignature();
	void OnToggleHUD__DelegateSignature();
};

