// WidgetBlueprintGeneratedClass HUD_CoolDownBar.HUD_CoolDownBar_C
// Size: 0x278 (Inherited: 0x230)
struct UHUD_CoolDownBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Progress100; // 0x238(0x08)
	struct UImage* Progress25; // 0x240(0x08)
	struct UImage* Progress50; // 0x248(0x08)
	struct UImage* Progress75; // 0x250(0x08)
	struct TArray<struct UImage*> ProgressImages; // 0x258(0x10)
	struct UCoolDownItemAggregator* CoolDownAggregator; // 0x268(0x08)
	int32_t OldProgress; // 0x270(0x04)
	int32_t CurrentProgress; // 0x274(0x04)

	void Initialize(struct UCoolDownItemAggregator* Cooldown); // Function HUD_CoolDownBar.HUD_CoolDownBar_C.Initialize
	void Construct(); // Function HUD_CoolDownBar.HUD_CoolDownBar_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_CoolDownBar.HUD_CoolDownBar_C.Tick
	void ProgressSound(); // Function HUD_CoolDownBar.HUD_CoolDownBar_C.ProgressSound
	void ExecuteUbergraph_HUD_CoolDownBar(int32_t EntryPoint); // Function HUD_CoolDownBar.HUD_CoolDownBar_C.ExecuteUbergraph_HUD_CoolDownBar
};

