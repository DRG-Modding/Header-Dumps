// WidgetBlueprintGeneratedClass HUD_Flares.HUD_Flares_C
// Size: 0x2d5 (Inherited: 0x250)
struct UHUD_Flares_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UHorizontalBox* FlareBox; // 0x258(0x08)
	struct UUI_AdvancedLabel_C* InputLabel; // 0x260(0x08)
	struct TArray<struct UHUD_FlareIcon_C*> Icons; // 0x268(0x10)
	struct TSet<struct FName> Reasons; // 0x278(0x50)
	bool LaserpointerPressed; // 0x2c8(0x01)
	char UnknownData_2C9[0x3]; // 0x2c9(0x03)
	int32_t NextIndex; // 0x2cc(0x04)
	float Progress; // 0x2d0(0x04)
	bool RechargingFirst; // 0x2d4(0x01)

	void SetFlareProduction(int32_t InNextIndex, float InProgress); // Function HUD_Flares.HUD_Flares_C.SetFlareProduction
	void CreateIcons(int32_t IconCount); // Function HUD_Flares.HUD_Flares_C.CreateIcons
	void OnItemsLoaded(); // Function HUD_Flares.HUD_Flares_C.OnItemsLoaded
	void OnFlareProduction(int32_t NextIndex, float Progress); // Function HUD_Flares.HUD_Flares_C.OnFlareProduction
	void Setup Dynamic HUD(); // Function HUD_Flares.HUD_Flares_C.Setup Dynamic HUD
	void OnFlareCountChanged(int32_t CurrentCount, struct UInventoryComponent* Inventory); // Function HUD_Flares.HUD_Flares_C.OnFlareCountChanged
	void Construct(); // Function HUD_Flares.HUD_Flares_C.Construct
	void UpdateVisibility(); // Function HUD_Flares.HUD_Flares_C.UpdateVisibility
	void OnLaserPointerPressed(); // Function HUD_Flares.HUD_Flares_C.OnLaserPointerPressed
	void OnLaserPointerReleased_Event(); // Function HUD_Flares.HUD_Flares_C.OnLaserPointerReleased_Event
	void PreConstruct(bool IsDesignTime); // Function HUD_Flares.HUD_Flares_C.PreConstruct
	void OnMaxFlareCountChanged_Event(int32_t CurrentCount, struct UInventoryComponent* Inventory); // Function HUD_Flares.HUD_Flares_C.OnMaxFlareCountChanged_Event
	void ExecuteUbergraph_HUD_Flares(int32_t EntryPoint); // Function HUD_Flares.HUD_Flares_C.ExecuteUbergraph_HUD_Flares
};

