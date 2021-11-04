// WidgetBlueprintGeneratedClass HUD_Resources_Player.HUD_Resources_Player_C
// Size: 0x274 (Inherited: 0x230)
struct UHUD_Resources_Player_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHUD_OptionalHudElement_C* HUD_OptionalHudElement; // 0x238(0x08)
	UHorizontalBox* ResourceParent; // 0x240(0x08)
	URetainerBox* Retainer; // 0x248(0x08)
	APlayerCharacter* Character; // 0x250(0x08)
	UResourcesComponent* ResourceComponent; // 0x258(0x08)
	bool LaserpointerEquipped; // 0x260(0x01)
	UHUDVisibilityGroup* VisibilityGroup; // 0x268(0x08)
	int32_t PreviewCount; // 0x270(0x04)

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Add Resource(UCappedResource* Resource);
	void OnResourceAdded(UCappedResource* Resource);
	void OnResourceChanged(UHUD_Resources_Player_Icon_C* ResourceIcon);
	void RefreshVisibility();
	void OnLaserPointerPressed_Event();
	void OnLaserPointerReleased_Event();
	void ExecuteUbergraph_HUD_Resources_Player(int32_t EntryPoint);
};

