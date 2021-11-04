// WidgetBlueprintGeneratedClass HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C
// Size: 0x2a0 (Inherited: 0x230)
struct UHUD_Resources_Player_Icon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Ping; // 0x238(0x08)
	UWidgetAnimation* Intro; // 0x240(0x08)
	UWidgetAnimation* Outro; // 0x248(0x08)
	UBorder* BG; // 0x250(0x08)
	UInvalidationBox* Invalidation; // 0x258(0x08)
	UHUD_DefaultLabel_C* Item_Name; // 0x260(0x08)
	UProgressBar* ItemProgress; // 0x268(0x08)
	UHUD_DefaultLabel_C* ResourceAmount; // 0x270(0x08)
	UBasic_ResourceIcon_C* ResourceIcon; // 0x278(0x08)
	UCappedResource* Resource; // 0x280(0x08)
	float Amount; // 0x288(0x04)
	FMulticastInlineDelegate OnResourceChanged; // 0x290(0x10)

	void UpdateIfChanged(bool Changed);
	void SetAmount(float Amount, bool ValueChanged);
	void Refresh();
	void SetResource(UCappedResource* InResource, bool HideIfEmpty);
	void OnChanged(UCappedResource* Resource, float Amount);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnOutroFinished();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void OnIncreased(UCappedResource* Resource, float Amount);
	void Init Resource();
	void ExecuteUbergraph_HUD_Resources_Player_Icon(int32_t EntryPoint);
	void OnResourceChanged__DelegateSignature(UHUD_Resources_Player_Icon_C* ResourceIcon);
};

