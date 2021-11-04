// BlueprintGeneratedClass BP_HUD_SpaceRig.BP_HUD_SpaceRig_C
// Size: 0x3a8 (Inherited: 0x350)
struct ABP_HUD_SpaceRig_C : ASpaceRigHUD {
	FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	USceneComponent* DefaultSceneRoot; // 0x358(0x08)
	APlayerCharacter* PlayerCharacter; // 0x360(0x08)
	UHUD_SpaceRig_C* HUD; // 0x368(0x08)
	TArray<UUserWidget*> OwnedWidgets; // 0x370(0x10)
	TArray<FClaimableRewardEntry> PendingPromotionRewards; // 0x380(0x10)
	bool PendingFirstPromotion; // 0x390(0x01)
	UGameDLCSettings* DLCSettings; // 0x398(0x08)
	UWindowWidget* CheatMenu; // 0x3a0(0x08)

	void TryShowNextNotification();
	void FetchPromotionRewards(bool OutSuccess);
	void EnqueueWindow(TSoftClassPtr<UObject> WidgetClass, UWindowWidget* OutWindow);
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
	void Setup First Infused Core();
	void Setup Pending Rewards();
	void Setup FSD Events();
	void OnFSDEventActiveChanged(UFSDEvent* InFsdEvent, bool InIsActive);
	void SetupTutorialMessage();
	void CheckForTutorialPrompt();
	void Stop Check For Tutorial Prompt();
	void Setup Game DLC Announcements();
	void ReceiveNotificationQueueActivated();
	void ReceiveNotificationAdded(UObject* InNotification);
	void Setup Notification Queue();
	void CheatMenuRequest();
	void Setup Cheat Menu();
	void Shouting Done();
	void SetupModWarnings]();
	void ExecuteUbergraph_BP_HUD_SpaceRig(int32_t EntryPoint);
};

