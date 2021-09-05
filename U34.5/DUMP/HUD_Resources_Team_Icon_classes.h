// WidgetBlueprintGeneratedClass HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C
// Size: 0x27f (Inherited: 0x230)
struct UHUD_Resources_Team_Icon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* PingAmount; // 0x238(0x08)
	UWidgetSwitcher* AmountSwitcher; // 0x240(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x248(0x08)
	UInvalidationBox* Invalidation; // 0x250(0x08)
	UHUD_DefaultLabel_C* ResourceAmount; // 0x258(0x08)
	UImage* ResourceCompleted; // 0x260(0x08)
	UHUD_DefaultLabel_C* ResourceName; // 0x268(0x08)
	UCappedResource* Resource; // 0x270(0x08)
	float amount; // 0x278(0x04)
	bool HideIfEmpty; // 0x27c(0x01)
	bool Counting; // 0x27d(0x01)
	bool Completed; // 0x27e(0x01)

	void UpdateAmount(float DeltaSeconds);
	void SetResource(UCappedResource* InResource, bool HideIfEmpty);
	void Init Resource();
	void OnChanged(UCappedResource* Resource, float amount);
	void PreConstruct(bool IsDesignTime);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void Construct();
	void OnPingAmountFinished();
	void ExecuteUbergraph_HUD_Resources_Team_Icon(int32_t EntryPoint);
};

