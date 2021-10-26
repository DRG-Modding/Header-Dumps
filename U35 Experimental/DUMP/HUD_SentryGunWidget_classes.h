// WidgetBlueprintGeneratedClass HUD_SentryGunWidget.HUD_SentryGunWidget_C
// Size: 0x2f8 (Inherited: 0x250)
struct UHUD_SentryGunWidget_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* AmmoDepleted; // 0x258(0x08)
	UWidgetAnimation* SentryPlaced; // 0x260(0x08)
	UWidgetAnimation* ShotFired; // 0x268(0x08)
	UBorder* Ammo_Border; // 0x270(0x08)
	UProgressBar* AmmoProgress; // 0x278(0x08)
	UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x280(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x288(0x08)
	UTextBlock* DATA_Ammo; // 0x290(0x08)
	UTextBlock* DATA_SentryName; // 0x298(0x08)
	UImage* ICON_SentryBG; // 0x2a0(0x08)
	UImage* ICON_SentryOutline; // 0x2a8(0x08)
	UTextBlock* StateText; // 0x2b0(0x08)
	UVerticalBox* VerticalBox; // 0x2b8(0x08)
	ASentryGun* SentryGun; // 0x2c0(0x08)
	ARecallableSentryGun* RecallableActor; // 0x2c8(0x08)
	ARecallableSentryGunItem* Item; // 0x2d0(0x08)
	int32_t Index; // 0x2d8(0x04)
	UInventoryComponent* Inventory; // 0x2e0(0x08)
	FMulticastInlineDelegate OnSentryStateChanged; // 0x2e8(0x10)

	void IsOutOfAmmo(bool OutOfAmmo);
	void GetMovementState(enum class ERecallableActorState State);
	void Set Sentry(ARecallableSentryGun* Sentry Gun);
	void Set Sentry Home();
	void On Ammo Count Changed(int32_t AmmoCount, int32_t Change);
	void Init(UInventoryComponent* Inventory, ARecallableSentryGunItem* Item, int32_t Index);
	void OnActiveItemsChanged(ARecallableSentryGunItem* Item);
	void OnStateChanged(ARecallableActor* Sender, enum class ERecallableActorState State);
	void Update State(FString reason);
	void PreConstruct(bool IsDesignTime);
	void OnSelectedItemChanged(ARecallableSentryGun* SentryGun);
	void Set Selected(bool Is Selected);
	void OnItemEquipped(AItem* Item);
	void OnGunStateChanged(ARedeployableSentryGun* Sender, enum class ERedeployableSentryGunState NewState);
	void Check For Ammo Depletion();
	void OnDeployProgress_Event(float Progress);
	void Construct();
	void OnAmmoDepletedFinished();
	void OnItemUnequipped_Event(AItem* Item);
	void ExecuteUbergraph_HUD_SentryGunWidget(int32_t EntryPoint);
	void OnSentryStateChanged__DelegateSignature();
};

