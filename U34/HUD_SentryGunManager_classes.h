// WidgetBlueprintGeneratedClass HUD_SentryGunManager.HUD_SentryGunManager_C
// Size: 0x2b9 (Inherited: 0x230)
struct UHUD_SentryGunManager_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* AmmoHolder; // 0x238(0x08)
	struct UHUD_DefaultLabel_C* AmmoLabel; // 0x240(0x08)
	struct UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x248(0x08)
	struct UImage* ICON_SentryBG; // 0x250(0x08)
	struct UImage* ICON_SentryOutline; // 0x258(0x08)
	struct UHorizontalBox* KeyHolder; // 0x260(0x08)
	struct UUI_AdvancedLabel_C* KeyLabel; // 0x268(0x08)
	struct UBasic_HUD_BracketWindowBig_Single_C* RecallWindow; // 0x270(0x08)
	struct UVerticalBox* Root; // 0x278(0x08)
	struct UInventoryComponent* Inventory; // 0x280(0x08)
	struct ARecallableSentryGunItem* Item; // 0x288(0x08)
	int32_t PreviewSentryCount; // 0x290(0x04)
	char UnknownData_294[0x4]; // 0x294(0x04)
	struct UHUDVisibilityGroup* VisibilityGroup; // 0x298(0x08)
	struct TArray<struct UHUD_SentryGunWidget_C*> SentryWidgets; // 0x2a0(0x10)
	struct APlayerCharacter* Character; // 0x2b0(0x08)
	bool LaserpointerEquipped; // 0x2b8(0x01)

	void ItemEquipped(bool IsEquipped); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.ItemEquipped
	void OutOfAmmo(bool OutOfAmmo); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.OutOfAmmo
	void PreConstruct(bool IsDesignTime); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.PreConstruct
	void AddSentry(int32_t Index); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.AddSentry
	void Construct(); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.Construct
	void OnItemsLoaded(); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemsLoaded
	void OnActiveItemsChanged(struct ARecallableSentryGunItem* Item); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnActiveItemsChanged
	void OnItemCurrentAmountChanged(int32_t amount); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemCurrentAmountChanged
	void Update Dynamic Visibility(); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.Update Dynamic Visibility
	void OnSentryStateChanged_Event(); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnSentryStateChanged_Event
	void Setup Dynamic Visibility(); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.Setup Dynamic Visibility
	void OnLaserPointerPressed_Event(); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerPressed_Event
	void OnLaserPointerReleased_Event(); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerReleased_Event
	void ExecuteUbergraph_HUD_SentryGunManager(int32_t EntryPoint); // Function HUD_SentryGunManager.HUD_SentryGunManager_C.ExecuteUbergraph_HUD_SentryGunManager
};

