// BlueprintGeneratedClass BP_HUD.BP_HUD_C
// Size: 0x3b0 (Inherited: 0x338)
struct ABP_HUD_C : AFSDHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x340(0x08)
	struct TArray<struct UWidget*> Widgets; // 0x348(0x10)
	struct APlayerController* PlayerController; // 0x358(0x08)
	bool HudInitialized; // 0x360(0x01)
	char UnknownData_361[0x7]; // 0x361(0x07)
	struct UFSDMainHUDWidget* HudWidget; // 0x368(0x08)
	struct TArray<struct URadarPointComponent*> RadarPointsInQueue; // 0x370(0x10)
	struct APlayerCharacter* PlayerCharacter; // 0x380(0x08)
	struct UWindowWidget* EscMenu; // 0x388(0x08)
	struct UWindowWidget* CheatMenu; // 0x390(0x08)
	struct UScreenOverlay_Afflictions_C* AfflictionWidget; // 0x398(0x08)
	struct UBP_Invitation_C* InviteRequest; // 0x3a0(0x08)
	struct UWindowWidget* QuickCheatMenu; // 0x3a8(0x08)

	void IsInitialized(bool Out); // Function BP_HUD.BP_HUD_C.IsInitialized
	void CreateQuickCheatsIfNotCreated(); // Function BP_HUD.BP_HUD_C.CreateQuickCheatsIfNotCreated
	void PushEvent(struct UWidget* EventWidget, bool Left); // Function BP_HUD.BP_HUD_C.PushEvent
	void CreateCheatsIfNotCreated(); // Function BP_HUD.BP_HUD_C.CreateCheatsIfNotCreated
	void RemoveAllWidgetsFromParents(); // Function BP_HUD.BP_HUD_C.RemoveAllWidgetsFromParents
	void AddAllWidgetToViewport(); // Function BP_HUD.BP_HUD_C.AddAllWidgetToViewport
	void AddWidget(struct UUserWidget* Class, struct UWidget* Widget); // Function BP_HUD.BP_HUD_C.AddWidget
	void OnLoaded_73E4B65F44516401F86CB88F7530B278(struct UObject* Loaded); // Function BP_HUD.BP_HUD_C.OnLoaded_73E4B65F44516401F86CB88F7530B278
	void PlayerSpawned(struct APlayerCharacter* Player); // Function BP_HUD.BP_HUD_C.PlayerSpawned
	void RadarPointAdded(struct URadarPointComponent* radarPoint); // Function BP_HUD.BP_HUD_C.RadarPointAdded
	void HandleSeamlessTravel(); // Function BP_HUD.BP_HUD_C.HandleSeamlessTravel
	void OnVisibilityChanged(); // Function BP_HUD.BP_HUD_C.OnVisibilityChanged
	void ReceiveDestroyed(); // Function BP_HUD.BP_HUD_C.ReceiveDestroyed
	void OnHit_Event(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_HUD.BP_HUD_C.OnHit_Event
	void OnEndLevelReceived_Event(); // Function BP_HUD.BP_HUD_C.OnEndLevelReceived_Event
	void OnShowMainMenu(); // Function BP_HUD.BP_HUD_C.OnShowMainMenu
	void QuickCheatMenuRequest(); // Function BP_HUD.BP_HUD_C.QuickCheatMenuRequest
	void CheatMenuRequest(); // Function BP_HUD.BP_HUD_C.CheatMenuRequest
	void ExecuteUbergraph_BP_HUD(int32_t EntryPoint); // Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD
};

