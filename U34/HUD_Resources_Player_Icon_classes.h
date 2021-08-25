// WidgetBlueprintGeneratedClass HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C
// Size: 0x2a8 (Inherited: 0x230)
struct UHUD_Resources_Player_Icon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Ping; // 0x238(0x08)
	struct UWidgetAnimation* Intro; // 0x240(0x08)
	struct UWidgetAnimation* Outro; // 0x248(0x08)
	struct UBasic_ResourceIcon_C* Basic_ResourceIcon_1; // 0x250(0x08)
	struct UBorder* BG; // 0x258(0x08)
	struct UBorder* Border_1; // 0x260(0x08)
	struct UInvalidationBox* Invalidation; // 0x268(0x08)
	struct UHUD_DefaultLabel_C* Item_Name; // 0x270(0x08)
	struct UProgressBar* ItemProgress; // 0x278(0x08)
	struct UHUD_DefaultLabel_C* ResourceAmount; // 0x280(0x08)
	struct UCappedResource* Resource; // 0x288(0x08)
	float amount; // 0x290(0x04)
	char UnknownData_294[0x4]; // 0x294(0x04)
	struct FMulticastInlineDelegate OnResourceChanged; // 0x298(0x10)

	void UpdateIfChanged(bool Changed); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.UpdateIfChanged
	void SetAmount(float amount, bool ValueChanged); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetAmount
	void Refresh(); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Refresh
	void SetResource(struct UCappedResource* InResource, bool HideIfEmpty); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetResource
	void Init Resource(); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Init Resource
	void OnIncreased(struct UCappedResource* Resource, float amount); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnIncreased
	void OnChanged(struct UCappedResource* Resource, float amount); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnChanged
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Tick
	void PreConstruct(bool IsDesignTime); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.PreConstruct
	void Construct(); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Construct
	void OnOutroFinished(); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnOutroFinished
	void ExecuteUbergraph_HUD_Resources_Player_Icon(int32_t EntryPoint); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.ExecuteUbergraph_HUD_Resources_Player_Icon
	void OnResourceChanged__DelegateSignature(struct UHUD_Resources_Player_Icon_C* ResourceIcon); // Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnResourceChanged__DelegateSignature
};

