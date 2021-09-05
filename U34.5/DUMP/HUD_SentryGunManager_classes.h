// WidgetBlueprintGeneratedClass HUD_SentryGunManager.HUD_SentryGunManager_C
// Size: 0x2b9 (Inherited: 0x230)
struct UHUD_SentryGunManager_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* AmmoHolder; // 0x238(0x08)
	UHUD_DefaultLabel_C* AmmoLabel; // 0x240(0x08)
	UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x248(0x08)
	UImage* ICON_SentryBG; // 0x250(0x08)
	UImage* ICON_SentryOutline; // 0x258(0x08)
	UHorizontalBox* KeyHolder; // 0x260(0x08)
	UUI_AdvancedLabel_C* KeyLabel; // 0x268(0x08)
	UBasic_HUD_BracketWindowBig_Single_C* RecallWindow; // 0x270(0x08)
	UVerticalBox* Root; // 0x278(0x08)
	UInventoryComponent* Inventory; // 0x280(0x08)
	ARecallableSentryGunItem* Item; // 0x288(0x08)
	int32_t PreviewSentryCount; // 0x290(0x04)
	UHUDVisibilityGroup* VisibilityGroup; // 0x298(0x08)
	TArray<UHUD_SentryGunWidget_C*> SentryWidgets; // 0x2a0(0x10)
	APlayerCharacter* Character; // 0x2b0(0x08)
	bool LaserpointerEquipped; // 0x2b8(0x01)

	void ItemEquipped(bool IsEquipped);
	void OutOfAmmo(bool OutOfAmmo);
	void PreConstruct(bool IsDesignTime);
	void AddSentry(int32_t Index);
	void Construct();
	void OnItemsLoaded();
	void OnActiveItemsChanged(ARecallableSentryGunItem* Item);
	void OnItemCurrentAmountChanged(int32_t amount);
	void Update Dynamic Visibility();
	void OnSentryStateChanged_Event();
	void Setup Dynamic Visibility();
	void OnLaserPointerPressed_Event();
	void OnLaserPointerReleased_Event();
	void ExecuteUbergraph_HUD_SentryGunManager(int32_t EntryPoint);
};

