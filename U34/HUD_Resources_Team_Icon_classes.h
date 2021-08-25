// WidgetBlueprintGeneratedClass HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C
// Size: 0x27f (Inherited: 0x230)
struct UHUD_Resources_Team_Icon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* PingAmount; // 0x238(0x08)
	struct UWidgetSwitcher* AmountSwitcher; // 0x240(0x08)
	struct UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x248(0x08)
	struct UInvalidationBox* Invalidation; // 0x250(0x08)
	struct UHUD_DefaultLabel_C* ResourceAmount; // 0x258(0x08)
	struct UImage* ResourceCompleted; // 0x260(0x08)
	struct UHUD_DefaultLabel_C* ResourceName; // 0x268(0x08)
	struct UCappedResource* Resource; // 0x270(0x08)
	float amount; // 0x278(0x04)
	bool HideIfEmpty; // 0x27c(0x01)
	bool Counting; // 0x27d(0x01)
	bool Completed; // 0x27e(0x01)

	void UpdateAmount(float DeltaSeconds); // Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.UpdateAmount
	void SetResource(struct UCappedResource* InResource, bool HideIfEmpty); // Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.SetResource
	void Init Resource(); // Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.Init Resource
	void OnChanged(struct UCappedResource* Resource, float amount); // Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.OnChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.PreConstruct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.Tick
	void Construct(); // Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.Construct
	void OnPingAmountFinished(); // Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.OnPingAmountFinished
	void ExecuteUbergraph_HUD_Resources_Team_Icon(int32_t EntryPoint); // Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.ExecuteUbergraph_HUD_Resources_Team_Icon
};

