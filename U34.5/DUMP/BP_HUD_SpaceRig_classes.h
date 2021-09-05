// BlueprintGeneratedClass BP_HUD_SpaceRig.BP_HUD_SpaceRig_C
// Size: 0x3b0 (Inherited: 0x338)
struct ABP_HUD_SpaceRig_C : AFSDHUD {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	USceneComponent* DefaultSceneRoot; // 0x340(0x08)
	APlayerCharacter* PlayerCharacter; // 0x348(0x08)
	UHUD_SpaceRig_C* HUD; // 0x350(0x08)
	TArray<UUserWidget*> OwnedWidgets; // 0x358(0x10)
	TArray<TSoftClassPtr<UObject>> PendingWindows; // 0x368(0x10)
	TArray<FClaimableRewardEntry> PendingPromotionRewards; // 0x378(0x10)
	bool PendingFirstPromotion; // 0x388(0x01)
	TArray<UFSDEvent*> PendingEventRewards; // 0x390(0x10)
	UGameDLCSettings* DLCSettings; // 0x3a0(0x08)
	UWindowWidget* CheatMenu; // 0x3a8(0x08)

	void FetchPromotionRewards(bool OutSuccess);
	void HasSelectedCharacterBeenPromoted(bool IsPromoted);
	void ShowNextQueuedWindow();
	void EnqueueWindow(TSoftClassPtr<UObject> WidgetClass);
	void PlayerSpawned(APlayerCharacter* Player);
	void OnVisibilityChanged();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnCountdownCompleted();
	void Update Visibility();
	void Handle Count Down();
	void Setup Campaign Notifications();
	void OnCampaignNotification_Event(UCampaignNotification* Notification);
	void Setup Retirement Shouts();
	void OnEligibleForRetirementAssignment(UBP_GameInstance_C* GameInstance);
	void Setup Spacerig Notifications();
	void Setup UI Notifications();
	void Setup Promotion Rewards();
	void OnLastWindowClosed();
	void Setup First Infused Core();
	void Setup Pending Rewards();
	void Setup FSD Events();
	void OnFSDEventActiveChanged(UFSDEvent* InFsdEvent, bool InIsActive);
	void SetupTutorialMessage();
	void CheckForTutorialPrompt();
	void Stop Check For Tutorial Prompt();
	void Setup Game DLC Announcements();
	void CheatMenuRequest();
	void ExecuteUbergraph_BP_HUD_SpaceRig(int32_t EntryPoint);
};

