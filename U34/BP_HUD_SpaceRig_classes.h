// BlueprintGeneratedClass BP_HUD_SpaceRig.BP_HUD_SpaceRig_C
// Size: 0x3b0 (Inherited: 0x338)
struct ABP_HUD_SpaceRig_C : AFSDHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x340(0x08)
	struct APlayerCharacter* PlayerCharacter; // 0x348(0x08)
	struct UHUD_SpaceRig_C* HUD; // 0x350(0x08)
	struct TArray<struct UUserWidget*> OwnedWidgets; // 0x358(0x10)
	struct TArray<SoftClassProperty> PendingWindows; // 0x368(0x10)
	struct TArray<struct FClaimableRewardEntry> PendingPromotionRewards; // 0x378(0x10)
	bool PendingFirstPromotion; // 0x388(0x01)
	char UnknownData_389[0x7]; // 0x389(0x07)
	struct TArray<struct UFSDEvent*> PendingEventRewards; // 0x390(0x10)
	struct UGameDLCSettings* DLCSettings; // 0x3a0(0x08)
	struct UWindowWidget* CheatMenu; // 0x3a8(0x08)

	void FetchPromotionRewards(bool OutSuccess); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.FetchPromotionRewards
	void HasSelectedCharacterBeenPromoted(bool IsPromoted); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.HasSelectedCharacterBeenPromoted
	void ShowNextQueuedWindow(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ShowNextQueuedWindow
	void EnqueueWindow(SoftClassProperty WidgetClass); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.EnqueueWindow
	void PlayerSpawned(struct APlayerCharacter* Player); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.PlayerSpawned
	void OnVisibilityChanged(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnVisibilityChanged
	void ReceiveDestroyed(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveDestroyed
	void ReceiveBeginPlay(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveBeginPlay
	void OnCountdownCompleted(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCountdownCompleted
	void Update Visibility(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Update Visibility
	void Handle Count Down(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Count Down
	void Setup Campaign Notifications(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Campaign Notifications
	void OnCampaignNotification_Event(struct UCampaignNotification* Notification); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCampaignNotification_Event
	void Setup Retirement Shouts(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Retirement Shouts
	void OnEligibleForRetirementAssignment(struct UBP_GameInstance_C* GameInstance); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnEligibleForRetirementAssignment
	void Setup Spacerig Notifications(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Spacerig Notifications
	void Setup UI Notifications(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup UI Notifications
	void Setup Promotion Rewards(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Promotion Rewards
	void OnLastWindowClosed(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnLastWindowClosed
	void Setup First Infused Core(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup First Infused Core
	void Setup Pending Rewards(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Pending Rewards
	void Setup FSD Events(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup FSD Events
	void OnFSDEventActiveChanged(struct UFSDEvent* InFsdEvent, bool InIsActive); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnFSDEventActiveChanged
	void SetupTutorialMessage(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.SetupTutorialMessage
	void CheckForTutorialPrompt(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.CheckForTutorialPrompt
	void Stop Check For Tutorial Prompt(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Stop Check For Tutorial Prompt
	void Setup Game DLC Announcements(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Game DLC Announcements
	void CheatMenuRequest(); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.CheatMenuRequest
	void ExecuteUbergraph_BP_HUD_SpaceRig(int32_t EntryPoint); // Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ExecuteUbergraph_BP_HUD_SpaceRig
};

