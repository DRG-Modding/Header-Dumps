// WidgetBlueprintGeneratedClass HUD_SentryGunWidget.HUD_SentryGunWidget_C
// Size: 0x2f8 (Inherited: 0x250)
struct UHUD_SentryGunWidget_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* AmmoDepleted; // 0x258(0x08)
	struct UWidgetAnimation* SentryPlaced; // 0x260(0x08)
	struct UWidgetAnimation* ShotFired; // 0x268(0x08)
	struct UBorder* Ammo_Border; // 0x270(0x08)
	struct UProgressBar* AmmoProgress; // 0x278(0x08)
	struct UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x280(0x08)
	struct UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x288(0x08)
	struct UTextBlock* DATA_Ammo; // 0x290(0x08)
	struct UTextBlock* DATA_SentryName; // 0x298(0x08)
	struct UImage* ICON_SentryBG; // 0x2a0(0x08)
	struct UImage* ICON_SentryOutline; // 0x2a8(0x08)
	struct UTextBlock* StateText; // 0x2b0(0x08)
	struct UVerticalBox* VerticalBox; // 0x2b8(0x08)
	struct ASentryGun* SentryGun; // 0x2c0(0x08)
	struct ARecallableSentryGun* RecallableActor; // 0x2c8(0x08)
	struct ARecallableSentryGunItem* Item; // 0x2d0(0x08)
	int32_t Index; // 0x2d8(0x04)
	char UnknownData_2DC[0x4]; // 0x2dc(0x04)
	struct UInventoryComponent* Inventory; // 0x2e0(0x08)
	struct FMulticastInlineDelegate OnSentryStateChanged; // 0x2e8(0x10)

	void IsOutOfAmmo(bool OutOfAmmo); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.IsOutOfAmmo
	void GetMovementState(enum class ERecallableActorState State); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.GetMovementState
	void Set Sentry(struct ARecallableSentryGun* Sentry Gun); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry
	void Set Sentry Home(); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry Home
	void On Ammo Count Changed(int32_t AmmoCount, int32_t Change); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.On Ammo Count Changed
	void Init(struct UInventoryComponent* Inventory, struct ARecallableSentryGunItem* Item, int32_t Index); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Init
	void OnActiveItemsChanged(struct ARecallableSentryGunItem* Item); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnActiveItemsChanged
	void OnStateChanged(struct ARecallableActor* Sender, enum class ERecallableActorState State); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnStateChanged
	void Update State(struct FString reason); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Update State
	void PreConstruct(bool IsDesignTime); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.PreConstruct
	void OnSelectedItemChanged(struct ARecallableSentryGun* SentryGun); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSelectedItemChanged
	void Set Selected(bool Is Selected); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Selected
	void OnItemEquipped(struct AItem* Item); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemEquipped
	void OnGunStateChanged(struct ARedeployableSentryGun* Sender, enum class ERedeployableSentryGunState NewState); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnGunStateChanged
	void Check For Ammo Depletion(); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Check For Ammo Depletion
	void OnDeployProgress_Event(float Progress); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnDeployProgress_Event
	void Construct(); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Construct
	void OnAmmoDepletedFinished(); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnAmmoDepletedFinished
	void OnItemUnequipped_Event(struct AItem* Item); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemUnequipped_Event
	void ExecuteUbergraph_HUD_SentryGunWidget(int32_t EntryPoint); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.ExecuteUbergraph_HUD_SentryGunWidget
	void OnSentryStateChanged__DelegateSignature(); // Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSentryStateChanged__DelegateSignature
};

