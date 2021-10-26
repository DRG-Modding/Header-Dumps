// WidgetBlueprintGeneratedClass HUD_CoolDownBar.HUD_CoolDownBar_C
// Size: 0x278 (Inherited: 0x230)
struct UHUD_CoolDownBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Progress100; // 0x238(0x08)
	UImage* Progress25; // 0x240(0x08)
	UImage* Progress50; // 0x248(0x08)
	UImage* Progress75; // 0x250(0x08)
	TArray<UImage*> ProgressImages; // 0x258(0x10)
	UCoolDownItemAggregator* CoolDownAggregator; // 0x268(0x08)
	int32_t OldProgress; // 0x270(0x04)
	int32_t CurrentProgress; // 0x274(0x04)

	void Initialize(UCoolDownItemAggregator* CoolDown);
	void Construct();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void ProgressSound();
	void ExecuteUbergraph_HUD_CoolDownBar(int32_t EntryPoint);
};

