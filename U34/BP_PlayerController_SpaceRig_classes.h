// BlueprintGeneratedClass BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C
// Size: 0x968 (Inherited: 0x7f8)
struct ABP_PlayerController_SpaceRig_C : ABP_SR_PlayerControllerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7f8(0x08)
	struct UWindowWidget* ServerBrowser; // 0x800(0x08)
	struct UMENU_Loadout_C* Loadout; // 0x808(0x08)
	struct UWindowWidget* options; // 0x810(0x08)
	struct UWindowWidget* MissionSelect; // 0x818(0x08)
	int32_t OldCounter; // 0x820(0x04)
	char UnknownData_824[0x4]; // 0x824(0x04)
	struct TArray<struct UUserWidget*> Widgets; // 0x828(0x10)
	struct UPopup_GearUpgrade_Buy_C* PopUp_BuyUpgrade; // 0x838(0x08)
	struct FVector StartLocation; // 0x840(0x0c)
	bool CharacterPossed; // 0x84c(0x01)
	char UnknownData_84D[0x3]; // 0x84d(0x03)
	struct FMulticastInlineDelegate OnToggleHUD; // 0x850(0x10)
	struct UWindowWidget* CharCustomization; // 0x860(0x08)
	struct UWindowWidget* Crafting; // 0x868(0x08)
	struct UWindowWidget* Popup_Crafting; // 0x870(0x08)
	bool ShowingReconnectcontroller; // 0x878(0x01)
	bool IsHUDVisible; // 0x879(0x01)
	char UnknownData_87A[0x6]; // 0x87a(0x06)
	struct USCREEN_CharacterSelection_Clean_C* CharacterSelection; // 0x880(0x08)
	bool HasShownCharacterSelector; // 0x888(0x01)
	char UnknownData_889[0x7]; // 0x889(0x07)
	struct UWindowWidget* ReconnectController; // 0x890(0x08)
	struct UWindowWidget* NetworkError; // 0x898(0x08)
	struct UWindowWidget* Trading; // 0x8a0(0x08)
	struct UWindowWidget* Cheat; // 0x8a8(0x08)
	struct UWindowWidget* Jobs; // 0x8b0(0x08)
	struct UWND_AssignmentMissionComplete_C* C; // 0x8b8(0x08)
	struct UWindowWidget* RetirementPopup_1; // 0x8c0(0x08)
	struct UMENU_UpgradeScreen_C* ItemUpgrade; // 0x8c8(0x08)
	bool EscapeMenuEnabled; // 0x8d0(0x01)
	char UnknownData_8D1[0x7]; // 0x8d1(0x07)
	struct UWindowWidget* Bosco; // 0x8d8(0x08)
	int32_t Medbay speech counter; // 0x8e0(0x04)
	float Time between shouts; // 0x8e4(0x04)
	int32_t MixerConfettiTime; // 0x8e8(0x04)
	char UnknownData_8EC[0x4]; // 0x8ec(0x04)
	struct FScaledEffect MixerConfetti; // 0x8f0(0x10)
	struct UFSDAchievement* SelfControlAchievement; // 0x900(0x08)
	bool HasKickedABarrel; // 0x908(0x01)
	char UnknownData_909[0x7]; // 0x909(0x07)
	struct UFSDAchievement* MugInHoopAchievement; // 0x910(0x08)
	struct UFSDAchievement* DiscJockeyAchievement; // 0x918(0x08)
	bool CanUseInstantUsableDiscord; // 0x920(0x01)
	char UnknownData_921[0x7]; // 0x921(0x07)
	struct UWindowWidget* DeepDives; // 0x928(0x08)
	struct TArray<struct FSoftObjectPath> UIToAsyncLoad; // 0x930(0x10)
	struct FMulticastInlineDelegate OnOpenedEscapeMenu; // 0x940(0x10)
	int32_t CheatCounter; // 0x950(0x04)
	char UnknownData_954[0x4]; // 0x954(0x04)
	struct FMulticastInlineDelegate OnCheatRequested; // 0x958(0x10)

	void GetMissionSelect(struct UWindowWidget* Widget); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetMissionSelect
	void GetPopupCrafting(struct UWindowWidget* Widget); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetPopupCrafting
	void GetCrafting(struct UWindowWidget* Widget); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetCrafting
	void PreloadAssets(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PreloadAssets
	bool hudVisible(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.hudVisible
	void ChangeHUDVisible(bool IsHUDVisible, enum class EHUDVisibilityReason reason); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeHUDVisible
	void SelectLastPlayedCharacter(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SelectLastPlayedCharacter
	void AddWidget(struct UUserWidget* Widget, int32_t ZOrder, enum class ESlateVisibility InVisibility); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.AddWidget
	void ChangeCharacter(struct UPlayerCharacterID* NewCharacter); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeCharacter
	void CreateUI(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CreateUI
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_6(struct FKey Key); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_6
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_5(struct FKey Key); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_5
	void InpActEvt_MenuButton_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MenuButton_K2Node_InputActionEvent_4
	void InpActEvt_Chat_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Chat_K2Node_InputActionEvent_3
	void InpActEvt_CallDonkey_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_CallDonkey_K2Node_InputActionEvent_2
	void InpActEvt_MapTool_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MapTool_K2Node_InputActionEvent_1
	void InpActEvt_Subtract_K2Node_InputKeyEvent_6(struct FKey Key); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Subtract_K2Node_InputKeyEvent_6
	void InpActEvt_Eight_K2Node_InputKeyEvent_5(struct FKey Key); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_5
	void InpActEvt_Eight_K2Node_InputKeyEvent_4(struct FKey Key); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_4
	void InpActEvt_Nine_K2Node_InputKeyEvent_3(struct FKey Key); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_3
	void InpActEvt_Nine_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_2
	void InpActEvt_Ctrl+Alt_H_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Ctrl+Alt_H_K2Node_InputKeyEvent_1
	void OnLoaded_0C1A95084D16C934A469CF8C3B445101(struct UObject* Loaded); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnLoaded_0C1A95084D16C934A469CF8C3B445101
	void OnFailure_FD5D0BC24D561288D20ABE9353DBA180(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFailure_FD5D0BC24D561288D20ABE9353DBA180
	void OnSuccess_FD5D0BC24D561288D20ABE9353DBA180(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnSuccess_FD5D0BC24D561288D20ABE9353DBA180
	void ShowServerBrowser(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowServerBrowser
	void ShowMissionSelect(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMissionSelect
	void Client_OpenMap(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Client_OpenMap
	void PlayerChangeCharacter(struct UPlayerCharacterID* NewCharacter); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerChangeCharacter
	void RecievePreClientTravel(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecievePreClientTravel
	void ShowCharacterSelect(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelect
	void ControllerReady(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ControllerReady
	void RecieveOnControllerReady(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecieveOnControllerReady
	void ShowBuyItemPopup(struct AActor* Item, struct UItemUpgrade* Upgrade); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBuyItemPopup
	void ReceiveDestroyed(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveDestroyed
	void OnCharacterPossesd(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterPossesd
	void ReceiveBeginPlay(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveBeginPlay
	void ShowCharCustomization(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharCustomization
	void ShowCrafting(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCrafting
	void ShowCharacterScreenAndWorld(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterScreenAndWorld
	void ShowCraftingAndWorld(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCraftingAndWorld
	void ShowCustomizationAndWorld(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCustomizationAndWorld
	void SpawnPlayer(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SpawnPlayer
	void ShowFirstCharacterSelect(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowFirstCharacterSelect
	void OpenCharacterSelector(bool OpenVideo, bool AllowBack); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenCharacterSelector
	void ShowReconnectController(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnectController
	void OnFirstWindowOpened(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFirstWindowOpened
	void OnLastWindowClosed(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnLastWindowClosed
	void ShowNetworkError(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowNetworkError
	void ShowTrading(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowTrading
	void ShowWindowByClass(struct UWindowWidget* windowClass, int32_t ZOrder); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowWindowByClass
	void ShowCheatMenu(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCheatMenu
	void ShowBarMenu(struct ASpaceRigBar* Bar); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBarMenu
	void OnRoundSelected_Event(struct ASpaceRigBar* Bar, struct UDrinkableDataAsset* RequestedDrink); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRoundSelected_Event
	void OrderBarRound(struct ASpaceRigBar* Bar, struct UDrinkableDataAsset* Drink); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OrderBarRound
	void Deduct Credits On Client(int32_t amount); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Deduct Credits On Client
	void ShowJobs(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowJobs
	void ShowItemUpgradeScreen(struct APlayerCharacter* CharacterClass, struct AActor* itemClass, enum class EItemCategory ItemCategory); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowItemUpgradeScreen
	void ShowBoscoUpgrades(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBoscoUpgrades
	void OnPlayerSpawnBegin(int32_t PlayerId); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPlayerSpawnBegin
	void OnDroppodLeave(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnDroppodLeave
	void PlayerThrewMugInHoop(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerThrewMugInHoop
	void PlayerPlayedEntireSong(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerPlayedEntireSong
	void HandleDiscordConsole(struct ABP_DiscordConsole_C* DiscordConsole); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.HandleDiscordConsole
	void SetUsableDiscord(bool Usable); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetUsableDiscord
	void ShowDeepDives(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowDeepDives
	void OpenSpacerigConsole(struct ABP_BaseSpaceRigConsole_C* Console); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenSpacerigConsole
	void SetHasShownCharacterSelector(bool HasShown); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetHasShownCharacterSelector
	void SetIsEscapeMenuEnabled(bool IsEscapeMenuEnabled); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetIsEscapeMenuEnabled
	void Reset Player Location(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Location
	void Reset Player Scale On Clients(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Scale On Clients
	void Server_PopLooatAtAffliction(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Server_PopLooatAtAffliction
	void ShowLookAtConsole(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowLookAtConsole
	void LaunchTutorial(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.LaunchTutorial
	void PromptLaunchTutorial(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PromptLaunchTutorial
	void On Prompt(bool Yes); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.On Prompt
	void ShowCharacterSelectionBackground(bool resetToDefaultWeapon, enum class ECharselectionCameraLocation cameraLocation); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelectionBackground
	void ShowForgeWorkshop(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowForgeWorkshop
	void Back_Event_1(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Back_Event_1
	void OnCharacterSelected(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterSelected
	void OnHostTimerChanged(float newTime); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnHostTimerChanged
	void OnMissionTimerChanged(float newTime); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnMissionTimerChanged
	void DoCountDown(float newTime); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.DoCountDown
	void ShowReconnect(bool Show); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnect
	void OnGravityChanged(float CurrentGravity, float Change); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnGravityChanged
	void CustomEvent_1(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CustomEvent_1
	void ExecuteUbergraph_BP_PlayerController_SpaceRig(int32_t EntryPoint); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ExecuteUbergraph_BP_PlayerController_SpaceRig
	void OnCheatRequested__DelegateSignature(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCheatRequested__DelegateSignature
	void OnOpenedEscapeMenu__DelegateSignature(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnOpenedEscapeMenu__DelegateSignature
	void OnToggleHUD__DelegateSignature(); // Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnToggleHUD__DelegateSignature
};

