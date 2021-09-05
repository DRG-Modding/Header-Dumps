// BlueprintGeneratedClass BP_HUD.BP_HUD_C
// Size: 0x3b0 (Inherited: 0x338)
struct ABP_HUD_C : AFSDHUD {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	USceneComponent* DefaultSceneRoot; // 0x340(0x08)
	TArray<UWidget*> Widgets; // 0x348(0x10)
	APlayerController* PlayerController; // 0x358(0x08)
	bool HudInitialized; // 0x360(0x01)
	UFSDMainHUDWidget* HudWidget; // 0x368(0x08)
	TArray<URadarPointComponent*> RadarPointsInQueue; // 0x370(0x10)
	APlayerCharacter* PlayerCharacter; // 0x380(0x08)
	UWindowWidget* EscMenu; // 0x388(0x08)
	UWindowWidget* CheatMenu; // 0x390(0x08)
	UScreenOverlay_Afflictions_C* AfflictionWidget; // 0x398(0x08)
	UBP_Invitation_C* InviteRequest; // 0x3a0(0x08)
	UWindowWidget* QuickCheatMenu; // 0x3a8(0x08)

	void IsInitialized(bool Out);
	void CreateQuickCheatsIfNotCreated();
	void PushEvent(UWidget* EventWidget, bool Left);
	void CreateCheatsIfNotCreated();
	void RemoveAllWidgetsFromParents();
	void AddAllWidgetToViewport();
	void AddWidget(UUserWidget* Class, UWidget* Widget);
	void OnLoaded_73E4B65F44516401F86CB88F7530B278(UObject* Loaded);
	void PlayerSpawned(APlayerCharacter* Player);
	void RadarPointAdded(URadarPointComponent* radarPoint);
	void HandleSeamlessTravel();
	void OnVisibilityChanged();
	void ReceiveDestroyed();
	void OnHit_Event(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void OnEndLevelReceived_Event();
	void OnShowMainMenu();
	void QuickCheatMenuRequest();
	void CheatMenuRequest();
	void ExecuteUbergraph_BP_HUD(int32_t EntryPoint);
};

